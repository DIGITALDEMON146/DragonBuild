//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLTCircularBitBuffer, NSLock, NSString, NSURL, NSUUID;

@interface BLTPBProtobufSequenceNumberManager : NSObject
{
    NSUInteger _sendSequenceNumber;
    NSUInteger _recvSequenceNumber;
    NSLock *_sequenceNumberAccess;
    BLTCircularBitBuffer *_duplicateEntries;
    NSURL *_sequenceNumbersURL;
    BOOL _updateSequenceNumbersOnOutOfOrder;
    NSUInteger _sessionState;
    NSString *_serviceName;
    NSUUID *_currentSessionIdentifier;
    NSUUID *_recvSessionIdentifier;
}

@property(readonly, nonatomic) NSUUID *recvSessionIdentifier; // @synthesize recvSessionIdentifier=_recvSessionIdentifier;
@property(readonly, nonatomic) NSUUID *currentSessionIdentifier; // @synthesize currentSessionIdentifier=_currentSessionIdentifier;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) NSUInteger sessionState; // @synthesize sessionState=_sessionState;
// - (void).cxx_destruct;
- (BOOL)_writeSequenceNumbersToStore;
- (void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(NSUInteger)arg1;
- (id)_sequenceNumbersURL;
- (BOOL)_isSequenceNumberInOrder:(NSUInteger)arg1;
- (id)nextSendSequenceNumber;
- (long long)setRecvSequenceNumber:(NSUInteger)arg1 recvSessionIdentifier:(id)arg2 force:(BOOL)arg3;
- (id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(BOOL)arg2 duplicateCapacity:(NSUInteger)arg3;
- (id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(BOOL)arg2;

@end
