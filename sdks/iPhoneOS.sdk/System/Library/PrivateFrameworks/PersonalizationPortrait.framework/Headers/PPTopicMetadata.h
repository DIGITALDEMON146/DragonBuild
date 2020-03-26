//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PPTopicMetadata : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _impressionCount;
    unsigned short _occurrencesInSource;
    unsigned short _algorithmResultPosition;
    unsigned short _algorithmResultCount;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned short algorithmResultCount; // @synthesize algorithmResultCount=_algorithmResultCount;
@property(readonly, nonatomic) unsigned short algorithmResultPosition; // @synthesize algorithmResultPosition=_algorithmResultPosition;
@property(readonly, nonatomic) unsigned short occurrencesInSource; // @synthesize occurrencesInSource=_occurrencesInSource;
@property(readonly, nonatomic) unsigned short impressionCount; // @synthesize impressionCount=_impressionCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTopicMetadata:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2 algorithmResultPosition:(unsigned short)arg3 algorithmResultCount:(unsigned short)arg4;
- (id)init;

@end
