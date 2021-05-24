//
//  MSDBManager.m
//  BlackFireIM
//
//  Created by benny wang on 2021/3/2.
//

#import "MSDBManager.h"
#import "FMDB.h"
#import "MSIMTools.h"
#import "NSFileManager+filePath.h"
#import "MSConversationProvider.h"
#import "MSDBMessageStore.h"


@interface MSDBManager()


@end
@implementation MSDBManager

static MSDBManager *manager;
+ (instancetype)sharedInstance
{
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        manager = [[MSDBManager alloc]init];
    });
    return manager;
}

- (instancetype)init
{
    if (self = [super init]) {
        _tableCache = [[NSCache alloc]init];
    }
    return self;
}

- (FMDatabaseQueue *)messageQueue
{
    if(!_messageQueue) {
        if([MSIMTools sharedInstance].user_id) {
            NSString *messageQueuePath = [NSFileManager pathDBMessage];
            _messageQueue = [FMDatabaseQueue databaseQueueWithPath:messageQueuePath];
            [self scanAllTables];
        }
    }
    return _messageQueue;
}

- (FMDatabaseQueue *)commonQueue
{
    if(!_commonQueue) {
        if([MSIMTools sharedInstance].user_id) {
            NSString *commonQueuePath = [NSFileManager pathDBCommon];
            _commonQueue = [FMDatabaseQueue databaseQueueWithPath:commonQueuePath];
        }
    }
    return _commonQueue;
}

- (void)accountChanged
{
    [self scanAllTables];
    [[MSConversationProvider provider]clean];
    [_messageQueue close];
    _messageQueue = nil;
}

///app启动或切换帐号时，扫描消息数据库中所有消息表，将消息发送中状态的消息改成发送失败
- (void)scanAllTables
{
    [self.messageQueue inDeferredTransaction:^(FMDatabase * _Nonnull db, BOOL * _Nonnull rollback) {
        FMResultSet *resultSet = [db executeQuery:@"SELECT * FROM sqlite_master where type='table';"];
        while ([resultSet next]) {
            NSString *tableName = [resultSet stringForColumnIndex:1];
            if ([tableName hasPrefix:@"message_user_"]) {
                NSString *sqlStr = [NSString stringWithFormat:@"update %@ set send_status = '%zd' where send_status = '%zd'",tableName,BFIM_MSG_STATUS_SEND_FAIL,BFIM_MSG_STATUS_SENDING];
                [db executeUpdate:sqlStr];
            }
        }
    }];
}

@end