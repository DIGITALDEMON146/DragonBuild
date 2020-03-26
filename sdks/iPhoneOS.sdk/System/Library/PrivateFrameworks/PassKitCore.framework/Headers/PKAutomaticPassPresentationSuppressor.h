//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableIndexSet, PKAssertion;
@protocol OS_dispatch_queue;

@interface PKAutomaticPassPresentationSuppressor : NSObject
{
    PKAssertion *_suppressionAssertion;
    NSMutableIndexSet *_suppressionRequestTokens;
    NSMutableIndexSet *_backgrounedSuppressionIdentifiers;
    NSDate *_backgroundedDate;
    NSUInteger _nextRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_acquireSuppressionAssertionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
@property(readonly, nonatomic) BOOL isSuppressing;
- (void)endSuppressionWithRequestToken:(NSUInteger)arg1;
- (NSUInteger)requestSuppressionWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end
