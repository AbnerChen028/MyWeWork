//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WXCPVMergeGroupMember;

@protocol PvMultiContactsContainerDataSource <NSObject>
- (WXCPVMergeGroupMember *)screenShareMemberInContainer;
- (_Bool)shouldReuseCachedCell:(WXCPVMergeGroupMember *)arg1;
- (_Bool)shouldShowMemTalkingState:(WXCPVMergeGroupMember *)arg1;
- (_Bool)shouldShowMemStatusTips:(WXCPVMergeGroupMember *)arg1;
- (WXCPVMergeGroupMember *)contactInContainerAtIndex:(long long)arg1;
- (long long)numberOfContactsInContainer;
@end

