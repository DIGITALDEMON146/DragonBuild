//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHChartBarElementsRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHChartStackedBarElementsRenderer : TSCHChartBarElementsRenderer
{
}

- (void)renderRoundedCornerElementStrokeIntoContext:(CGContext )arg1 stroke:(id)arg2 clippingPath:(CGPath )arg3 elementRenderRect:(CGRect)arg4;
- (CGPath )clippingPathForRect:(CGRect)arg1 inGroupIndex:(NSUInteger)arg2 withContext:(CGContext )arg3 relativelyPositive:(BOOL)arg4 stackRects:(id)arg5;
- (id)stackRectsWithContext:(CGContext )arg1;

@end
