//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookService-Protocol.h>

@class QLThumbnailGenerator;

@interface SXQuickLookService : NSObject <SXQuickLookService>
{
    QLThumbnailGenerator *_generator;
}

@property(readonly, nonatomic) QLThumbnailGenerator *generator; // @synthesize generator=_generator;
// - (void).cxx_destruct;
- (void)fetchThumbnailForFile:(id)arg1 size:(CGSize)arg2 onCompletion:(id /* CDUnknownBlockType */)arg3 onError:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end
