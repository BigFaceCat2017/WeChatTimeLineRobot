/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, SKBuiltinString_t, SafeDeviceList, NSString, BaseResponse;

@interface BindQQResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* wtloginRspBuff;
@property(assign, nonatomic) unsigned safeDevice;
@property(retain, nonatomic) SafeDeviceList* safeDeviceList;
@property(retain, nonatomic) SKBuiltinBuffer_t* ksid;
@property(retain, nonatomic) SKBuiltinBuffer_t* a2Key;
@property(retain, nonatomic) SKBuiltinString_t* imgEncryptKey;
@property(retain, nonatomic) NSString* qqmailSkey;
@property(assign, nonatomic) unsigned status;
@property(retain, nonatomic) NSString* microBlogName;
@property(assign, nonatomic) unsigned privateMsgStatus;
@property(assign, nonatomic) unsigned pushMailStatus;
@property(retain, nonatomic) SKBuiltinBuffer_t* imgBuf;
@property(retain, nonatomic) NSString* imgSid;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end
