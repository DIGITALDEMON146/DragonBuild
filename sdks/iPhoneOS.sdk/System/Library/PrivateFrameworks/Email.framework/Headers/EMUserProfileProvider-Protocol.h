//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNContact, NSArray, NSSet;

@protocol EMUserProfileProvider <NSObject>
@property(readonly, copy) NSSet *contactEmailAddresses;
@property(readonly, copy) NSSet *accountsEmailAddresses;
@property(readonly, copy) NSSet *allEmailAddresses;
- (BOOL)isMyEmailAddressContainedInAddressList:(NSArray *)arg1;
- (CNContact *)contact;
- (CNContact *)contactWithKeysToFetch:(NSArray *)arg1;
@end
