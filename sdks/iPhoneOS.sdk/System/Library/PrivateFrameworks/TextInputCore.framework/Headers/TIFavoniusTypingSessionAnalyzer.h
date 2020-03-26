//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TITypingSessionAnalyzing-Protocol.h>

@class TITypingSession, TITypingSessionAligned;
@protocol TIUserModeling;

@interface TIFavoniusTypingSessionAnalyzer : NSObject <TITypingSessionAnalyzing>
{
    TITypingSession *_lastSessionAnalyzed;
    TITypingSessionAligned *_lastAlignmentAnalyzed;
    id <TIUserModeling> _userModel;
}

@property(retain, nonatomic) id <TIUserModeling> userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) TITypingSessionAligned *lastAlignmentAnalyzed; // @synthesize lastAlignmentAnalyzed=_lastAlignmentAnalyzed;
@property(retain, nonatomic) TITypingSession *lastSessionAnalyzed; // @synthesize lastSessionAnalyzed=_lastSessionAnalyzed;
// - (void).cxx_destruct;
- (BOOL)analyze:(id)arg1 alignedSession:(id)arg2;
- (BOOL)handlePath:(id)arg1;
- (BOOL)handleDeleteWord:(id)arg1 nextAction:(id)arg2 withConfidence:(NSUInteger)arg3;
- (id)deleteLengthMetrics:(id)arg1 nextWordEntryCandText:(id)arg2;
- (BOOL)handleWordEntry:(id)arg1 withConfidence:(NSUInteger)arg2;
- (void)logPathedCandidate:(id)arg1 forKey:(id)arg2 withConfidence:(NSUInteger)arg3 isCompletion:(BOOL)arg4;
- (void)updateDurationCounterForWord:(id)arg1 forTypingContext:(id)arg2;
- (BOOL)isPathable:(id)arg1 context:(id)arg2;
- (void)incrementTransientCounterForKey:(id)arg1 andContext:(id)arg2 andCandidateString:(id)arg3;
- (void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andContext:(id)arg3 andCandidateString:(id)arg4;
- (NSUInteger)canAnalyze:(id)arg1 alignedSession:(id)arg2;
- (id)initWithUserModel:(id)arg1;

@end
