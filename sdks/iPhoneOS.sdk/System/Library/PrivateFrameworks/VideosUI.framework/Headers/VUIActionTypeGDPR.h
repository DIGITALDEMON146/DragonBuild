//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAction.h>

@class IKAppContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionTypeGDPR : VUIAction
{
    NSDictionary *_contextData;
    IKAppContext *_appContext;
}

@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
// - (void).cxx_destruct;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;

@end
