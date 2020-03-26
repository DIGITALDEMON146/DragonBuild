//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CSSearchQuery, FPQueryEnumerationSettings;

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying>
{
    CSSearchQuery *_searchQuery;
    FPQueryEnumerationSettings *_settings;
}

@property(readonly, nonatomic) FPQueryEnumerationSettings *settings; // @synthesize settings=_settings;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqualToItemQueryDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)keepCollectorsAlive;
- (BOOL)supportsQueryingAllMountPoints;
- (void)augmentQueryContext:(id)arg1;
- (NSUInteger)desiredCount;
- (id)queryStringForMountPoint:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end
