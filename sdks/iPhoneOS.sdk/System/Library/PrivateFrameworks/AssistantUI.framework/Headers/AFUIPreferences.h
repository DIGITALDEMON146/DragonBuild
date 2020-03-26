//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol AFUIPreferencesDelegate;

@interface AFUIPreferences : NSObject
{
    NSUserDefaults *_userDefaults;
    id <AFUIPreferencesDelegate> _delegate;
}

@property(nonatomic) __weak id <AFUIPreferencesDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)_mutateValueForKey:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (id)objectForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)init;
- (id)initWithDefaultsResource:(id)arg1 withExtension:(id)arg2 inBundle:(id)arg3;
- (id)initWithDefaultsAtURL:(id)arg1;
- (id)initWithSuiteName:(id)arg1;

@end
