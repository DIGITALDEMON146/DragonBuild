//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BBObserverDelegate-Protocol.h>

@class BBObserver;

@interface SBBulletinLocalObserverGateway : NSObject <BBObserverDelegate>
{
    BBObserver *_bbObserver;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(NSUInteger)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(id /* CDUnknownBlockType */)arg5;
- (id)init;

@end
