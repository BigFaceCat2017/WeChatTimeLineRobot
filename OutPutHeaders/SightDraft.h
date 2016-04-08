/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMObject.h"
#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface SightDraft : MMObject <PBCoding> {
	int draftID;
	NSMutableArray* itemAry;
	int date;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int date;
@property(retain, nonatomic) NSMutableArray* itemAry;
@property(assign, nonatomic) int draftID;
+(void)initialize;
-(void).cxx_destruct;
-(id)getItem:(int)item;
-(void)dealloc;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end
