//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUStringEncodingHelper : NSObject
{
}

+ (NSUInteger)encodingForLocalizedName:(id)arg1;
+ (id)localizedNameOfStringEncoding:(NSUInteger)arg1;
+ (id)localizedEncodingNames;
+ (void)p_initializeEncodings;
+ (id)p_fallbackNameForEncoding:(NSUInteger)arg1;

@end
