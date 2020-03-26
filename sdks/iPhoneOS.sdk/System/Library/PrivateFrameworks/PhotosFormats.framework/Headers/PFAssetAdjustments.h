//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSDate, NSDictionary, NSString;

@interface PFAssetAdjustments : NSObject <NSCopying>
{
    NSDate *_adjustmentTimestamp;
    NSDictionary *_propertyListDictionary;
}

+ (id)fingerprintWithAssetAdjustmentFingerprintData:(id)arg1;
+ (id)fingerPrintForData:(id)arg1 error:(id )arg2;
+ (BOOL)writeReassembleAdjustmentsPropertyListAtURL:(id)arg1 toURL:(id)arg2 error:(id )arg3;
+ (id)dataForOverflowDataReassembledAdjustmentsPropertyListAtURL:(id)arg1 error:(id )arg2;
+ (BOOL)adjustmentsPropertyListFileRequiresOverflowDataReassemblyAtURL:(id)arg1 predictedSize:(long long )arg2;
@property(retain, nonatomic) NSDictionary *propertyListDictionary; // @synthesize propertyListDictionary=_propertyListDictionary;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithURL:(id)arg1;
@property(nonatomic) NSDate *adjustmentTimestamp;
@property(readonly, nonatomic) unsigned int adjustmentRenderTypes;
@property(readonly, copy, nonatomic) NSString *editorBundleID;
@property(readonly, nonatomic) long long adjustmentBaseVersion;
@property(readonly, nonatomic) NSData *adjustmentData;
@property(readonly, copy, nonatomic) NSString *adjustmentFormatVersion;
@property(readonly, copy, nonatomic) NSString *adjustmentFormatIdentifier;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderTypes:(unsigned int)arg6;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4;

@end
