//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNDDonorExtension, CNDonationValue, NSArray, NSDate, NSError, NSString;

@protocol CNDonationAgentLogger <NSObject>
- (void)couldNotRenewBecauseLoadingError:(NSError *)arg1;
- (void)couldNotRenewBecauseDonorError:(NSError *)arg1;
- (void)couldNotRenewBecauseNotADonorExtension:(id)arg1;
- (void)didRenewValue:(CNDonationValue *)arg1 untilDate:(NSDate *)arg2;
- (void)willRenewValues:(NSArray *)arg1 withDonor:(NSString *)arg2;
- (void)didRemoveAllRejections;
- (void)willRemoveAllRejections;
- (void)didListRejections;
- (void)willListRejections;
- (void)couldNotRejectClusterIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)couldNotRejectUnknownClusterIdentifier:(NSString *)arg1;
- (void)didRejectClusterIdentifier:(NSString *)arg1;
- (void)willRejectClusterIdentifier:(NSString *)arg1;
- (void)couldNotRejectDonationIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)couldNotRejectUnknownDonationIdentifier:(NSString *)arg1;
- (void)didRejectDonationIdentifier:(NSString *)arg1;
- (void)willRejectDonationIdentifier:(NSString *)arg1;
- (void)willSaveExtensionVersions;
- (void)willLoadExtensionVersions;
- (void)didFailToDiscoverExtensions:(NSError *)arg1;
- (void)didDiscoverExtensions;
- (void)didDiscoverUnexpectedExtensionType:(id)arg1;
- (void)didDiscoverExtension:(CNDDonorExtension *)arg1;
- (void)willDiscoverExtensions;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)arg1;
- (void)contactsChangedNotificationFoundName:(BOOL)arg1 nameChanged:(BOOL)arg2;
- (void)featureDidEnable;
- (void)featureWillEnable;
- (void)featureDidDisable;
- (void)featureWillDisable;
- (void)featureNotEnabled:(SEL)arg1;
- (void)agentDidHandleRequest:(SEL)arg1;
- (void)agentWillHandleRequest:(SEL)arg1;
- (void)preExpiredDonations:(NSArray *)arg1;
- (void)acceptingDonations:(NSArray *)arg1;
- (void)denyingRequestFromProcess:(int)arg1;
- (void)acceptingConnectionFromProcess:(int)arg1;
- (void)endRestorePersistedState;
- (void)beginRestorePersistedState;
- (void)maintenanceServiceWillStop;
- (void)maintenanceServiceDidStart;
- (void)maintenanceServiceWillStart;
- (void)donationServiceWillStop;
- (void)donationServiceDidStart;
- (void)donationServiceWillStart;
- (void)agentWillStop;
- (void)agentDidStart;
- (void)agentWillStart;
@end
