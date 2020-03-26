//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject
{
    NSDictionary *_trackedBagKeys;
}

+ (id)sharedTracker;
@property(retain, nonatomic) NSDictionary *trackedBagKeys; // @synthesize trackedBagKeys=_trackedBagKeys;
// - (void).cxx_destruct;
- (void)_setIsSportsEnabled:(BOOL)arg1;
- (void)_setIsNowPlayingEnabled:(BOOL)arg1;
- (void)_updateKeys:(id)arg1;
- (void)_updateBoolValueForTrackedKey:(id)arg1;
- (BOOL)_amsBagBoolValueForKey:(id)arg1;
- (id)isSportsEnabled;
- (id)isNowPlayingEnabled;
- (void)updateTrackedBagValuesWithChangedKeys:(id)arg1;
- (void)updateTrackedBagValues;
- (id)init;

@end
