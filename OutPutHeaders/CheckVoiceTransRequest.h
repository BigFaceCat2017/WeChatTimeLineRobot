/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString, BaseRequest, VoiceAttr;

@interface CheckVoiceTransRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned long long newMsgId;
@property(retain, nonatomic) VoiceAttr* voiceAttr;
@property(assign, nonatomic) unsigned msgId;
@property(assign, nonatomic) unsigned totalLen;
@property(retain, nonatomic) NSString* voiceId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
