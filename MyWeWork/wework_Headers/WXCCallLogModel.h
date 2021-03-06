//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WWCalllogDataProxyObserverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface WXCCallLogModel : NSObject <WWCalllogDataProxyObserverDelegate>
{
    NSMutableArray *_callRecords;
    NSMutableArray *_callLogDisplaySource;
    NSMutableDictionary *_callRecordDetail;
    NSMutableDictionary *_callTimeDic;
    struct WWCalllogDataProxyObserver *_dataProxyObserver;
    NSMutableArray *_getFullDepartmentQueue;
    NSMutableDictionary *_userIdToDepartmentMap;
    scoped_refptr_e1f85e48 _selectUser;
    unsigned long long _department_id;
    vector_a024b487 department_list_;
    NSString *_curGettingVid;
    _Bool _isGetingFullDepartmentNow;
    _Bool _dataLoaded;
    _Bool _callLogLoadFinished;
    _Bool _hasFetch1000MinGift;
    int _vid_flag;
    int _tryRefreshFailTimes;
    NSNumber *_corpRemainMinute;
    NSNumber *_vidRemainMinute;
    NSNumber *_vidQuotaMinute;
    struct GetCorpPstnRemindMinRsp _pstnMinInfoRsp;
}

+ (_Bool)startPstnCall:(unsigned long long)arg1 withPhoneNumber:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) int tryRefreshFailTimes; // @synthesize tryRefreshFailTimes=_tryRefreshFailTimes;
@property(nonatomic) struct GetCorpPstnRemindMinRsp pstnMinInfoRsp; // @synthesize pstnMinInfoRsp=_pstnMinInfoRsp;
@property(nonatomic) _Bool hasFetch1000MinGift; // @synthesize hasFetch1000MinGift=_hasFetch1000MinGift;
@property(nonatomic) int vid_flag; // @synthesize vid_flag=_vid_flag;
@property(copy, nonatomic) NSNumber *vidQuotaMinute; // @synthesize vidQuotaMinute=_vidQuotaMinute;
@property(copy, nonatomic) NSNumber *vidRemainMinute; // @synthesize vidRemainMinute=_vidRemainMinute;
@property(copy, nonatomic) NSNumber *corpRemainMinute; // @synthesize corpRemainMinute=_corpRemainMinute;
@property(nonatomic) _Bool callLogLoadFinished; // @synthesize callLogLoadFinished=_callLogLoadFinished;
@property(nonatomic) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)p_remainInMinute;
- (int)p_totalMinute;
- (_Bool)p_isUserQuotaMode;
- (id)_fetchVidOrPhoneStringFromDataItem:(id)arg1 onlyKeepCellPhone:(_Bool)arg2;
- (void)_addCountForStringID:(id)arg1 withDic:(id)arg2;
- (void)_addFreqMemberArr:(id)arg1 fromStringIDArr:(id)arg2 withDic:(id)arg3 forType:(long long)arg4;
- (id)_genFrequentCallLogsOnlyCellPhone:(_Bool)arg1;
- (id)generateFrequentLogsForOnlyCellPhone:(_Bool)arg1;
- (void)onGetMainDepartmentBack:(const scoped_refptr_85c18dd7 *)arg1;
- (void)onGetDepartmentBack:(const vector_a024b487 *)arg1;
- (void)getOneFullDepartmentInfoFinish:(id)arg1;
- (void)doGetUserDepartmentInfo;
- (id)getKeyNumber:(id)arg1;
- (void)updateRecordDetailAndGroup:(id)arg1 type:(unsigned long long)arg2 withAddNow:(id)arg3;
- (id)loadTestData;
- (void)notifyCalllogDataChanged;
- (id)getLocationForPhone:(id)arg1;
- (id)detailForPhoneNumer:(id)arg1 withVid:(unsigned long long)arg2;
- (id)fullDepartmentForVid:(unsigned long long)arg1;
- (id)departmentForVid:(unsigned long long)arg1;
- (id)rebuildTextLabelTextForMultiTalkSoWeHaveSpaceAndPutSuffixStrInLimitedWidthInternalHelper:(double)arg1 wholeStr:(id)arg2 namesOfTalkers:(id)arg3;
- (id)inviteDisplayNameForMulti:(id)arg1;
- (id)attendeeDisplayNameForMulti:(id)arg1 limitedWidth:(double)arg2;
- (_Bool)checkPhoneNumberHasChanged:(id)arg1 withVid:(unsigned long long)arg2;
- (id)nickNameForPhoneNumber:(id)arg1 withVid:(unsigned long long)arg2;
- (void)getRealUserByVid:(long long)arg1 callLogStoreid:(long long)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (scoped_refptr_e1f85e48)getCachedUserByVid:(long long)arg1;
- (id)getExternalContactCorpName:(const scoped_refptr_e1f85e48 *)arg1;
- (void)OnCallerAcceptWithRoomId:(unsigned int)arg1 roomKey:(unsigned long long)arg2 callerVid:(unsigned long long)arg3;
- (void)OnCalllogDataChanged;
- (void)addRecords:(id)arg1;
- (void)releaseData;
- (id)recentCallTimeDic;
- (void)_refreshCallTimeDic;
- (void)loadCallLogData;
- (id)getLatestMultiCallLogItem:(id)arg1;
- (id)getMessageListPstnMissedCallSubtitleText:(id)arg1;
- (void)checkAndDeleteMarkDelCallLogs;
- (void)deleteCallogList:(id)arg1;
- (id)getCallLogDetailForPhoneNumber:(id)arg1;
- (id)getCallLogListData;
- (void)removeDataProxy;
- (void)initDataProxy;
- (void)onMobileNumberDidChangedNotification:(id)arg1;
- (void)onPstnSysCallDisconnectedNotify:(id)arg1;
- (void)updateCorpRemainMinInfoCompleted:(CDUnknownBlockType)arg1;
- (void)updateCorpRemainMinInfo;
- (void)dealloc;
- (void)resetMgr;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

