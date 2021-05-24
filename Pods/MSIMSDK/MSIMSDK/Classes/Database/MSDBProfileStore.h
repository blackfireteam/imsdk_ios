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

///向数据库中添加批量记录
- (void)addProfiles:(NSArray<MSProfileInfo *> *)profiles;

///查找某一条profle
- (MSProfileInfo *)searchProfile:(NSString *)user_id;

///返回数据库中所有的记录
- (NSArray *)allProfiles;

@end

NS_ASSUME_NONNULL_END