//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>


@class NSArray, SFResultSection;

@interface SFSectionRankingFeedback : SFFeedback <NSCopying>
{
    NSArray *_results;
    SFResultSection *_section;
    NSUInteger _localSectionPosition;
    double _personalizationScore;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) NSUInteger localSectionPosition; // @synthesize localSectionPosition=_localSectionPosition;
@property(copy, nonatomic) SFResultSection *section; // @synthesize section=_section;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithResults:(id)arg1 section:(id)arg2 localSectionPosition:(NSUInteger)arg3 personalizationScore:(double)arg4;

@end
