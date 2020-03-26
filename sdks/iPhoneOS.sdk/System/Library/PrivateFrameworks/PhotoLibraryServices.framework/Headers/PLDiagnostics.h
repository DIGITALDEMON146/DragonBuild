//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLDiagnostics : NSObject
{
}

+ (void)collectYearsStatWithLibraryContext:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
+ (void)collectCollectionsStatWithLibraryContext:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
+ (void)collectMomentsStatWithLibraryContext:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)arg1;
+ (id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)arg1;
+ (id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)arg1;
+ (void)fileRadarUserNotificationWithHeader:(id)arg1 message:(id)arg2 radarTitle:(id)arg3 radarDescription:(id)arg4;
+ (BOOL)shouldSuppressRadarUserNotificationWithMessage:(id)arg1 radarTitle:(id)arg2;
+ (void)tapToRadarWithTitle:(id)arg1 description:(id)arg2;
+ (NSUInteger)addOSStateHandlerWithTitle:(id)arg1 queue:(id)arg2 propertyListHandler:(id /* CDUnknownBlockType */)arg3;
+ (id)excludingNameExpression;
+ (id)matchingNameExpression;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
+ (id)diagnosticsURLs;
+ (id)logDirectoryURL;

@end
