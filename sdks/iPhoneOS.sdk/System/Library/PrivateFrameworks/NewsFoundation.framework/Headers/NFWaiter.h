//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFWaiter : NSObject
{
    double _interval;
    double _timeout;
}

+ (id)error;
+ (void)waitUntil:(id /* CDUnknownBlockType */)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(id /* CDUnknownBlockType */)arg4 failure:(id /* CDUnknownBlockType */)arg5;
+ (void)waitFor:(id /* CDUnknownBlockType */)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(id /* CDUnknownBlockType */)arg4 failure:(id /* CDUnknownBlockType */)arg5;
+ (id)waitWithTimeout:(double)arg1 conditionProvider:(id /* CDUnknownBlockType */)arg2;
+ (id)waitWithTimeout:(double)arg1 valueProvider:(id /* CDUnknownBlockType */)arg2;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(id /* CDUnknownBlockType */)arg3 condition:(id /* CDUnknownBlockType */)arg4;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 conditionProvider:(id /* CDUnknownBlockType */)arg3;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;

@end
