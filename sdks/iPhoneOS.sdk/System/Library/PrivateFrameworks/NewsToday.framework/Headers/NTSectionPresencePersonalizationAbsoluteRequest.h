//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class FCPersonalizationFeature;
@protocol NTAbsolutePersonalizedSectionPresenceConfig;

@interface NTSectionPresencePersonalizationAbsoluteRequest : NSObject <NSCopying>
{
    FCPersonalizationFeature *_feature;
    double _featureClickPrior;
    double _featureImpressionPrior;
    NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *_absolutePresenceConfig;
}

@property(copy, nonatomic) NSObject<NTAbsolutePersonalizedSectionPresenceConfig> *absolutePresenceConfig; // @synthesize absolutePresenceConfig=_absolutePresenceConfig;
@property(nonatomic) double featureImpressionPrior; // @synthesize featureImpressionPrior=_featureImpressionPrior;
@property(nonatomic) double featureClickPrior; // @synthesize featureClickPrior=_featureClickPrior;
@property(copy, nonatomic) FCPersonalizationFeature *feature; // @synthesize feature=_feature;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
