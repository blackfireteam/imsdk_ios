//
//  NSFileManager+filePath.m
//  BlackFireIM
//
//  Created by benny wang on 2021/3/2.
//

#import "NSFileManager+filePath.h"
#import "MSIMTools.h"

@implementation NSFileManager (filePath)


+ (NSString *)pathDBMessage
{
    NSString *path = [NSString stringWithFormat:@"%@/User/%@/Chat/DB/", NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject,[MSIMTools sharedInstance].user_id];
    if (![[NSFileManager defaultManager] fileExistsAtPath:path]) {
        NSError *error;
        [[NSFileManager defaultManager] createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:&error];
        if (error) {
            NSLog(@"File Create Failed: %@", path);
        }
    }
    return [path stringByAppendingString:@"message.sqlite3"];
}

+ (NSString *)pathDBCommon
{
    NSString *path = [NSString stringWithFormat:@"%@/Chat/DB/", NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject];
    if (![[NSFileManager defaultManager] fileExistsAtPath:path]) {
        NSError *error;
        [[NSFileManager defaultManager] createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:&error];
        if (error) {
            NSLog(@"File Create Failed: %@", path);
        }
    }
    return [path stringByAppendingString:@"common.sqlite3"];
}

//聊天图片保存地址
+ (NSString *)pathForIMImage
{
    NSString *path = [NSString stringWithFormat:@"%@/MS/Image/", NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject];
    if (![[NSFileManager defaultManager] fileExistsAtPath:path]) {
        NSError *error;
        [[NSFileManager defaultManager] createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:&error];
        if (error) {
            NSLog(@"File Create Failed: %@", path);
        }
    }
    return path;
}

@end
