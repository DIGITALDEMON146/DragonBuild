//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DMFPolicyRegistration, NSArray;

@protocol DMFPolicyRemoteInterface <NSObject>
- (void)requestPoliciesForTypes:(NSArray *)arg1 replyHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)addRegistration:(DMFPolicyRegistration *)arg1 replyHandler:(void (^)(NSDictionary *, NSError *))arg2;
@end
