//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID;

@interface AFSiriResponse : NSObject <NSSecureCoding>
{
    NSUUID *_requestIdentifier;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_isForRequest:(id)arg1;
- (id)_initWithRequest:(id)arg1;
- (id)_initWithRequestIdentifier:(id)arg1;

@end
