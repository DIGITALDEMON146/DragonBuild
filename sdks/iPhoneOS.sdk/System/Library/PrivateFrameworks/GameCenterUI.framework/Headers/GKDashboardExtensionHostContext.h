//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostContext.h>

#import <GameCenterUI/GKGameCenterDashboardHostProtocol-Protocol.h>

@interface GKDashboardExtensionHostContext : GKExtensionHostContext <GKGameCenterDashboardHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(id /* CDUnknownBlockType */)arg1;
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)requestImagesForLeaderboardSetsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)requestDashboardLogoImageWithHandler:(id /* CDUnknownBlockType */)arg1;

@end
