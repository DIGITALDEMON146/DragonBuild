//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface HRBulletedIndentedLabel : UIView
{
    NSString *_text;
    UILabel *_label;
}

+ (id)_bodyFont;
+ (id)_bodyFontTextStyle;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)_updateLeadingDetailAttributedTextSize;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithText:(id)arg1;

@end
