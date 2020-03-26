//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSLinearFocusProviding-Protocol.h>

@class NSNumberFormatter, UIButton, UILabel;
@protocol CPSPageControlling;

@interface CPSPagingControlView : UIView <CPSLinearFocusProviding>
{
    NSUInteger _pageIndex;
    NSUInteger _pageCount;
    UIButton *_previousButton;
    UIButton *_nextButton;
    id <CPSPageControlling> _pagingDelegate;
    UILabel *_positionLabel;
    NSNumberFormatter *_numberFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(nonatomic) __weak id <CPSPageControlling> pagingDelegate; // @synthesize pagingDelegate=_pagingDelegate;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UIButton *previousButton; // @synthesize previousButton=_previousButton;
@property(nonatomic) NSUInteger pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) NSUInteger pageIndex; // @synthesize pageIndex=_pageIndex;
// - (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)_invokeDelegateForPageIndex:(NSUInteger)arg1;
- (void)_handleNextButton:(id)arg1;
- (void)_handlePreviousButton:(id)arg1;
- (void)enablePageControlsIfNecessary;
- (void)_update;
- (void)_updateImages;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
