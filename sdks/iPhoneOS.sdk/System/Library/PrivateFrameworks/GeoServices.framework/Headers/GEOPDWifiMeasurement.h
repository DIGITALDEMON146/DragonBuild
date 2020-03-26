//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiMeasurement : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSUInteger _entryTime;
    NSUInteger _exitTime;
    NSMutableArray *_locations;
    NSMutableArray *_wifiAccessPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_entryTime:1;
        unsigned int has_exitTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_locations:1;
        unsigned int read_wifiAccessPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entryTime:1;
        unsigned int wrote_exitTime:1;
        unsigned int wrote_locations:1;
        unsigned int wrote_wifiAccessPoints:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)wifiAccessPointType;
+ (Class)locationType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasExitTime;
@property(nonatomic) NSUInteger exitTime;
@property(nonatomic) BOOL hasEntryTime;
@property(nonatomic) NSUInteger entryTime;
- (id)wifiAccessPointAtIndex:(NSUInteger)arg1;
- (NSUInteger)wifiAccessPointsCount;
- (void)_addNoFlagsWifiAccessPoint:(id)arg1;
- (void)addWifiAccessPoint:(id)arg1;
- (void)clearWifiAccessPoints;
@property(retain, nonatomic) NSMutableArray *wifiAccessPoints;
- (void)_readWifiAccessPoints;
- (id)locationAtIndex:(NSUInteger)arg1;
- (NSUInteger)locationsCount;
- (void)_addNoFlagsLocation:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
@property(retain, nonatomic) NSMutableArray *locations;
- (void)_readLocations;
- (id)initWithData:(id)arg1;
- (id)init;

@end
