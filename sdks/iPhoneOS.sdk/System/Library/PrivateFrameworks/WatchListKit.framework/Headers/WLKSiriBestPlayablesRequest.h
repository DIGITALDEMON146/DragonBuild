//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest
{
    NSArray *_statsIDs;
}

@property(readonly, copy, nonatomic) NSArray *statsIDs; // @synthesize statsIDs=_statsIDs;
// - (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithStatsIDs:(id)arg1;
- (id)init;

@end
