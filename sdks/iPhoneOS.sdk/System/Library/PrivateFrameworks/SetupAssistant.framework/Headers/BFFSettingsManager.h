//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber;

@interface BFFSettingsManager : NSObject
{
    NSMutableArray *_stashedPaths;
    NSMutableDictionary *_stashedPreferences;
    NSMutableDictionary *_stashedManagedConfigurationSettings;
    NSMutableArray *_stashedButtonHaptics;
    NSNumber *_stashedAssistantEnabled;
    NSNumber *_stashedAssistantVoiceTriggerEnabled;
    NSNumber *_stashedLocationServicesEnabled;
    NSData *_stashedLocationServicesSettings;
    NSData *_stashedWatchData;
    NSArray *_stashedFlowSkipIdentifiers;
    NSNumber *_stashedScreenTimeEnabled;
    NSNumber *_stashedAutoUpdateEnabled;
    NSData *_stashedAccessibilityData;
    NSDictionary *_stashedDeviceToDeviceMigrationSuccessInfo;
    NSNumber *_stashedUserInterfaceStyleMode;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (BOOL)removeSafeHaven;
- (id)_shovePath:(id)arg1 toPath:(id)arg2;
- (id)_preferencesForDomain:(id)arg1;
- (void)_applyUserInterfaceStyleMode;
- (void)_restoreAccessibilityData;
- (void)_restoreWatchData;
- (void)_restoreStashedFiles;
- (void)_applyAutoUpdatePreferences;
- (void)_applyScreenTimePreferences;
- (void)_applyStashedFlowSkipIdentifiers;
- (void)_applyLocationServicesSettings;
- (void)_applyLocationServices;
- (void)_applyAssistantPreferences;
- (void)_applyStashedButtonHaptics;
- (void)_applyStashedManagedConfiguration;
- (void)_applyStashedPreferences;
- (NSUInteger)_restoreConfiguration;
- (void)applySafeHavenStash;
- (void)_reset:(BOOL)arg1;
- (void)reset;
- (void)postDidRestoreSafeHavenNotification;
- (BOOL)_commitStash;
- (BOOL)_stashPaths;
- (BOOL)_stashConfiguration:(BOOL)arg1;
- (BOOL)hideStashInSafeHavenAsProvisional:(BOOL)arg1;
- (BOOL)hideStashInSafeHaven;
- (void)setUserInterfaceStyleMode:(long long)arg1;
- (void)stashAccessibilityData:(id)arg1;
- (void)setAutoUpdateEnabled:(BOOL)arg1;
- (void)setScreenTimeEnabled:(BOOL)arg1;
- (void)stashFlowSkipIdentifiers:(id)arg1;
- (void)stashDeviceToDeviceMigrationSuccessInfo:(id)arg1;
- (void)setAssistantVoiceTriggerEnabled:(BOOL)arg1;
- (void)setAssistantEnabled:(BOOL)arg1;
- (void)stashWatchData:(id)arg1;
- (void)stashLocationServicesSettings:(id)arg1;
- (void)stashLocationServicesChoice:(BOOL)arg1;
- (void)clearHapticTypeForButtonKind:(long long)arg1;
- (void)stashHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)stashPath:(id)arg1;
- (void)populatePathsToStash;
- (void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setBool:(BOOL)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)removeBoolSettingForManagedConfigurationSetting:(id)arg1;
- (void)setBool:(BOOL)arg1 forManagedConfigurationSetting:(id)arg2;
- (long long)stashConfigurationType;
- (id)stashProductVersion;
- (id)stashBuildVersion;
- (NSUInteger)stashVersion;
- (id)loadConfigurationFromDisk;
- (BOOL)hasStashedValuesOnDisk;
- (BOOL)hasStashedValues;
- (id)init;

@end
