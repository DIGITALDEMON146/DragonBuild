//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, TSDLayout, TSUMutableRectList, TSWPColumn;
@protocol TSWPLayoutTarget;

@protocol TSWPTextWrap
- (BOOL)checkForUnobstructedSpan:(CGRect)arg1 wrappableAttachments:(NSArray *)arg2 userInfo:(id)arg3;
- (double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(NSArray *)arg2 userInfo:(id)arg3;
- (void)splitLine:(CGRect)arg1 lineSegmentRects:(inout TSUMutableRectList *)arg2 wrappableAttachments:(NSArray *)arg3 ignoreFloatingGraphics:(BOOL)arg4 canvasCausedWrap:(out BOOL )arg5 skipHint:(out double )arg6 userInfo:(id)arg7;
- (id)beginWrappingToColumn:(TSWPColumn *)arg1 columnTransformFromWP:(CGAffineTransform)arg2 target:(TSDLayout<TSWPLayoutTarget> *)arg3 hasWrappables:(out BOOL )arg4;
@end
