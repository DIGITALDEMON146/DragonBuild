//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface SUItemOfferButton : UIButton
{
    long long _animationHorizontalAlignment;
    NSString *_buttonStyle;
    NSString *_confirmationTitle;
    BOOL _isShowingConfirmation;
    NSString *_offerTitle;
    BOOL _shouldShowConfirmation;
}

+ (id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2;
+ (double)defaultAnimationDuration;
@property(nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation; // @synthesize showingConfirmation=_isShowingConfirmation;
@property(nonatomic) BOOL shouldShowConfirmation; // @synthesize shouldShowConfirmation=_shouldShowConfirmation;
@property(copy, nonatomic) NSString *offerTitle; // @synthesize offerTitle=_offerTitle;
@property(copy, nonatomic) NSString *itemOfferButtonStyle; // @synthesize itemOfferButtonStyle=_buttonStyle;
@property(copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(nonatomic) long long animationHorizontalAlignment; // @synthesize animationHorizontalAlignment=_animationHorizontalAlignment;
- (void)_reloadButton;
- (CDStruct_f9159201)_configurationForStyle:(id)arg1;
- (void)_applyConfiguration:(CDStruct_f9159201)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setShowingConfirmation:(BOOL)arg1 duration:(double)arg2;
- (BOOL)configureForItem:(id)arg1 offer:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end
