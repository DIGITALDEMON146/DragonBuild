//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBPlaceholder : NSObject
{
}

+ (void)writePlaceholder:(id)arg1 toPlaceholderAtom:(struct PptOEPlaceholderAtom )arg2 isMaster:(BOOL)arg3 isNotes:(BOOL)arg4;
+ (BOOL)isTitlePlaceholder:(int)arg1;
+ (BOOL)isBodyPlaceholder:(int)arg1;
+ (int)placeholderTypeFromTextType:(int)arg1;
+ (int)readPlaceholderOrientation:(int)arg1;
+ (int)readPlaceholderSize:(int)arg1;
+ (int)readPlaceholderType:(int)arg1;

@end
