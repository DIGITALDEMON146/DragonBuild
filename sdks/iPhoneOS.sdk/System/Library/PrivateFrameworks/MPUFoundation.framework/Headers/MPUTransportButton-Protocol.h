//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPUTransportButtonEventHandler, UIControl;
@protocol MPUTransportButton;

@protocol MPUTransportButton <NSObject>
+ (UIControl<MPUTransportButton> *)transportButton;
@property(nonatomic) long long transportButtonImageViewContentMode;
@property(nonatomic) BOOL adjustsImageWhenHighlighted;
@property(readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
- (BOOL)wantsCustomHighlightAppearance;
- (void)prepareForReuse;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_b7523c42)arg1;
@end
