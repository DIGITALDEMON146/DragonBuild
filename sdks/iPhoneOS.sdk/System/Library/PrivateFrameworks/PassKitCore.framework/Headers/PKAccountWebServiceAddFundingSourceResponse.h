//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKAccountPaymentFundingSource;

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse
{
    PKAccountPaymentFundingSource *_fundingSource;
}

@property(readonly, copy, nonatomic) PKAccountPaymentFundingSource *fundingSource; // @synthesize fundingSource=_fundingSource;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
