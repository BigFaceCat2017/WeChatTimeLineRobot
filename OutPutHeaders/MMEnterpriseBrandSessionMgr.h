/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "IEnterpriseBrandContactMgrExt.h"
#import "IContactMgrExt.h"
#import "IMsgExt.h"
#import "IMMNewSessionMgrExt.h"
#import "MMService.h"

@class NSString, NSMutableDictionary;

@interface MMEnterpriseBrandSessionMgr : MMService <MMService, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IEnterpriseBrandContactMgrExt> {
	NSMutableDictionary* _dictMainUsr2SubSessionCacher;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)resetBrandSessionNewFlag:(id)flag;
-(void)setBrandSessionNewFlag:(id)flag;
-(BOOL)hasBrandSessionNewFlag:(id)flag;
-(id)genMainFrameSessionInfo:(id)info;
-(id)getSubBrandSessionInfoOfLastMsg:(id)lastMsg;
-(unsigned long)sessionNewArrivalUnreadCountWithMainUsrName:(id)mainUsrName;
-(BOOL)isExistRedDot:(id)dot;
-(id)getMainUsrName:(id)name;
-(id)sessionInfoWithSubUsrName:(id)subUsrName;
-(id)sessionInfoWithSubBrandContact:(id)subBrandContact;
-(id)subSessionCacherWithSubBrandContact:(id)subBrandContact;
-(id)subSessionCacherWithSubUsrName:(id)subUsrName;
-(id)subSessionCacher:(id)cacher;
-(void)OnModMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnAddMsgListForSession:(id)session NotifyUsrName:(id)name;
-(void)OnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnUnReadCountChange:(id)change;
-(void)OnDelMsg:(id)msg;
-(void)onDeleteSessionOfUser:(id)user;
-(void)isMessage:(id)message Handled:(BOOL*)handled;
-(void)isUser:(id)user Handled:(BOOL*)handled;
-(void)onEnterpriseBrandContactDeleted:(id)deleted;
-(void)onEnterpriseBrandContactChanged:(id)changed;
-(void)openEnterpriseNormalSubBrand:(id)brand navigationController:(id)controller;
-(void)openEnterpriseWebSubBrand:(id)brand navigationController:(id)controller;
-(void)checkBrandOfMainUsrName:(id)mainUsrName;
-(void)clearUnReadCountOfSubUsrName:(id)subUsrName;
-(void)updateSessionOfSubUsrName:(id)subUsrName;
-(void)topSessionOfSubUsrName:(id)subUsrName;
-(void)clearUnReadCountOfMainUsrName:(id)mainUsrName;
-(void)deleteSessionOfSubUsrName:(id)subUsrName clearMsg:(BOOL)msg;
-(void)deleteSessionListOfMainUsrName:(id)mainUsrName;
-(void)addSessionOfSubBrandContact:(id)subBrandContact;
-(id)sessionCellDataWithMainUsrName:(id)mainUsrName atIndex:(int)index;
-(id)sessionInfoWithMainUsrName:(id)mainUsrName atIndex:(int)index;
-(unsigned long)sessionUnreadCountWithMainUsrName:(id)mainUsrName;
-(unsigned long)sessionCountWithMainUsrName:(id)mainUsrName;
-(BOOL)onServiceMemoryWarning;
-(void)dealloc;
-(id)init;
@end
