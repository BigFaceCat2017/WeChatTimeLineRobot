/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WCBaseInfoItemDelegate <NSObject>
@optional
-(void)WCBaseInfoItemEditChanged:(id)changed;
-(void)WCBaseInfoItemPressReturnKey:(id)key;
-(void)WCBaseInfoItemEndEdit:(id)edit;
-(void)WCBaseInfoItemBeginEdit:(id)edit;
-(void)WCBaseInfoItemCancelEdit:(id)edit;
-(BOOL)WCBaseInfoItemShouldBeginEditing:(id)wcbaseInfoItem;
@end

