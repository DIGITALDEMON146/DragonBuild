//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class HMDWakeConfigurationParamaters, NSData, NSString;

@interface HMDWakeConfiguration : NSObject <NSCopying, HMDTLVProtocol>
{
    NSData *_reserved;
    HMDWakeConfigurationParamaters *_custom1;
    HMDWakeConfigurationParamaters *_custom2;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
@property(retain, nonatomic) HMDWakeConfigurationParamaters *custom2; // @synthesize custom2=_custom2;
@property(retain, nonatomic) HMDWakeConfigurationParamaters *custom1; // @synthesize custom1=_custom1;
@property(retain, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3;
- (id)init;

@end
