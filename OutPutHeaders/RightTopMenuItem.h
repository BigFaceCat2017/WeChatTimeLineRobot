/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import "MMObject.h"

@class NSString;

@interface RightTopMenuItem : MMObject <NSCoding> {
	NSString* m_nsID;
	BOOL m_bShowNew;
	BOOL m_bHasShowNew;
	unsigned long m_uiNewVersion;
	unsigned long m_uiOrder;
}
@property(assign, nonatomic) unsigned long m_uiOrder;
@property(assign, nonatomic) unsigned long m_uiNewVersion;
@property(assign, nonatomic) BOOL m_bHasShowNew;
@property(assign, nonatomic) BOOL m_bShowNew;
@property(retain, nonatomic) NSString* m_nsID;
-(void).cxx_destruct;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
@end
