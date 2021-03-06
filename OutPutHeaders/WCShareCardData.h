/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCDBCoding.h"
#import "MMObject.h"
#import "WeChat-Structs.h"
#import "WCCardDataSource.h"

@class NSString, WCCardDataCardTPInfo, WCCardDataCardInfo;

@interface WCShareCardData : MMObject <WCDBCoding, WCCardDataSource> {
	BOOL bNearby;
	NSString* announceMent;
	unsigned long localCardId;
	NSString* cardId;
	NSString* cardTpId;
	NSString* appId;
	unsigned long stateFlag;
	unsigned long updateTime;
	unsigned long localUpdateTime;
	unsigned long shareTime;
	NSString* shareUserName;
	unsigned long expireTime;
	NSString* markUserName;
	NSString* shareCardTPInfoForDB;
	NSString* shareCardInfoForDB;
	NSString* shareCardShareInfoForDB;
	NSString* shareCardLogoName;
	NSString* shareCardTitle;
	NSString* shareCardFromUser;
	NSString* shareCardContent;
	unsigned long IntRes1;
	unsigned long IntRes2;
	unsigned long IntRes3;
	NSString* StrRes1;
	NSString* StrRes2;
	NSString* StrRes3;
	WCCardDataCardInfo* shareCardInfo;
	WCCardDataCardTPInfo* shareCardTPInfo;
	unsigned long long updateSeq;
	unsigned long long localUpdateSeq;
	long long m___rowID;
}
@property(assign, nonatomic) long long __rowID;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* StrRes3;
@property(retain, nonatomic) NSString* StrRes2;
@property(retain, nonatomic) NSString* StrRes1;
@property(assign, nonatomic) unsigned long IntRes3;
@property(assign, nonatomic) unsigned long IntRes2;
@property(assign, nonatomic) unsigned long IntRes1;
@property(retain, nonatomic) NSString* shareCardContent;
@property(retain, nonatomic) NSString* shareCardFromUser;
@property(retain, nonatomic) NSString* shareCardTitle;
@property(retain, nonatomic) NSString* shareCardLogoName;
@property(retain, nonatomic) NSString* shareCardShareInfoForDB;
@property(retain, nonatomic) NSString* shareCardInfoForDB;
@property(retain, nonatomic) NSString* shareCardTPInfoForDB;
@property(retain, nonatomic) NSString* markUserName;
@property(assign, nonatomic) unsigned long expireTime;
@property(retain, nonatomic) NSString* shareUserName;
@property(assign, nonatomic) unsigned long shareTime;
@property(assign, nonatomic) unsigned long localUpdateTime;
@property(assign, nonatomic) unsigned long updateTime;
@property(assign, nonatomic) unsigned long long localUpdateSeq;
@property(assign, nonatomic) unsigned long long updateSeq;
@property(assign, nonatomic) unsigned long stateFlag;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) NSString* cardTpId;
@property(retain, nonatomic) NSString* cardId;
@property(assign, nonatomic) unsigned long localCardId;
@property(retain, nonatomic) NSString* announceMent;
@property(assign, nonatomic) BOOL bNearby;
@property(retain, nonatomic) WCCardDataCardTPInfo* shareCardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo* shareCardInfo;
+(id)dummyObject;
-(void).cxx_destruct;
-(int)compareShareTime:(id)time;
-(BOOL)HasBeConsumed;
-(id)getCardTpInfo;
-(id)getCardInfo;
-(id)getCardTpId;
-(id)getCardId;
-(void)parseFromJSONDic:(id)jsondic;
-(void)parseFromJSONStr:(id)jsonstr;
-(void)setupDataBeforeWriteDB;
-(void)setupDataFromDB;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getWCDBPrimaryColumnName;
-(const WCDBIndexHelper*)getWCDBIndexArray;
-(unsigned long)getWCDBIndexArrayCount;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getFileValueTagIndexMap;
-(id)getFileValueTypeTable;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getPackedValueTagIndexMap;
-(id)getPackedValueTypeTable;
-(const map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >*)getValueNameIndexMap;
-(id)getValueTable;
-(const WCDBCondition<NSString* >*)db_StrRes3;
-(const WCDBCondition<NSString* >*)db_StrRes2;
-(const WCDBCondition<NSString* >*)db_StrRes1;
-(const WCDBCondition<unsigned long>*)db_IntRes3;
-(const WCDBCondition<unsigned long>*)db_IntRes2;
-(const WCDBCondition<unsigned long>*)db_IntRes1;
-(const WCDBCondition<NSString* >*)db_shareCardContent;
-(const WCDBCondition<NSString* >*)db_shareCardFromUser;
-(const WCDBCondition<NSString* >*)db_shareCardTitle;
-(const WCDBCondition<NSString* >*)db_shareCardLogoName;
-(const WCDBCondition<NSString* >*)db_shareCardShareInfoForDB;
-(const WCDBCondition<NSString* >*)db_shareCardInfoForDB;
-(const WCDBCondition<NSString* >*)db_shareCardTPInfoForDB;
-(const WCDBCondition<NSString* >*)db_markUserName;
-(const WCDBCondition<unsigned long>*)db_expireTime;
-(const WCDBCondition<NSString* >*)db_shareUserName;
-(const WCDBCondition<unsigned long>*)db_shareTime;
-(const WCDBCondition<unsigned long>*)db_localUpdateTime;
-(const WCDBCondition<unsigned long>*)db_updateTime;
-(const WCDBCondition<unsigned long long>*)db_localUpdateSeq;
-(const WCDBCondition<unsigned long long>*)db_updateSeq;
-(const WCDBCondition<unsigned long>*)db_stateFlag;
-(const WCDBCondition<NSString* >*)db_appId;
-(const WCDBCondition<NSString* >*)db_cardTpId;
-(const WCDBCondition<NSString* >*)db_cardId;
-(const WCDBCondition<unsigned long>*)db_localCardId;
@end

