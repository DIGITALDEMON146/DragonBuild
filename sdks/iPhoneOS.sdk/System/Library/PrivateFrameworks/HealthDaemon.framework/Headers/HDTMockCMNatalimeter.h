//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMNatalimeter.h>

@interface HDTMockCMNatalimeter : CMNatalimeter
{
    id /* CDUnknownBlockType */ _handleQueryDataSinceRecord;
    id /* CDUnknownBlockType */ _handleStartNatalimetryUpdates;
    id /* CDUnknownBlockType */ _handleStopNatalimeteryUpdates;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ handleStopNatalimeteryUpdates; // @synthesize handleStopNatalimeteryUpdates=_handleStopNatalimeteryUpdates;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handleStartNatalimetryUpdates; // @synthesize handleStartNatalimetryUpdates=_handleStartNatalimetryUpdates;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handleQueryDataSinceRecord; // @synthesize handleQueryDataSinceRecord=_handleQueryDataSinceRecord;
// - (void).cxx_destruct;
- (void)stopAbsoluteNatalimetryDataUpdates;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;

@end
