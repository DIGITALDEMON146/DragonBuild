//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenMeteredGaugeImage : CLKComplicationTemplateGraphicCircular
{
    CLKGaugeProvider *_gaugeProvider;
    CLKFullColorImageProvider *_imageProvider;
    CLKTextProvider *_textProvider;
}

@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
@property(copy, nonatomic) CLKFullColorImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
// - (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end
