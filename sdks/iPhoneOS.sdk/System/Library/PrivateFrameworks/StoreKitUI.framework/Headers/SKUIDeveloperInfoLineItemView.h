//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoLineItemView : UIView
{
    UIEdgeInsets _contentInset;
    UILabel *_labelLabel;
    UIView *_separatorView;
    UILabel *_valueLabel;
}

@property(nonatomic) UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end
