/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface CancelPreOrderRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* lockId;
@property(retain, nonatomic) NSMutableArray* product;
@property(assign, nonatomic) unsigned productCount;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
