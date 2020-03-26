//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/JXHTTPRequestBody-Protocol.h>

@class NSData;

@interface JXHTTPJSONBody : NSObject <JXHTTPRequestBody>
{
    NSData *_requestData;
}

+ (id)withJSONObject:(id)arg1;
+ (id)withString:(id)arg1;
+ (id)withData:(id)arg1;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
// - (void).cxx_destruct;
- (void)httpOperationDidFinishLoading:(id)arg1;
- (long long)httpContentLength;
- (id)httpContentType;
- (id)httpInputStream;
- (id)initWithData:(id)arg1;

@end
