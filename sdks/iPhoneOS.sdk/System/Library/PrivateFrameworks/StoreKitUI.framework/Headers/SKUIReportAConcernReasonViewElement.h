//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernReasonViewElement : SKUIViewElement
{
    NSNumber *_reasonID;
    NSString *_name;
    NSString *_uppercaseName;
}

@property(readonly, copy, nonatomic) NSString *uppercaseName; // @synthesize uppercaseName=_uppercaseName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSNumber *reasonID; // @synthesize reasonID=_reasonID;
// - (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
