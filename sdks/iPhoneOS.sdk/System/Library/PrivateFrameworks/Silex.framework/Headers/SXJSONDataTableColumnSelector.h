//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONDataTableSelector.h>

#import <Silex/SXDataTableColumnSelector-Protocol.h>

@interface SXJSONDataTableColumnSelector : SXJSONDataTableSelector <SXDataTableColumnSelector>
{
}

- (NSUInteger)weightForSelectorKey:(id)arg1;
- (NSUInteger)oddWithValue:(id)arg1 withType:(int)arg2;
- (NSUInteger)evenWithValue:(id)arg1 withType:(int)arg2;

@end
