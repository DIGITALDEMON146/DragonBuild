//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol STStatusDomainData, STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisher : NSObject
{
    id <STStatusDomainPublisherServerHandle> _serverHandle;
}

+ (NSUInteger)statusDomainName;
@property(readonly, nonatomic) __weak id <STStatusDomainPublisherServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
// - (void).cxx_destruct;
- (void)updateDataWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(copy, nonatomic) id <STStatusDomainData> data;
- (id)initWithServerHandle:(id)arg1;
- (id)init;

@end
