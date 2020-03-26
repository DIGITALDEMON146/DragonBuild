//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarActivityIndicator;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityItem : _UIStatusBarItem
{
    _UIStatusBarActivityIndicator *_activityIndicator;
}

@property(retain, nonatomic) _UIStatusBarActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
// - (void).cxx_destruct;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (BOOL)_enableForType:(long long)arg1;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_activityIndicator;
@property(readonly, nonatomic) UIEdgeInsets activityIndicatorAlignmentRectInsets;
- (id)dependentEntryKeys;

@end
