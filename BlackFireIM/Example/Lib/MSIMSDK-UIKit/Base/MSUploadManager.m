//
//  BFUploadManager.m
//  BlackFireIM
//
//  Created by benny wang on 2021/3/31.
//

#import "MSUploadManager.h"
#import <QCloudCOSXML/QCloudCOSXMLTransfer.h>
#import <QCloudCOSXML/QCloudCOSXMLDownloadObjectRequest.h>



@interface MSUploadManager()


@end
@implementation MSUploadManager

static MSUploadManager *_manager;
+ (instancetype)sharedInstance
{
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        _manager = [[MSUploadManager alloc]init];
    });
    return _manager;
}

- (void)ms_uploadWithObject:(id)object
                   fileType:(MSUploadFileType)type
                   progress:(normalProgress)progress
                       succ:(normalSucc)succ
                       fail:(normalFail)fail
{
    if (object == nil) {
        fail(-99,@"");
        return;
    }
    QCloudCOSXMLUploadObjectRequest *put = [QCloudCOSXMLUploadObjectRequest new];
    if (type == MSUploadFileTypeImage || type == MSUploadFileTypeAvatar) {
        if ([object isKindOfClass:[UIImage class]]) {
            UIImage *image = object;
            NSData *imageData = UIImageJPEGRepresentation(image, 0.75);
            put.body = imageData;
        }else {
            NSString *path = object;
            put.body = [NSURL fileURLWithPath:path];
        }
        if (type == MSUploadFileTypeAvatar) {
            put.object = [NSString stringWithFormat:@"common/%@.jpg",[NSString uuidString]];
        }else {
            put.object = [NSString stringWithFormat:@"im_image/%@.jpg",[NSString uuidString]];
        }
    }else if (type == MSUploadFileTypeVideo) {
        NSString *path = object;
        put.body = [NSURL fileURLWithPath:path];
        put.object = [NSString stringWithFormat:@"im_video/%@.mp4",[NSString uuidString]];
    }else if (type == MSUploadFileTypeVoice) {
        NSString *path = object;
        put.body = [NSURL fileURLWithPath:path];
        put.object = [NSString stringWithFormat:@"im_voice/%@",[path lastPathComponent]];
    }
    put.bucket = @"msim-1252460681";
    [put setSendProcessBlock:^(int64_t bytesSent, int64_t totalBytesSent, int64_t totalBytesExpectedToSend) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (progress) progress(totalBytesSent*1.0/totalBytesExpectedToSend*1.0);
        });
    }];
    [put setFinishBlock:^(QCloudUploadObjectResult * _Nullable result, NSError * _Nullable error) {
            
        dispatch_async(dispatch_get_main_queue(), ^{
            if (error == nil) {
                if (succ) succ(result.location);
            }else {
                if (fail) fail(error.code,error.localizedDescription);
            }
        });
    }];
    [[QCloudCOSTransferMangerService defaultCOSTransferManager]UploadObject:put];
}



- (void)ms_downloadFromUrl:(NSString *)url
                toSavePath:(NSString *)savePath
                  progress:(normalProgress)progress
                      succ:(normalSucc)succ
                      fail:(normalFail)fail
{
    if (![url hasPrefix:@"http"] || savePath.length == 0) {
        fail(-99,@"待下载的文件地址非法");
        return;
    }
    QCloudCOSXMLDownloadObjectRequest *request = [QCloudCOSXMLDownloadObjectRequest new];
    request.bucket = @"msim-1252460681";
    request.object = [NSURL URLWithString:url].path;
    request.downloadingURL = [NSURL fileURLWithPath:savePath];
    [request setFinishBlock:^(id  _Nullable outputObject, NSError * _Nullable error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (error == nil) {
                if (succ) succ(savePath);
            }else {
                if (fail) fail(error.code,error.localizedDescription);
            }
        });
    }];
    [request setDownProcessBlock:^(int64_t bytesDownload, int64_t totalBytesDownload, int64_t totalBytesExpectedToDownload) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (progress) progress(totalBytesDownload*1.0/totalBytesExpectedToDownload*1.0);
        });
    }];
    [[QCloudCOSTransferMangerService defaultCOSTransferManager]DownloadObject:request];
}


@end
