/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "QAnnotation.h"
#import "WeChat-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QShape : XXUnknownSuperclass <QAnnotation> {
	NSString* _title;
	NSString* _subtitle;
	NSString* title;
	NSString* subtitle;
	XXStruct_gLbvpC coordinate;
}
@property(readonly, assign, nonatomic) XXStruct_gLbvpC coordinate;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy) NSString* subtitle;
@property(copy) NSString* title;
-(void).cxx_destruct;
@end

