//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSPredicate, _DKEventStream;
@protocol OS_dispatch_queue;

@protocol _DKKnowledgeEventStreamDeleting
- (void)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSUInteger, NSError *))arg3;
- (NSUInteger)deleteAllEventsMatchingPredicate:(NSPredicate *)arg1 error:(id )arg2;
- (void)deleteAllEventsInEventStream:(_DKEventStream *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSUInteger, NSError *))arg3;
- (NSUInteger)deleteAllEventsInEventStream:(_DKEventStream *)arg1 error:(id )arg2;
@end
