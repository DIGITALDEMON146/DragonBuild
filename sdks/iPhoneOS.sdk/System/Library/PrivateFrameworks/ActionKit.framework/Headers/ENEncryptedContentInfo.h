//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface ENEncryptedContentInfo : NSObject
{
    NSString *_hint;
    NSString *_cipher;
    long long _keyLength;
    NSMutableString *_cipherText;
}

@property(retain, nonatomic) NSMutableString *cipherText; // @synthesize cipherText=_cipherText;
@property long long keyLength; // @synthesize keyLength=_keyLength;
@property(copy, nonatomic) NSString *cipher; // @synthesize cipher=_cipher;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
// - (void).cxx_destruct;
- (id)init;

@end
