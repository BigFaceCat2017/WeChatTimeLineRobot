/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextViewDelegate.h"
#import "WeChat-Structs.h"

@class UIView, MMTextView, NSString;

@interface BottleTextView : XXUnknownSuperclass <UITextViewDelegate> {
	MMTextView* _textView;
	UIView* shiftView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIView* shiftView;
-(void).cxx_destruct;
-(void)clearText;
-(void)setText:(id)text;
-(id)text;
-(void)endEdit;
-(void)beginEdit;
-(void)moveToPoint:(CGPoint)point;
-(void)readyWriteWithHeight:(unsigned long)height;
-(void)readReadWithHeight:(unsigned long)height;
-(void)dealloc;
-(id)init;
-(void)showNormalTextView;
-(void)showEditTextViewWithKeyBoardHeight:(unsigned long)keyBoardHeight;
-(void)initWriteView;
-(void)initViewWithEditEnabled:(BOOL)editEnabled;
-(void)textViewDidChange:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)textViewShouldEndEditing:(id)textView;
-(BOOL)textViewShouldBeginEditing:(id)textView;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
@end

