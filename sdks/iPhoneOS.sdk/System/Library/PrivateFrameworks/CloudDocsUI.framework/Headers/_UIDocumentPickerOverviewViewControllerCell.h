//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell
{
    UIImageView *_iconView;
    UIImageView *_newlyAddedView;
}

@property(retain, nonatomic) UIImageView *newlyAddedView; // @synthesize newlyAddedView=_newlyAddedView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
// - (void).cxx_destruct;
@property(nonatomic) BOOL showNewlyAdded;
- (id)_dotImage;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
