//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView, UIViewController, WFAction;
@protocol WFComponentEditingSession;

@protocol WFComponentNavigationContext <NSObject>
@property(readonly, nonatomic) __weak UIViewController *componentHostingViewController;

@optional
- (void)componentPresentWorkflowSettings;
- (void)componentDidEndEditingSession:(id <WFComponentEditingSession>)arg1;
- (void)componentWillBeginEditingSession:(id <WFComponentEditingSession>)arg1;
- (void)componentPresentDocumentationForAction:(WFAction *)arg1 withSourceView:(UIView *)arg2;
@end
