//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCTodayPrivateData-Protocol.h>

@class FCBundleSubscription, NSArray, NSDictionary, NSNumber, NSSet;
@protocol FCDerivedPersonalizationData><NSCoding;

@interface FCTodayPrivateData : NSObject <FCTodayPrivateData>
{
    NSDictionary *_dictionary;
}

@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
// - (void).cxx_destruct;
- (void)prepareForUseWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property(readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property(readonly, copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property(readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property(readonly, copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property(readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property(readonly, copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
