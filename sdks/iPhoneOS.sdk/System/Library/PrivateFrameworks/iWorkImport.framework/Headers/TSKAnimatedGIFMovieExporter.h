//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPData;

__attribute__((visibility("hidden")))
@interface TSKAnimatedGIFMovieExporter : NSObject
{
    TSPData *_data;
}

- (void)p_finishWithSuccess:(BOOL)arg1 error:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (struct opaqueCMSampleBuffer )p_createCMSampleBufferFromImageInCGImageSource:(CGImageSource )arg1 atIndex:(NSUInteger)arg2 withPresentationTime:(CDStruct_198678f7)arg3 nextPresentationTime:(out CDStruct_198678f7 )arg4;
- (void)exportToMovieFileURL:(id)arg1 fileType:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1;

@end
