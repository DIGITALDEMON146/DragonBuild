//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSSystemConfigurationDynamicStoreEthernetWatcher : NSObject
{
//     struct __SCDynamicStore _dynamicStore;
//     struct __CFRunLoopSource _dynamicStoreSource;
}

+ (id)sharedManager;
- (void)ethernetDynamicStoreDidChange;
- (void)registerForEthernetAdapterNotifications;
- (id)ethernetNetworkInterfaces;
// - (BOOL)isHiddenEthernetInterface:(struct __SCNetworkInterface )arg1;
- (BOOL)hasEthernetNetworkInterfaces;
- (void)dealloc;
- (id)init;

@end

