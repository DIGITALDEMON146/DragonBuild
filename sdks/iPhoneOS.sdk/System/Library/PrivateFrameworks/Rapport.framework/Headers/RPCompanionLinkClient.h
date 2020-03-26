//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/RPAuthenticatable-Protocol.h>
#import <Rapport/RPCompanionLinkXPCClientInterface-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>

@class NSArray, NSDictionary, NSMutableOrderedSet, NSString, NSXPCConnection, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable>
{
    BOOL _activateCalled;
    NSMutableSet _assertions;
    NSMutableDictionary _deviceDictionary;
    NSMutableDictionary _eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableOrderedSet *_registeredProfileIDs;
    NSMutableDictionary _requestRegistrations;
    NSXPCConnection *_xpcCnx;
    unsigned int _pairSetupFlags;
    unsigned int _pairVerifyFlags;
    int _passwordType;
    int _passwordTypeActual;
    unsigned int _flags;
    unsigned int _clientID;
    unsigned int _internalAuthFlags;
    NSString *_password;
    id /* CDUnknownBlockType */ _authCompletionHandler;
    id /* CDUnknownBlockType */ _showPasswordHandler;
    id /* CDUnknownBlockType */ _hidePasswordHandler;
    id /* CDUnknownBlockType */ _promptForPasswordHandler;
    NSString *_appID;
    NSString *_cloudServiceID;
    NSUInteger _controlFlags;
    RPCompanionLinkDevice *_destinationDevice;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _interruptionHandler;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_serviceType;
    id /* CDUnknownBlockType */ _deviceFoundHandler;
    id /* CDUnknownBlockType */ _deviceLostHandler;
    id /* CDUnknownBlockType */ _deviceChangedHandler;
    RPCompanionLinkDevice *_localDevice;
    id /* CDUnknownBlockType */ _localDeviceUpdatedHandler;
    NSDictionary *_siriInfo;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int internalAuthFlags; // @synthesize internalAuthFlags=_internalAuthFlags;
@property(nonatomic) unsigned int clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSDictionary *siriInfo; // @synthesize siriInfo=_siriInfo;
@property(copy, nonatomic) id /* CDUnknownBlockType */ localDeviceUpdatedHandler; // @synthesize localDeviceUpdatedHandler=_localDeviceUpdatedHandler;
@property(retain) RPCompanionLinkDevice *localDevice; // @synthesize localDevice=_localDevice;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) RPCompanionLinkDevice *destinationDevice; // @synthesize destinationDevice=_destinationDevice;
@property(nonatomic) NSUInteger controlFlags; // @synthesize controlFlags=_controlFlags;
@property(copy, nonatomic) NSString *cloudServiceID; // @synthesize cloudServiceID=_cloudServiceID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) id /* CDUnknownBlockType */ promptForPasswordHandler; // @synthesize promptForPasswordHandler=_promptForPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ hidePasswordHandler; // @synthesize hidePasswordHandler=_hidePasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ showPasswordHandler; // @synthesize showPasswordHandler=_showPasswordHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ authCompletionHandler; // @synthesize authCompletionHandler=_authCompletionHandler;
@property(readonly, nonatomic) int passwordTypeActual; // @synthesize passwordTypeActual=_passwordTypeActual;
@property(nonatomic) int passwordType; // @synthesize passwordType=_passwordType;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) unsigned int pairVerifyFlags; // @synthesize pairVerifyFlags=_pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags; // @synthesize pairSetupFlags=_pairSetupFlags;
// - (void).cxx_destruct;
- (void)deregisterProfileID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_reregisterProfileIDs;
- (void)_registerProfileID:(id)arg1 reregister:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)registerProfileID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)launchAppWithURL:(id)arg1 destinationID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)launchAppWithBundleID:(id)arg1 destinationID:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* CDUnknownBlockType */)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(id /* CDUnknownBlockType */)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(id /* CDUnknownBlockType */)arg4;
- (void)deregisterRequestID:(id)arg1;
- (void)_reregisterRequests;
- (void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(BOOL)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)deregisterEventID:(id)arg1;
- (void)_reregisterEvents;
- (void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(BOOL)arg3;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)shouldReportDevice:(id)arg1;
- (void)_lostAllDevices;
- (void)companionLinkLocalDeviceUpdated:(id)arg1;
- (void)companionLinkChangedDevice:(id)arg1 changes:(unsigned int)arg2;
- (void)companionLinkLostDevice:(id)arg1;
- (void)companionLinkFoundDevice:(id)arg1;
@property(readonly) RPCompanionLinkDevice *activePersonalCompanion;
@property(readonly, copy) NSArray *activeDevices;
- (void)companionLinkAuthCompleted:(id)arg1;
- (void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;
- (void)tryPassword:(id)arg1;
- (void)_reregisterAssertions;
- (void)_invalidateAssertion:(id)arg1;
- (id)activateAssertionID:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)_invokeBlockActivateSafe:(id /* CDUnknownBlockType */)arg1;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(id /* CDUnknownBlockType */)arg1 reactivate:(BOOL)arg2;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
