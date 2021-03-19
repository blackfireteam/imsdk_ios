//
//  MSDBProfileStore.h
//  BlackFireIM
//
//  Created by benny wang on 2021/3/15.
//

#import "MSDBBaseStore.h"
#import "MSProfileInfo.h"


NS_ASSUME_NONNULL_BEGIN

@interface MSDBProfileStore : MSDBBaseStore


///向数据库中添加一条记录
- (BOOL)addProfile:(MSProfileInfo *)profile;

///向数据库中添加批量记录
- (BOOL)addProfiles:(NSArray<MSProfileInfo *> *)profiles;

///查找某一条prifle
- (MSProfileInfo *)searchProfile:(NSString *)user_id;

///返回数据库中所有的记录
- (NSArray *)allProfiles;

@end

NS_ASSUME_NONNULL_END