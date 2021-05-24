// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chatProtobuf.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class ChatItem;
@class ChatR;
@class GetProfile;
@class Profile;
@class Spark;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - ChatProtobufRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface ChatProtobufRoot : GPBRootObject
@end

#pragma mark - Ping

typedef GPB_ENUM(Ping_FieldNumber) {
  Ping_FieldNumber_Type = 1,
};

/**
 * 0
 **/
GPB_FINAL @interface Ping : GPBMessage

@property(nonatomic, readwrite) int64_t type;

@end

#pragma mark - ImLogin

typedef GPB_ENUM(ImLogin_FieldNumber) {
  ImLogin_FieldNumber_Sign = 1,
  ImLogin_FieldNumber_Token = 2,
  ImLogin_FieldNumber_Ct = 3,
};

/**
 * 1
 **/
GPB_FINAL @interface ImLogin : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

/** 从应用方获取的imtoken */
@property(nonatomic, readwrite, copy, null_resettable) NSString *token;

/** 客户端类型 0:Android   1:ios    2:web */
@property(nonatomic, readwrite) int64_t ct;

@end

#pragma mark - ImLogout

typedef GPB_ENUM(ImLogout_FieldNumber) {
  ImLogout_FieldNumber_Sign = 1,
};

/**
 * 2
 **/
GPB_FINAL @interface ImLogout : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

@end

#pragma mark - Result

typedef GPB_ENUM(Result_FieldNumber) {
  Result_FieldNumber_Sign = 1,
  Result_FieldNumber_Code = 2,
  Result_FieldNumber_Msg = 3,
  Result_FieldNumber_NowTime = 4,
  Result_FieldNumber_Uid = 5,
};

/**
 * 3
 **/
GPB_FINAL @interface Result : GPBMessage

/** 信息标示，原路返回 */
@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite) int64_t code;

@property(nonatomic, readwrite, copy, null_resettable) NSString *msg;

/** 当前服务器时间戳(精确到秒) */
@property(nonatomic, readwrite) int64_t nowTime;

/** 鉴权时返回的uid */
@property(nonatomic, readwrite) int64_t uid;

@end

#pragma mark - ChatS

typedef GPB_ENUM(ChatS_FieldNumber) {
  ChatS_FieldNumber_Sign = 1,
  ChatS_FieldNumber_Type = 2,
  ChatS_FieldNumber_ToUid = 3,
  ChatS_FieldNumber_Title = 4,
  ChatS_FieldNumber_Body = 5,
  ChatS_FieldNumber_Thumb = 6,
  ChatS_FieldNumber_Width = 7,
  ChatS_FieldNumber_Height = 8,
  ChatS_FieldNumber_Duration = 9,
  ChatS_FieldNumber_Lat = 10,
  ChatS_FieldNumber_Lng = 11,
  ChatS_FieldNumber_Zoom = 12,
};

/**
 * 4
 **/
GPB_FINAL @interface ChatS : GPBMessage

/** 客户端自定义标识，服务器会原样返回 */
@property(nonatomic, readwrite) int64_t sign;

/** 消息类型 */
@property(nonatomic, readwrite) int64_t type;

/** 发送给谁 */
@property(nonatomic, readwrite) int64_t toUid;

/** 消息内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/** 消息内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *body;

/** 封面图 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *thumb;

/** 封面图的宽度 */
@property(nonatomic, readwrite) int64_t width;

/** 封面图的高度 */
@property(nonatomic, readwrite) int64_t height;

/** 时长 */
@property(nonatomic, readwrite) int64_t duration;

/** 纬度 */
@property(nonatomic, readwrite) double lat;

/** 经度 */
@property(nonatomic, readwrite) double lng;

/** 地图缩放层级 */
@property(nonatomic, readwrite) int64_t zoom;

@end

#pragma mark - ChatSR

typedef GPB_ENUM(ChatSR_FieldNumber) {
  ChatSR_FieldNumber_Sign = 1,
  ChatSR_FieldNumber_MsgId = 2,
  ChatSR_FieldNumber_MsgTime = 3,
};

/**
 * 5
 **/
GPB_FINAL @interface ChatSR : GPBMessage

/** 信息标示，原路返回 */
@property(nonatomic, readwrite) int64_t sign;

/** 消息id */
@property(nonatomic, readwrite) int64_t msgId;

@property(nonatomic, readwrite) int64_t msgTime;

@end

#pragma mark - ChatR

typedef GPB_ENUM(ChatR_FieldNumber) {
  ChatR_FieldNumber_Sign = 1,
  ChatR_FieldNumber_FromUid = 2,
  ChatR_FieldNumber_ToUid = 3,
  ChatR_FieldNumber_MsgId = 4,
  ChatR_FieldNumber_MsgTime = 5,
  ChatR_FieldNumber_Sput = 6,
  ChatR_FieldNumber_NewMsg = 7,
  ChatR_FieldNumber_Type = 8,
  ChatR_FieldNumber_Title = 9,
  ChatR_FieldNumber_Body = 10,
  ChatR_FieldNumber_Thumb = 11,
  ChatR_FieldNumber_Width = 12,
  ChatR_FieldNumber_Height = 13,
  ChatR_FieldNumber_Duration = 14,
  ChatR_FieldNumber_Lat = 15,
  ChatR_FieldNumber_Lng = 16,
  ChatR_FieldNumber_Zoom = 17,
};

/**
 * 6
 **/
GPB_FINAL @interface ChatR : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

/** 谁发的 */
@property(nonatomic, readwrite) int64_t fromUid;

/** 发给谁 */
@property(nonatomic, readwrite) int64_t toUid;

/** 消息id */
@property(nonatomic, readwrite) int64_t msgId;

/** 消息时间（以服务器为准 精确到百万分之一秒的时间戳） */
@property(nonatomic, readwrite) int64_t msgTime;

/** sender_profile_update_time 发送人的profile更新时间（精确到秒的时间戳） */
@property(nonatomic, readwrite) int64_t sput;

/** 是否显示 new message */
@property(nonatomic, readwrite) BOOL newMsg;

/** 消息类型 */
@property(nonatomic, readwrite) int64_t type;

/** 消息内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/** 消息内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *body;

/** 封面图 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *thumb;

/** 封面图的宽度 */
@property(nonatomic, readwrite) int64_t width;

/** 封面图的高度 */
@property(nonatomic, readwrite) int64_t height;

/** 时长 */
@property(nonatomic, readwrite) int64_t duration;

/** 纬度 */
@property(nonatomic, readwrite) double lat;

/** 经度 */
@property(nonatomic, readwrite) double lng;

/** 地图缩放层级 */
@property(nonatomic, readwrite) int64_t zoom;

@end

#pragma mark - ChatRBatch

typedef GPB_ENUM(ChatRBatch_FieldNumber) {
  ChatRBatch_FieldNumber_Sign = 1,
  ChatRBatch_FieldNumber_MsgsArray = 2,
};

/**
 * 7
 **/
GPB_FINAL @interface ChatRBatch : GPBMessage

/** 信息标示，原路返回 */
@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ChatR*> *msgsArray;
/** The number of items in @c msgsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgsArray_Count;

@end

#pragma mark - GetHistory

typedef GPB_ENUM(GetHistory_FieldNumber) {
  GetHistory_FieldNumber_Sign = 1,
  GetHistory_FieldNumber_ToUid = 2,
  GetHistory_FieldNumber_MsgEnd = 3,
  GetHistory_FieldNumber_MsgStart = 4,
  GetHistory_FieldNumber_Offset = 5,
};

/**
 * 8 拉取历史消息，只能按时间倒序拉取，服务器会返回offset条，或者到msg_start为止
 * msg_end  msg_start 是客户端两个连续的block中间缺失的部分
 **/
GPB_FINAL @interface GetHistory : GPBMessage

/** 客户端自定义标识，服务器会原样返回 */
@property(nonatomic, readwrite) int64_t sign;

/** 和谁的聊天记录 */
@property(nonatomic, readwrite) int64_t toUid;

/** 从这条消息往前拉（不包括此条） */
@property(nonatomic, readwrite) int64_t msgEnd;

/** 最多拉到这条（不包括此条） */
@property(nonatomic, readwrite) int64_t msgStart;

/** 拉多少条，默认20，最多100 */
@property(nonatomic, readwrite) int64_t offset;

@end

#pragma mark - Revoke

typedef GPB_ENUM(Revoke_FieldNumber) {
  Revoke_FieldNumber_Sign = 1,
  Revoke_FieldNumber_ToUid = 2,
  Revoke_FieldNumber_MsgId = 3,
};

/**
 * 9
 **/
GPB_FINAL @interface Revoke : GPBMessage

/** 客户端自定义标识，服务器会原样返回 */
@property(nonatomic, readwrite) int64_t sign;

/** 会话列表的对方id */
@property(nonatomic, readwrite) int64_t toUid;

/** 撤回的消息id */
@property(nonatomic, readwrite) int64_t msgId;

@end

#pragma mark - MsgRead

typedef GPB_ENUM(MsgRead_FieldNumber) {
  MsgRead_FieldNumber_Sign = 1,
  MsgRead_FieldNumber_ToUid = 2,
  MsgRead_FieldNumber_MsgId = 3,
};

/**
 * 10
 **/
GPB_FINAL @interface MsgRead : GPBMessage

/** 客户端自定义标识，服务器会原样返回 */
@property(nonatomic, readwrite) int64_t sign;

/** 谁发的消息已读 */
@property(nonatomic, readwrite) int64_t toUid;

/** 已读消息id */
@property(nonatomic, readwrite) int64_t msgId;

@end

#pragma mark - DelChat

typedef GPB_ENUM(DelChat_FieldNumber) {
  DelChat_FieldNumber_Sign = 1,
  DelChat_FieldNumber_ToUid = 2,
};

/**
 * 11 删除会话
 **/
GPB_FINAL @interface DelChat : GPBMessage

/** 客户端自定义标识，服务器会原样返回 */
@property(nonatomic, readwrite) int64_t sign;

/** 删除谁的 */
@property(nonatomic, readwrite) int64_t toUid;

@end

#pragma mark - GetChatList

typedef GPB_ENUM(GetChatList_FieldNumber) {
  GetChatList_FieldNumber_Sign = 1,
  GetChatList_FieldNumber_UpdateTime = 2,
  GetChatList_FieldNumber_Uid = 3,
};

/**
 * 12
 **/
GPB_FINAL @interface GetChatList : GPBMessage

/** 客户端自定义标识，服务器会原样返回 */
@property(nonatomic, readwrite) int64_t sign;

/** 客户端本地保存的会话列表的最新一个会话的变动时间（精确到百万分之一秒的时间戳） */
@property(nonatomic, readwrite) int64_t updateTime;

/** websocket 端传此值, 作为分页指针 */
@property(nonatomic, readwrite) int64_t uid;

@end

#pragma mark - ChatItem

typedef GPB_ENUM(ChatItem_FieldNumber) {
  ChatItem_FieldNumber_Sign = 1,
  ChatItem_FieldNumber_Uid = 2,
  ChatItem_FieldNumber_MsgEnd = 3,
  ChatItem_FieldNumber_MsgLastRead = 4,
  ChatItem_FieldNumber_ShowMsgId = 5,
  ChatItem_FieldNumber_ShowMsgType = 6,
  ChatItem_FieldNumber_ShowMsg = 7,
  ChatItem_FieldNumber_ShowMsgTime = 8,
  ChatItem_FieldNumber_Unread = 9,
  ChatItem_FieldNumber_Matched = 10,
  ChatItem_FieldNumber_NewMsg = 11,
  ChatItem_FieldNumber_MyMove = 12,
  ChatItem_FieldNumber_IceBreak = 13,
  ChatItem_FieldNumber_TipFree = 14,
  ChatItem_FieldNumber_TopAlbum = 15,
  ChatItem_FieldNumber_IBlockU = 16,
  ChatItem_FieldNumber_Connected = 17,
  ChatItem_FieldNumber_Deleted = 18,
};

/**
 * 13
 **/
GPB_FINAL @interface ChatItem : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite) int64_t uid;

@property(nonatomic, readwrite) int64_t msgEnd;

@property(nonatomic, readwrite) int64_t msgLastRead;

@property(nonatomic, readwrite) int64_t showMsgId;

/** 仅websocket端 返回 */
@property(nonatomic, readwrite) int64_t showMsgType;

/** 仅websocket端 返回 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *showMsg;

@property(nonatomic, readwrite) int64_t showMsgTime;

@property(nonatomic, readwrite) int64_t unread;

@property(nonatomic, readwrite) BOOL matched;

@property(nonatomic, readwrite) BOOL newMsg;

@property(nonatomic, readwrite) BOOL myMove;

@property(nonatomic, readwrite) BOOL iceBreak;

@property(nonatomic, readwrite) BOOL tipFree;

@property(nonatomic, readwrite) BOOL topAlbum;

@property(nonatomic, readwrite) BOOL iBlockU;

/** 双方互发过消息了 */
@property(nonatomic, readwrite) BOOL connected;

/** 该会话已删除 */
@property(nonatomic, readwrite) BOOL deleted;

@end

#pragma mark - ChatItemUpdate

typedef GPB_ENUM(ChatItemUpdate_FieldNumber) {
  ChatItemUpdate_FieldNumber_Sign = 1,
  ChatItemUpdate_FieldNumber_Uid = 2,
  ChatItemUpdate_FieldNumber_Event = 3,
  ChatItemUpdate_FieldNumber_UpdateTime = 4,
  ChatItemUpdate_FieldNumber_MsgLastRead = 5,
  ChatItemUpdate_FieldNumber_Unread = 6,
  ChatItemUpdate_FieldNumber_IBlockU = 7,
  ChatItemUpdate_FieldNumber_Deleted = 8,
};

/**
 * 14
 **/
GPB_FINAL @interface ChatItemUpdate : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

/** 变动的哪个uid */
@property(nonatomic, readwrite) int64_t uid;

/** 0 msg_last_read 变动    1 unread 数变动    2 i_block_u 变动   3 deleted 变动 */
@property(nonatomic, readwrite) int64_t event;

@property(nonatomic, readwrite) int64_t updateTime;

@property(nonatomic, readwrite) int64_t msgLastRead;

@property(nonatomic, readwrite) int64_t unread;

@property(nonatomic, readwrite) BOOL iBlockU;

@property(nonatomic, readwrite) BOOL deleted;

@end

#pragma mark - ChatList

typedef GPB_ENUM(ChatList_FieldNumber) {
  ChatList_FieldNumber_Sign = 1,
  ChatList_FieldNumber_ChatItemsArray = 2,
  ChatList_FieldNumber_UpdateTime = 3,
  ChatList_FieldNumber_HasMore = 4,
};

/**
 * 15
 **/
GPB_FINAL @interface ChatList : GPBMessage

/** websocket 会返回该值 */
@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ChatItem*> *chatItemsArray;
/** The number of items in @c chatItemsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger chatItemsArray_Count;

/** app会返回，有该值说明 会话列表发送完毕，且会话列表中的最新更新时间会是这个值（精确到百万分之一秒的时间戳） */
@property(nonatomic, readwrite) int64_t updateTime;

/** websocket 会返回该值，说明还有下一页 */
@property(nonatomic, readwrite) BOOL hasMore;

@end

#pragma mark - GetProfile

typedef GPB_ENUM(GetProfile_FieldNumber) {
  GetProfile_FieldNumber_Sign = 1,
  GetProfile_FieldNumber_Uid = 2,
  GetProfile_FieldNumber_UpdateTime = 3,
};

/**
 * 16
 **/
GPB_FINAL @interface GetProfile : GPBMessage

/** 信息标示，原路返回 */
@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite) int64_t uid;

/** profile的更新时间 精确到秒的时间戳 */
@property(nonatomic, readwrite) int64_t updateTime;

@end

#pragma mark - GetProfiles

typedef GPB_ENUM(GetProfiles_FieldNumber) {
  GetProfiles_FieldNumber_Sign = 1,
  GetProfiles_FieldNumber_GetProfilesArray = 2,
};

/**
 * 17
 **/
GPB_FINAL @interface GetProfiles : GPBMessage

/** 信息标示，原路返回 */
@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GetProfile*> *getProfilesArray;
/** The number of items in @c getProfilesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger getProfilesArray_Count;

@end

#pragma mark - Profile

typedef GPB_ENUM(Profile_FieldNumber) {
  Profile_FieldNumber_Sign = 1,
  Profile_FieldNumber_Uid = 2,
  Profile_FieldNumber_UpdateTime = 3,
  Profile_FieldNumber_NickName = 4,
  Profile_FieldNumber_Avatar = 5,
  Profile_FieldNumber_Gold = 6,
  Profile_FieldNumber_Verified = 7,
};

/**
 * 18
 **/
GPB_FINAL @interface Profile : GPBMessage

/** 信息标示，原路返回 */
@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite) int64_t uid;

/** profile的更新时间 精确到秒的时间戳 */
@property(nonatomic, readwrite) int64_t updateTime;

@property(nonatomic, readwrite, copy, null_resettable) NSString *nickName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *avatar;

@property(nonatomic, readwrite) BOOL gold;

@property(nonatomic, readwrite) BOOL verified;

@end

#pragma mark - ProfileList

typedef GPB_ENUM(ProfileList_FieldNumber) {
  ProfileList_FieldNumber_ProfilesArray = 1,
};

/**
 * 19
 **/
GPB_FINAL @interface ProfileList : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Profile*> *profilesArray;
/** The number of items in @c profilesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger profilesArray_Count;

@end

#pragma mark - GetChat

typedef GPB_ENUM(GetChat_FieldNumber) {
  GetChat_FieldNumber_Sign = 1,
  GetChat_FieldNumber_Uid = 2,
};

/**
 * 20
 **/
GPB_FINAL @interface GetChat : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite) int64_t uid;

@end

#pragma mark - ProfileOnline

typedef GPB_ENUM(ProfileOnline_FieldNumber) {
  ProfileOnline_FieldNumber_Uid = 1,
  ProfileOnline_FieldNumber_UpdateTime = 2,
  ProfileOnline_FieldNumber_NickName = 3,
  ProfileOnline_FieldNumber_Avatar = 4,
  ProfileOnline_FieldNumber_Gold = 5,
  ProfileOnline_FieldNumber_Verified = 6,
};

/**
 * 50  for demo: 通知客户端用户上线事件
 **/
GPB_FINAL @interface ProfileOnline : GPBMessage

@property(nonatomic, readwrite) int64_t uid;

/** profile的更新时间 精确到秒的时间戳 */
@property(nonatomic, readwrite) int64_t updateTime;

@property(nonatomic, readwrite, copy, null_resettable) NSString *nickName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *avatar;

@property(nonatomic, readwrite) BOOL gold;

@property(nonatomic, readwrite) BOOL verified;

@end

#pragma mark - UsrOffline

typedef GPB_ENUM(UsrOffline_FieldNumber) {
  UsrOffline_FieldNumber_Uid = 1,
};

/**
 * 52 for demo：通知客户端用户下线事件
 **/
GPB_FINAL @interface UsrOffline : GPBMessage

@property(nonatomic, readwrite) int64_t uid;

@end

#pragma mark - Signup

typedef GPB_ENUM(Signup_FieldNumber) {
  Signup_FieldNumber_Sign = 1,
  Signup_FieldNumber_Phone = 2,
  Signup_FieldNumber_NickName = 3,
  Signup_FieldNumber_Avatar = 4,
  Signup_FieldNumber_Pic = 5,
  Signup_FieldNumber_Gold = 6,
  Signup_FieldNumber_Verified = 7,
};

/**
 * 53 for demo：注册新用户
 **/
GPB_FINAL @interface Signup : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite) int64_t phone;

@property(nonatomic, readwrite, copy, null_resettable) NSString *nickName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *avatar;

/** 用户spark界面的封面图 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pic;

/** 是否gold用户 */
@property(nonatomic, readwrite) BOOL gold;

/** 是否是认证用户 */
@property(nonatomic, readwrite) BOOL verified;

@end

#pragma mark - FetchSpark

typedef GPB_ENUM(FetchSpark_FieldNumber) {
  FetchSpark_FieldNumber_Sign = 1,
};

/**
 * 54 for demo: 获取spark
 **/
GPB_FINAL @interface FetchSpark : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

@end

#pragma mark - Spark

typedef GPB_ENUM(Spark_FieldNumber) {
  Spark_FieldNumber_Uid = 1,
  Spark_FieldNumber_NickName = 2,
  Spark_FieldNumber_Avatar = 3,
  Spark_FieldNumber_Pic = 4,
};

/**
 * 55 for demo: spark
 **/
GPB_FINAL @interface Spark : GPBMessage

@property(nonatomic, readwrite) int64_t uid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *nickName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *avatar;

/** 用户spark界面的封面图 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *pic;

@end

#pragma mark - Sparks

typedef GPB_ENUM(Sparks_FieldNumber) {
  Sparks_FieldNumber_Sign = 1,
  Sparks_FieldNumber_SparksArray = 2,
};

/**
 * 56 for demo: sparks
 **/
GPB_FINAL @interface Sparks : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Spark*> *sparksArray;
/** The number of items in @c sparksArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger sparksArray_Count;

@end

#pragma mark - GetImToken

typedef GPB_ENUM(GetImToken_FieldNumber) {
  GetImToken_FieldNumber_Sign = 1,
  GetImToken_FieldNumber_Phone = 2,
};

/**
 * 57 for demo: 获取用户token
 **/
GPB_FINAL @interface GetImToken : GPBMessage

@property(nonatomic, readwrite) int64_t sign;

@property(nonatomic, readwrite) int64_t phone;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)