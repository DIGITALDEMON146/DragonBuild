//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMemoriesDataSource.h>

@class NSObject, PXMemoriesDataSourceState;
@protocol OS_dispatch_queue;

@interface PXStateBasedMemoriesDataSource : PXMemoriesDataSource
{
    NSObject<OS_dispatch_queue> *_queue;
    PXMemoriesDataSourceState *__state;
}

@property(readonly, nonatomic) PXMemoriesDataSourceState *_state; // @synthesize _state=__state;
// - (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithState:(id)arg1;

@end
