//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTAlarm, MTUIBedtimeGraphView, MTUIDigitalClockLabel, NSArray, UIButton, UIFont, UIImageView, UILabel;

@interface MTUIBedtimeTimeInBedView : UIView
{
    double _glyphSize;
    long long _options;
    UILabel *_titleLabel;
    MTUIDigitalClockLabel *_bedtimeLabel;
    MTUIDigitalClockLabel *_wakeLabel;
    UIImageView *_bedtimeGlyph;
    UIImageView *_wakeGlyph;
    MTUIBedtimeGraphView *_graphView;
    UIButton *_moreHistoryButton;
}

+ (long long)defaultOptions;
@property(retain, nonatomic) UIButton *moreHistoryButton; // @synthesize moreHistoryButton=_moreHistoryButton;
@property(retain, nonatomic) MTUIBedtimeGraphView *graphView; // @synthesize graphView=_graphView;
@property(retain, nonatomic) UIImageView *wakeGlyph; // @synthesize wakeGlyph=_wakeGlyph;
@property(retain, nonatomic) UIImageView *bedtimeGlyph; // @synthesize bedtimeGlyph=_bedtimeGlyph;
@property(retain, nonatomic) MTUIDigitalClockLabel *wakeLabel; // @synthesize wakeLabel=_wakeLabel;
@property(retain, nonatomic) MTUIDigitalClockLabel *bedtimeLabel; // @synthesize bedtimeLabel=_bedtimeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) double glyphSize; // @synthesize glyphSize=_glyphSize;
// - (void).cxx_destruct;
- (void)moreHistoryButtonPressed:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
@property(readonly, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) NSArray *sleepData;
@property(copy, nonatomic) MTAlarm *sleepAlarm;
- (void)setupConstraints;
- (id)initWithFrame:(CGRect)arg1 options:(long long)arg2;
- (id)initWithOptions:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
