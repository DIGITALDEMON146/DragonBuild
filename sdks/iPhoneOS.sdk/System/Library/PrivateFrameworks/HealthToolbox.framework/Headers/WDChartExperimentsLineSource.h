//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsLineSource : HKGraphSeriesDataSource
{
    NSArray *_chartPoints;
}

@property(readonly, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;
// - (void).cxx_destruct;
- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)_chartPointsFromDataSpec:(id)arg1;
- (id)initWithData:(id)arg1;

@end
