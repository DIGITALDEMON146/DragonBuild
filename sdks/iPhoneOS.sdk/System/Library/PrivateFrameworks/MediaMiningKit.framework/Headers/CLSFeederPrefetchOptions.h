//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CLSFeederPrefetchOptions : NSObject <NSCopying>
{
    NSUInteger _personCountPrefetchMode;
    NSUInteger _personsPrefetchMode;
    NSUInteger _scenesPrefetchMode;
    NSUInteger _faceInformationPrefetchMode;
    NSUInteger _locationPrefetchMode;
}

+ (id)feederPrefetchOptionsWithDefaultMode:(NSUInteger)arg1;
@property(nonatomic) NSUInteger locationPrefetchMode; // @synthesize locationPrefetchMode=_locationPrefetchMode;
@property(nonatomic) NSUInteger faceInformationPrefetchMode; // @synthesize faceInformationPrefetchMode=_faceInformationPrefetchMode;
@property(nonatomic) NSUInteger scenesPrefetchMode; // @synthesize scenesPrefetchMode=_scenesPrefetchMode;
@property(nonatomic) NSUInteger personsPrefetchMode; // @synthesize personsPrefetchMode=_personsPrefetchMode;
@property(nonatomic) NSUInteger personCountPrefetchMode; // @synthesize personCountPrefetchMode=_personCountPrefetchMode;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
