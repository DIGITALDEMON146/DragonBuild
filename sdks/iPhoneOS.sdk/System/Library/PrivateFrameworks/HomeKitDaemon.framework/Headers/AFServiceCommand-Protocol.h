//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;
@protocol AFServiceHelper;

@protocol AFServiceCommand <NSObject>

@optional
- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1 serviceHelper:(id <AFServiceHelper>)arg2;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1;
@end
