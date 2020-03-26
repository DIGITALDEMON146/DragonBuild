//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, NSIndexSet, PXSearchResultsSectionedDataSource, PXSearchResultsValue, PXSearchTopAssetsResult;

@protocol PXSearchResultsSectionedDataSourceChangeObserver <NSObject>
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didChangeThumbnailAssetsForSearchResult:(PXSearchTopAssetsResult *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didChangeThumbnailAssetsForSearchResult:(PXSearchTopAssetsResult *)arg2 topAssetsSectionExists:(BOOL)arg3;
- (void)searchResultsDataSource:(PXSearchResultsSectionedDataSource *)arg1 didFetchAssetsForSearchResult:(PXSearchResultsValue *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(PXSearchResultsSectionedDataSource *)arg1 shouldMergePendingChanges:(BOOL)arg2;
@end
