//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PSUICellularDataOptionsController : PSListController
{
    NSMutableArray *_ratSpecifiers;
}

// - (void).cxx_destruct;
- (void)roamingOptionsDidChange;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabledConfirmed:(id)arg1;
- (void)setEUInternetCancelled:(id)arg1;
- (id)getEUInternetStatus:(id)arg1;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatus:(id)arg1;
- (id)roamingSettingsDescription:(id)arg1;
- (id)roamingSpecifiers;
- (id)specifiers;
- (id)controllerForSpecifier:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)init;

@end
