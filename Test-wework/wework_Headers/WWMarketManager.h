//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWMarketManager : NSObject
{
}

+ (_Bool)isNeedJumpToCompleteCorpInfo;
+ (void)marketOssLogWithItemName:(id)arg1 categoryIdStr:(id)arg2 providerId:(id)arg3 appId:(id)arg4;
+ (id)svrCGIErrorInfoWithErrCode:(int)arg1;
+ (_Bool)checkPermissionOKForMarketOperation:(id *)arg1;
+ (_Bool)handleOpenWithUrl:(id)arg1;
+ (shared_ptr_39f023b2)topSelfCommentWithSelfComment:(const struct UserComment *)arg1 commentList:(shared_ptr_39f023b2)arg2 withLimitedSize:(long long)arg3;
+ (id)tagCombineStrWithUserComment:(struct UserComment *)arg1;
+ (id)starDescStrWithValue:(int)arg1;
+ (id)sharedInstance;
- (void)postCommentStateChangeNotification;
- (void)postAppStateChangeNotification;
- (id)genSuitsAppImgList:(const vector_c253e700 *)arg1 imgSize:(double)arg2 completed:(CDUnknownBlockType)arg3;

@end
