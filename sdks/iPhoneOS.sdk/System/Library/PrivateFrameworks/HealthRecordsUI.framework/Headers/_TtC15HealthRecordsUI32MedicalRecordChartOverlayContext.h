//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/HKOverlayContext-Protocol.h>

@class MISSING_TYPE;

@interface _TtC15HealthRecordsUI32MedicalRecordChartOverlayContext : NSObject <HKOverlayContext>
{
    MISSING_TYPE *title;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *defaultColors;
    MISSING_TYPE *selectedColors;
    MISSING_TYPE *verticalAxis;
    MISSING_TYPE *cachedItem;
    MISSING_TYPE *cachedOverlayDisplayType;
    MISSING_TYPE *cachedDataSource;
}

// - (void).cxx_destruct;
- (id)init;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)contextItemForLastUpdate;
- (id)initWithTitle:(id)arg1 dataSource:(id)arg2 defaultColors:(id)arg3 selectedColors:(id)arg4 verticalAxis:(id)arg5;

@end
