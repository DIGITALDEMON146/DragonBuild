//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBApplicationHosting-Protocol.h>
#import <SpringBoard/SBApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>

@class NSMutableSet, NSSet, NSString, SBActivationSettings, SBApplicationSceneView, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBSceneHandle, UIView;
@protocol SBAppViewControllerDelegate, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBAppViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBApplicationHosting, SBApplicationSceneViewControlling, BSInvalidatable>
{
    NSString *_identifier;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBDeviceApplicationSceneViewController *_deviceAppViewController;
    SBActivationSettings *_activationSettings;
    id <SBScenePlaceholderContentContext> _placeholderContentContext;
    NSMutableSet *_activeTransitions;
    NSSet *_actionsToDeliver;
    long long _requestedMode;
    long long _currentMode;
    BOOL _sceneContentIsReady;
    BOOL _ignoresOcclusions;
    BOOL _invalidated;
    BOOL _automatesLifecycle;
    BOOL _placeholderContentEnabled;
    BOOL _wantsSecureRendering;
    id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
    id <SBAppViewControllerDelegate> _delegate;
    SBActivationSettings *_supplementalActivationSettings;
}

@property(retain, nonatomic) SBActivationSettings *supplementalActivationSettings; // @synthesize supplementalActivationSettings=_supplementalActivationSettings;
@property(nonatomic) BOOL wantsSecureRendering; // @synthesize wantsSecureRendering=_wantsSecureRendering;
@property(nonatomic) BOOL ignoresOcclusions; // @synthesize ignoresOcclusions=_ignoresOcclusions;
@property(nonatomic) __weak id <SBAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; // @synthesize applicationSceneStatusBarDelegate;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext; // @synthesize placeholderContentContext=_placeholderContentContext;
@property(nonatomic) BOOL automatesLifecycle; // @synthesize automatesLifecycle=_automatesLifecycle;
@property(nonatomic) long long requestedMode; // @synthesize requestedMode=_requestedMode;
@property(retain, nonatomic) NSSet *actionsToDeliver; // @synthesize actionsToDeliver=_actionsToDeliver;
@property(readonly, nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle;
// - (void).cxx_destruct;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_deactivateHostedApp;
- (id)_createSceneUpdateTransactionForApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2;
- (id)_configureApplicationSceneEntity:(id)arg1 deliveringActions:(BOOL)arg2;
- (void)_activateApp;
- (void)_sendActions:(id)arg1;
- (void)_destroySceneViewController;
- (void)_createSceneViewController;
- (void)_setCurrentMode:(long long)arg1;
- (void)_updateForAppearanceState:(int)arg1;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
@property(readonly, nonatomic) long long overrideStatusBarStyle;
@property(readonly, nonatomic) double statusBarAlpha;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2;
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) CGSize contentReferenceSize;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (id)newSnapshotView;
- (id)newSnapshot;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, nonatomic) long long displayMode;
- (void)_transformHostedAppViewForRotationToOrientation:(long long)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedAppSceneHandles;
- (id)hostedAppSceneHandle;
- (BOOL)isHostingAnApp;
- (BOOL)canHostAnApp;
- (BOOL)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)invalidate;
@property(readonly, nonatomic) SBApplicationSceneView *appView;
@property(nonatomic) BOOL placeholderContentEnabled; // @synthesize placeholderContentEnabled=_placeholderContentEnabled;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 andApplicationSceneEntity:(id)arg2;

@end
