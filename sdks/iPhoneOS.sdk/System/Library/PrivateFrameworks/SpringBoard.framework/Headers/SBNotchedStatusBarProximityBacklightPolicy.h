//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDefaultProximityBacklightPolicy.h>

#import <SpringBoard/SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate-Protocol.h>
#import <SpringBoard/_SBProximityTouchHandlingDelegate-Protocol.h>

@class SBNotchedStatusBarProximityBacklightPolicyEnablementCondition, SBProximitySettings, _SBProximityTouchHandlingViewController, _SBProximityTouchHandlingWindow;

@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate>
{
    BOOL _objectInProximity;
    _SBProximityTouchHandlingWindow *_proxTouchHandlingWindow;
    _SBProximityTouchHandlingViewController *_proxTouchHandlingViewController;
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition *_enablementCondition;
    NSUInteger _timesEnabledWithObjectInProximity;
    NSUInteger _touchesReceivedWithObjectInProximity;
    SBProximitySettings *_lazy_proximitySettings;
}

@property(retain, nonatomic, setter=_setProximitySettings:) SBProximitySettings *_proximitySettings; // @synthesize _proximitySettings=_lazy_proximitySettings;
// - (void).cxx_destruct;
- (double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(BOOL)arg1;
- (void)_setHandleTouchesIfNecessary:(BOOL)arg1;
- (void)condition:(id)arg1 enablementDidChange:(BOOL)arg2;
- (void)didHitAllowedRegion:(CGPoint)arg1;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(BOOL)arg2;
- (id)_createNewEnablementCondition;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (void)dealloc;
- (id)initWithBacklightController:(id)arg1;

@end
