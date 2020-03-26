//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2;
+ (id)fetchActivityStream;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *visibility;
@property(copy, nonatomic) NSDate *toDate;
@property(copy, nonatomic) NSString *taskType;
@property(copy, nonatomic) NSArray *streamTypes;
@property(copy, nonatomic) NSString *sortBy;
@property(copy, nonatomic) NSDictionary *matchingMetadataKeysAndStringValues;
@property(copy, nonatomic) NSArray *matchingMetadataKeys;
@property(copy, nonatomic) NSNumber *limit;
@property(copy, nonatomic) NSDate *fromDate;
@property(nonatomic) BOOL ascending;
@property(copy, nonatomic) NSString *activityType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
