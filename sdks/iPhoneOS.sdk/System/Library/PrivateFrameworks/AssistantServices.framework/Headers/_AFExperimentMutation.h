//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentMutating-Protocol.h>

@class AFExperiment, NSDictionary, NSString;

@interface _AFExperimentMutation : NSObject <AFExperimentMutating>
{
    AFExperiment *_baseModel;
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    long long _deploymentReason;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasConfigurationIdentifier:1;
        unsigned int hasConfigurationVersion:1;
        unsigned int hasDeploymentGroupIdentifier:1;
        unsigned int hasDeploymentGroupProperties:1;
        unsigned int hasDeploymentReason:1;
    } _mutationFlags;
}

// - (void).cxx_destruct;
- (id)generate;
- (void)setDeploymentReason:(long long)arg1;
- (void)setDeploymentGroupProperties:(id)arg1;
- (void)setDeploymentGroupIdentifier:(id)arg1;
- (void)setConfigurationVersion:(id)arg1;
- (void)setConfigurationIdentifier:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

@end
