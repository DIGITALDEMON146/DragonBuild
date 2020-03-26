//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNumberParser.h>


@class NSNumber;

@interface HMDVideoResolution : HMDNumberParser <NSSecureCoding, NSCopying>
{
    NSNumber *_imageWidth;
    NSNumber *_imageHeight;
    NSUInteger _resolutionType;
}

+ (id)arrayWithResolutions:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger resolutionType; // @synthesize resolutionType=_resolutionType;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)_extractWidthAndHeight;
- (id)initWithResolution:(NSUInteger)arg1;
- (id)initWithTLVData:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
