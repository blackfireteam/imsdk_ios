//
//  IMSDKConfig.m
//  BlackFireIM
//
//  Created by benny wang on 2021/2/25.
//

#import "IMSDKConfig.h"

@implementation IMSDKConfig

+ (instancetype)defaultConfig
{
    IMSDKConfig *config = [[IMSDKConfig alloc]init];
    config.ip = @"im.ekfree.com";
//    config.ip = @"192.168.50.188";
    config.port = 18888;
    config.heartDuration = 30;
    config.retryCount = 6;
    config.chatListPageCount = 50;
    return config;
}

//写入保护
- (void)setHeartDuration:(NSInteger)heartDuration
{
    _heartDuration = MAX(heartDuration, 5);
    _heartDuration = MIN(_heartDuration, 4*60);
}

- (void)setRetryCount:(NSInteger)retryCount
{
    _retryCount = MAX(1, retryCount);
}

@end