//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIImage;

@interface NTKUpNextCurvedMetadata : NSObject <NSSecureCoding, NSCopying>
{
    double _radius;
    double _angle;
    UIImage *_maskImage;
    CGPoint _center;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(readonly, nonatomic) CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) double angle; // @synthesize angle=_angle;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadius:(double)arg1 angle:(double)arg2 center:(CGPoint)arg3 maskImage:(id)arg4;

@end
