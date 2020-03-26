//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker
{
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}

+ (id)workerWithLibrary:(id)arg1;
// - (void).cxx_destruct;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)managedObjectIDsNeedingProcessing;
- (BOOL)hasPendingJobs;
- (void)dealloc;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;

@end
