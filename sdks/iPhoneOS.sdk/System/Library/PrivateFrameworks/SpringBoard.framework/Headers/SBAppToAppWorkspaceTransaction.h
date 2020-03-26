//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class NSObject, SBAutoPiPWorkspaceTransaction, SBUIAnimationController;
@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    SBUIAnimationController *_animation;
    NSUInteger _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
    BOOL _preventWhitePointAdaptationStrengthUpdateOnComplete;
}

@property(nonatomic) BOOL preventWhitePointAdaptationStrengthUpdateOnComplete; // @synthesize preventWhitePointAdaptationStrengthUpdateOnComplete=_preventWhitePointAdaptationStrengthUpdateOnComplete;
// - (void).cxx_destruct;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_cleanUpAfterAnimation;
- (void)_clearAnimation;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(BOOL)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)_performPostAnimationTasksWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_hasPostAnimationTasks;
- (void)_performPreAnimationTasksWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_hasPreAnimationTasks;
- (id)_setupAnimation;
- (BOOL)_shouldResignActiveForAnimation;
- (NSUInteger)_serialOverlayPreDismissalOptions;
- (BOOL)_transitionWasCancelled;
- (void)_beginTransition;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)canInterruptForTransitionRequest:(id)arg1;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end
