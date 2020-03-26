//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDisplayTypeController, HKUnitPreferenceController;

@interface HBXUnitSupport : NSObject
{
    HKUnitPreferenceController *_unitPreferenceController;
    HKDisplayTypeController *_displayTypeController;
}

@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;
// - (void).cxx_destruct;
- (void)updatePreferredUnit:(id)arg1 forType:(id)arg2;
- (id)preferredUnitForType:(id)arg1;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1;
- (id)localizedDisplayNameForUnit:(id)arg1;
- (id)initWithUnitPreferenceController:(id)arg1 displayTypeController:(id)arg2;

@end
