//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPNumberPadButton.h>

@interface TPNumberPadDynamicButton : TPNumberPadButton
{
}

+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (double)highlightedCircleViewAlpha;
+ (double)unhighlightedCircleViewAlpha;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(BOOL)arg2;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (long long)currentStyle;
- (void)updateCurrentStyleIfNecessaryFromStyle:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)buttonColor;
- (id)initForCharacter:(unsigned int)arg1;

@end
