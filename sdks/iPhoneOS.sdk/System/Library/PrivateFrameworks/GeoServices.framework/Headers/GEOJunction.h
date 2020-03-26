//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface GEOJunction : NSObject <NSSecureCoding>
{
    int _maneuverType;
    int _drivingSide;
    int _junctionType;
    NSData *_elementsData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
@property(readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property(readonly, nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSUInteger numElements;
@property(readonly, nonatomic) struct GEOJunctionElement elements;
- (id)initWithJunctionInfo:(id)arg1;
- (id)initWithManeuverType:(int)arg1 drivingSide:(int)arg2;
- (id)initWithStep:(id)arg1;

@end
