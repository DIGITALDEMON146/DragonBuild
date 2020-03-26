//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface SFExternalCredentialIdentityStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (void)removeCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_credentialIdentityStoreForBundleIdentifier:(id)arg1;
- (void)getCredentialIdentityStoreForAppBundleIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)getPrimaryCredentialIdentityStoreWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
