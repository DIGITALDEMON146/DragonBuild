//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMSObserver : NSObject
{
    id /* CDUnknownBlockType */ _completionBlock;
    id /* CDUnknownBlockType */ _failureBlock;
    id /* CDUnknownBlockType */ _resultBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ resultBlock; // @synthesize resultBlock=_resultBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
// - (void).cxx_destruct;
- (void)_sendResult:(id)arg1 usingQueue:(id)arg2;
- (void)_sendFailure:(id)arg1 usingQueue:(id)arg2;
- (void)_sendCompletionUsingQueue:(id)arg1;
- (id)initWithResultBlock:(id /* CDUnknownBlockType */)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2 failureBlock:(id /* CDUnknownBlockType */)arg3;
- (id)initWithResultBlock:(id /* CDUnknownBlockType */)arg1;

@end
