//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISearchController.h>

@class NSMutableString, SKUISearchBar, UILabel;

__attribute__((visibility("hidden")))
@interface SKUISearchController : UISearchController
{
    UILabel *_suffixLabel;
    NSMutableString *_paddingString;
    SKUISearchBar *_searchBar;
}

// - (void).cxx_destruct;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) SKUISearchBar *searchBar;
- (void)setActive:(BOOL)arg1;
- (void)_setSuffix:(id)arg1;

@end
