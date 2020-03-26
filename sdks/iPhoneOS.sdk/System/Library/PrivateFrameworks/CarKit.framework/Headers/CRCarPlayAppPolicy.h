//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CRCarPlayAppPolicy : NSObject
{
    BOOL _carPlaySupported;
    BOOL _canDisplayOnCarScreen;
    BOOL _launchUsingSiri;
    BOOL _launchNotificationsUsingSiri;
    BOOL _launchUsingMusicUIService;
    BOOL _badgesAppIcon;
    BOOL _showsNotifications;
    BOOL _handlesCarIntents;
    BOOL _launchUsingMapsTemplateUI;
    NSDictionary *_siriActivationOptions;
    NSUInteger _applicationCategory;
}

@property(nonatomic) NSUInteger applicationCategory; // @synthesize applicationCategory=_applicationCategory;
@property(nonatomic) BOOL launchUsingMapsTemplateUI; // @synthesize launchUsingMapsTemplateUI=_launchUsingMapsTemplateUI;
@property(nonatomic) BOOL handlesCarIntents; // @synthesize handlesCarIntents=_handlesCarIntents;
@property(nonatomic) BOOL showsNotifications; // @synthesize showsNotifications=_showsNotifications;
@property(nonatomic) BOOL badgesAppIcon; // @synthesize badgesAppIcon=_badgesAppIcon;
@property(nonatomic) BOOL launchUsingMusicUIService; // @synthesize launchUsingMusicUIService=_launchUsingMusicUIService;
@property(copy, nonatomic) NSDictionary *siriActivationOptions; // @synthesize siriActivationOptions=_siriActivationOptions;
@property(nonatomic) BOOL launchNotificationsUsingSiri; // @synthesize launchNotificationsUsingSiri=_launchNotificationsUsingSiri;
@property(nonatomic) BOOL launchUsingSiri; // @synthesize launchUsingSiri=_launchUsingSiri;
@property(nonatomic) BOOL canDisplayOnCarScreen; // @synthesize canDisplayOnCarScreen=_canDisplayOnCarScreen;
@property(nonatomic, getter=isCarPlaySupported) BOOL carPlaySupported; // @synthesize carPlaySupported=_carPlaySupported;
// - (void).cxx_destruct;
- (id)init;

@end
