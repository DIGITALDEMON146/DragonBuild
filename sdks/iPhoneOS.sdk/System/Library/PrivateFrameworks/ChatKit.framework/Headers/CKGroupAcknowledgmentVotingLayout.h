//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout
{
    BOOL _isAnimatedLayoutChange;
    NSUInteger _layoutMode;
    long long _expandedSection;
    NSArray *_ballotItems;
    NSArray *_fromBallotItems;
    CGPoint _previousCollapsedContentOffset;
    CGSize _fromContentSize;
    CGPoint _fromContentOffset;
}

@property(nonatomic) CGPoint fromContentOffset; // @synthesize fromContentOffset=_fromContentOffset;
@property(nonatomic) CGSize fromContentSize; // @synthesize fromContentSize=_fromContentSize;
@property(retain, nonatomic) NSArray *fromBallotItems; // @synthesize fromBallotItems=_fromBallotItems;
@property(nonatomic) BOOL isAnimatedLayoutChange; // @synthesize isAnimatedLayoutChange=_isAnimatedLayoutChange;
@property(copy, nonatomic) NSArray *ballotItems; // @synthesize ballotItems=_ballotItems;
@property(nonatomic) CGPoint previousCollapsedContentOffset; // @synthesize previousCollapsedContentOffset=_previousCollapsedContentOffset;
@property(nonatomic) long long expandedSection; // @synthesize expandedSection=_expandedSection;
@property(nonatomic) NSUInteger layoutMode; // @synthesize layoutMode=_layoutMode;
// - (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareLayout;
- (CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1;
- (void)_setupExpandedLayout;
- (void)_setupAnimatedCollapsedLayout;
- (void)_setupCollapsedLayout;
- (void)_initializeBallotItems;
- (CGSize)collectionViewContentSize;
- (double)_totalBallotContainersWidth;
- (BOOL)_shouldFillInFromCenter;
- (long long)_numberOfBallots;
- (void)cleanupAnimationCache;
- (void)preapareForLayoutAnimationAroundSection:(long long)arg1;
- (id)init;

@end
