//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICLocation.h>

#import <NotesShared/ICSearchIndexableTarget-Protocol.h>

@class NSString;

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>
{
}

+ (id)newAttachmentLocationForAttachment:(id)arg1;
@property(readonly, nonatomic) NSString *formattedAddressWithoutAttachmentTitle;
- (id)targetSearchIndexable;

@end
