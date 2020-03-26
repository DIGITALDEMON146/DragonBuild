//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RKClassification : NSObject
{
    int _sensitive;
    NSString *_language;
    NSUInteger _sentenceType;
    NSUInteger _gender;
    NSArray *_customResponses;
    NSString *_taggedText;
    NSArray *_sentenceEntities;
    NSArray *_matchedRanges;
}

@property(retain) NSArray *matchedRanges; // @synthesize matchedRanges=_matchedRanges;
@property(retain) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
@property(retain) NSString *taggedText; // @synthesize taggedText=_taggedText;
@property(retain) NSArray *customResponses; // @synthesize customResponses=_customResponses;
@property NSUInteger gender; // @synthesize gender=_gender;
@property(getter=isSensitive) int sensitive; // @synthesize sensitive=_sensitive;
@property NSUInteger sentenceType; // @synthesize sentenceType=_sentenceType;
@property(retain) NSString *language; // @synthesize language=_language;
// - (void).cxx_destruct;
- (id)init;

@end
