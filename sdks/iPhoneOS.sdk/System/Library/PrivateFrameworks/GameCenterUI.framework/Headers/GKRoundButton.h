//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKButton.h>

@class UIImage;

@interface GKRoundButton : GKButton
{
}

- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)_highlightBounds;
@property(retain, nonatomic) UIImage *backgroundImage;
- (void)tintColorDidChange;
- (id)initWithFrame:(CGRect)arg1;

@end
