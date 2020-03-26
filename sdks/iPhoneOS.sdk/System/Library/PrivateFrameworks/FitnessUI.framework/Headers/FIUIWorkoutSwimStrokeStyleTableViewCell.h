//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FIUIDividerView;

@interface FIUIWorkoutSwimStrokeStyleTableViewCell : UITableViewCell
{
    FIUIDividerView *_dividerView;
}

+ (double)preferredHeightWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2 width:(double)arg3 formattingManager:(id)arg4;
+ (id)_sizingLabel;
+ (id)_overrideLabelAttributes;
@property(retain, nonatomic) FIUIDividerView *dividerView; // @synthesize dividerView=_dividerView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2 formattingManager:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
