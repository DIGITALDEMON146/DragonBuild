//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>
#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class CFCBNightShiftSchedule, NSNumber, NSString;

@interface CFCBSetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNightShiftMode;
- (BOOL)requiresResponse;
@property(retain, nonatomic) CFCBNightShiftSchedule *schedule;
@property(copy, nonatomic) NSString *option;
@property(copy, nonatomic) NSString *mode;
@property(copy, nonatomic) NSNumber *enable;
@property(copy, nonatomic) NSNumber *active;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* CDUnknownBlockType */)arg1;

@end
