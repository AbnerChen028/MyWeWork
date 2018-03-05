//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView, WXCDocSharePicsInfo, WXCPVMergeGroup;

@protocol WWPVMergeAppUIDelegate <NSObject>

@optional
- (void)OnPVRoomScreenShareVideoChanged:(struct CGSize)arg1;
- (void)onPVRoomScreenShareEnd;
- (void)onPVRoomReceivedFirstScreenShareData;
- (void)onPVRoomScreenShareStart:(NSString *)arg1 shareTopic:(NSString *)arg2;
- (void)onPVRoomDocShareError:(int)arg1;
- (void)onPVRoomDocShareOpDrawLineOnPage:(int)arg1 start:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 drawCompleted:(_Bool)arg4 opUuid:(int)arg5;
- (void)onPVRoomDocShareOpMoveToX:(int)arg1 yPos:(int)arg2 scale:(int)arg3;
- (void)onPVRoomDocShareOpPage:(int)arg1;
- (void)onPVRoomDocShareEnd;
- (void)onPVRoomDocShareStart:(NSString *)arg1 shareTopic:(NSString *)arg2 picsInfo:(WXCDocSharePicsInfo *)arg3;
- (void)onPVRoomSignalChange:(_Bool)arg1 isLocal:(_Bool)arg2;
- (void)onPVRoomSysCallHoldEnd;
- (void)onPVRoomSysCallHoldBegin;
- (void)onAccountInfoChange;
- (void)onPVMemberCloseCamera:(unsigned long long)arg1;
- (UIView *)onPVMemberOpenCamera:(unsigned long long)arg1;
- (void)onPVRoomErr:(int)arg1;
- (void)onPVRoomSpeakerStateChange:(_Bool)arg1;
- (void)onPVRoomMuteStateChange:(_Bool)arg1;
- (void)onPVRoomMemberTalking:(WXCPVMergeGroup *)arg1;
- (void)onPVRoomMemberChange:(WXCPVMergeGroup *)arg1;
- (void)onPVRoomTalkReady;
- (void)onPVCreateRoomSuccess:(_Bool)arg1;
@end
