//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AKPageController;

@interface AKFormFeature : NSObject <NSCopying>
{
    AKPageController *_page;
    CGRect _rect;
}

+ (id)featureWithRect:(CGRect)arg1 onPage:(id)arg2;
@property(nonatomic) __weak AKPageController *page; // @synthesize page=_page;
@property(nonatomic) CGRect rect; // @synthesize rect=_rect;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRect:(CGRect)arg1 onPage:(id)arg2;

@end
