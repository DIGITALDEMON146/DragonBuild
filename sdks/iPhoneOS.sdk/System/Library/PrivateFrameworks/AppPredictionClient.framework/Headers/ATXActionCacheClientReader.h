//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSIndexSet;

@interface ATXActionCacheClientReader : NSObject
{
    NSData *_scoredActionsChunk;
    NSIndexSet *_lockscreenPredictionIndices;
}

@property(readonly, nonatomic) NSIndexSet *lockscreenPredictionIndices; // @synthesize lockscreenPredictionIndices=_lockscreenPredictionIndices;
// - (void).cxx_destruct;
- (id)_getLockScreenPredictionIndices:(id)arg1;
- (id)actionsWithLimit:(long long)arg1 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)arg2;
- (id)_predicateForInstalledAndNonEngagedPredictions:(id)arg1;
- (id)actionsWithConsumerSubType:(unsigned char)arg1 limit:(long long)arg2;
- (NSUInteger)chunkCount;
- (id)initWithChunks:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)init;

@end
