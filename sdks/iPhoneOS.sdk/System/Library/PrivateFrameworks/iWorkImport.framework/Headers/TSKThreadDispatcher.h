//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSKThreadDispatcher : NSObject
{
}

+ (id)sharedInstance;
- (id)p_dispatchQueue;
- (void)dispatchSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (void)dispatch:(id /* CDUnknownBlockType */)arg1;

@end
