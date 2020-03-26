//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFParameterComponent.h>

@class WFQuantityFieldParameter, WFQuantityParameterState;
@protocol WFComponentNavigationContext;

@interface WFQuantityFieldParameterComponent : WFParameterComponent
{
    WFQuantityParameterState *_state;
    id <WFComponentNavigationContext> _navigationContext;
    WFQuantityFieldParameter *_parameter;
    id /* CDUnknownBlockType */ _updateBlock;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* CDUnknownBlockType */)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
- (id /* CDUnknownBlockType */)updateBlock;
@property(readonly, nonatomic) __weak WFQuantityFieldParameter *parameter; // @synthesize parameter=_parameter;
// - (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;

@end
