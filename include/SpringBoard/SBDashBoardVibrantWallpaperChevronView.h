//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBUIChevronView.h>

#import <SpringBoard/SBUILegibility-Protocol.h>

@class SBWallpaperEffectView, _UILegibilitySettings;
@protocol CSWallpaperColorProvider;

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility>
{
    double _legibilityStrength;
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperEffectView *_effectView;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
}

@property(nonatomic) __weak id <CSWallpaperColorProvider> wallpaperColorProvider; // @synthesize wallpaperColorProvider=_wallpaperColorProvider;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_legibilityStrength;
// - (void).cxx_destruct;
- (void)_updateVibrancy;
- (id)initWithColor:(id)arg1;
- (id)init;

@end
