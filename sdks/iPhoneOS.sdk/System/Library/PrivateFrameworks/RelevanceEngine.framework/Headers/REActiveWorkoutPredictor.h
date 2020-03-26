//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REActiveWorkoutPredictorProperties-Protocol.h>

@class HKQuery, NSDate, REUpNextTimer;

@interface REActiveWorkoutPredictor : REPredictor <REActiveWorkoutPredictorProperties>
{
    int _workoutStateNotifyToken;
    float _dailyAverageWorkouts;
    NSUInteger _numberOfWorkoutsPerformedToday;
    HKQuery *_workoutObservationQuery;
    REUpNextTimer *_workoutQueryCoalesceTimer;
    BOOL _hasActiveWorkout;
    NSDate *_lastCompletedWorkoutDate;
}

+ (id)supportedFeatures;
+ (double)updateInterval;
@property(retain) NSDate *lastCompletedWorkoutDate; // @synthesize lastCompletedWorkoutDate=_lastCompletedWorkoutDate;
@property BOOL hasActiveWorkout; // @synthesize hasActiveWorkout=_hasActiveWorkout;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger numberOfWorkoutsPerformedToday;
@property(readonly, nonatomic) float dailyAverageWorkouts;
@property(readonly, nonatomic) BOOL currentlyHasActiveWorkout;
- (void)_processWorkoutHistoryData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_queue_fetchWorkoutHistory;
- (void)_scheduleFetchWorkoutTimer;
- (void)_updateWorkoutState;
- (void)_cancelMonitoringWorkoutIfNeeded;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
@property(readonly, nonatomic) NSDate *lastWorkoutDate;
@property(readonly, nonatomic, getter=isActiveWorkout) BOOL activeWorkout;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)_init;

@end
