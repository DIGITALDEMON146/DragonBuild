//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSXPCListenerEndpoint, PBItemCollection;

@protocol _DUIServerSessionSource
- (oneway void)cancelDrag;
- (oneway void)addItemCollection:(PBItemCollection *)arg1 dataProviderEndpoint:(NSXPCListenerEndpoint *)arg2;
- (oneway void)dragDidExitSourceApp;
- (oneway void)dirtySourceItems:(NSArray *)arg1;
- (oneway void)takeOutsideAppSourceOperationMask:(NSUInteger)arg1 prefersFullSizePreview:(BOOL)arg2;
@end
