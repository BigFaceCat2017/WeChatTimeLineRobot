/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMComponent.h"

@class MMUIImageView, MMUILabel;

@interface MMFavTagComponent : MMComponent {
	MMUIImageView* _tagImg;
	MMUILabel* _tagLabel;
}
+(float)calHeightWithComData:(id)comData;
-(void).cxx_destruct;
-(void)dealloc;
-(void)configContentLayout;
-(void)shiftWithOffset:(float)offset;
-(void)configTagView;
@end

