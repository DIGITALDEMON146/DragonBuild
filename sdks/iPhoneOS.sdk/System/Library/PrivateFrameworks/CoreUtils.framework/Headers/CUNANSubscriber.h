//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/WiFiAwareSubscriberDelegate-Protocol.h>

@class NSArray, NSString, WiFiAwareSubscriber;
@protocol OS_dispatch_queue;

@interface CUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate>
{
    id /* CDUnknownBlockType */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct _opaque_pthread_mutex_t _mutex;
    struct LogCategory _ucat;
    NSMutableDictionary _wfaEndpoints;
    WiFiAwareSubscriber *_wfaSubscriber;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_serviceType;
    id /* CDUnknownBlockType */ _endpointFoundHandler;
    id /* CDUnknownBlockType */ _endpointLostHandler;
    id /* CDUnknownBlockType */ _endpointChangedHandler;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endpointChangedHandler; // @synthesize endpointChangedHandler=_endpointChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
// - (void).cxx_destruct;
- (void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4;
- (void)_subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)_subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)subscriberStarted:(id)arg1;
- (void)_lostAllEndpoints;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy) NSArray *discoveredEndpoints;
- (id)descriptionWithLevel:(int)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

@end
