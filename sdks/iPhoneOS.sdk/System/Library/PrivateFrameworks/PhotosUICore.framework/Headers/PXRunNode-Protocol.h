//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol PXRunNodeDelegate;

@protocol PXRunNode <NSObject>
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, getter=isCanceled) BOOL canceled;
@property(readonly, getter=isComplete) BOOL complete;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, getter=isWaiting) BOOL waiting;
@property(readonly) NSUInteger state;
- (void)cancel;
@end
