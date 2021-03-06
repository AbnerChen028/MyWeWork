//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWRedEnvelopesContainerSubView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WWRedEnvPickerViewHolderDelegate-Protocol.h"

@class NSString, UITableView, UIView, WWFavoriteEmptyView, WWRedCustomTopMenu, WWRedEnvHistoryRecvHeaderView, WWRedEnvLoadMoreView;
@protocol WWRedEnvHistoryViewDelegate;

@interface WWRedEnvHistoryView : WWRedEnvelopesContainerSubView <UITableViewDataSource, UITableViewDelegate, WWRedEnvPickerViewHolderDelegate>
{
    struct vector<scoped_refptr<redenvelopes::RedEnvelopesSendInfo>, std::__1::allocator<scoped_refptr<redenvelopes::RedEnvelopesSendInfo>>> _mSendInfoList;
    struct vector<scoped_refptr<redenvelopes::RedEnvelopesRecvInfo>, std::__1::allocator<scoped_refptr<redenvelopes::RedEnvelopesRecvInfo>>> _mRecvInfoList;
    scoped_refptr_c706adb8 _historyResult;
    _Bool _mIsRecvMode;
    _Bool _mIsLoadDataEnd;
    _Bool _mIsNeedRefreshData;
    _Bool _mIsLoading;
    _Bool _isIpadLongScreenIssueHandled;
    unsigned int _mLastOffset;
    WWRedCustomTopMenu *_mSelectYearMenu;
    NSString *_mSelectDate;
    id <WWRedEnvHistoryViewDelegate> _mHistoryDelegate;
    UITableView *_mTableView;
    WWRedEnvLoadMoreView *_mLoadMoreView;
    WWRedEnvHistoryRecvHeaderView *_mHeaderDetailView;
    WWFavoriteEmptyView *_mLoadingView;
    WWFavoriteEmptyView *_mLoadErrorView;
    UIView *_mContentView;
}

@property(nonatomic) _Bool isIpadLongScreenIssueHandled; // @synthesize isIpadLongScreenIssueHandled=_isIpadLongScreenIssueHandled;
@property(nonatomic) _Bool mIsLoading; // @synthesize mIsLoading=_mIsLoading;
@property(nonatomic) _Bool mIsNeedRefreshData; // @synthesize mIsNeedRefreshData=_mIsNeedRefreshData;
@property(retain, nonatomic) UIView *mContentView; // @synthesize mContentView=_mContentView;
@property(retain, nonatomic) WWFavoriteEmptyView *mLoadErrorView; // @synthesize mLoadErrorView=_mLoadErrorView;
@property(retain, nonatomic) WWFavoriteEmptyView *mLoadingView; // @synthesize mLoadingView=_mLoadingView;
@property(retain, nonatomic) WWRedEnvHistoryRecvHeaderView *mHeaderDetailView; // @synthesize mHeaderDetailView=_mHeaderDetailView;
@property(retain, nonatomic) WWRedEnvLoadMoreView *mLoadMoreView; // @synthesize mLoadMoreView=_mLoadMoreView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(nonatomic) _Bool mIsLoadDataEnd; // @synthesize mIsLoadDataEnd=_mIsLoadDataEnd;
@property(nonatomic) unsigned int mLastOffset; // @synthesize mLastOffset=_mLastOffset;
@property(nonatomic) _Bool mIsRecvMode; // @synthesize mIsRecvMode=_mIsRecvMode;
@property(nonatomic) __weak id <WWRedEnvHistoryViewDelegate> mHistoryDelegate; // @synthesize mHistoryDelegate=_mHistoryDelegate;
@property(copy, nonatomic) NSString *mSelectDate; // @synthesize mSelectDate=_mSelectDate;
@property(retain, nonatomic) WWRedCustomTopMenu *mSelectYearMenu; // @synthesize mSelectYearMenu=_mSelectYearMenu;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onLoadMoreClick;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)p_checkShouldLoadMoreWithScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSendInfoChange:(id)arg1;
- (void)onRecvInfoChange:(id)arg1;
- (void)fixLayoutSubview:(struct CGPoint)arg1;
- (struct CGPoint)tableOffset;
- (void)updateTableOffset:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onContainerSwitch;
- (void)subViewDidDisappear;
- (void)subViewWillDisappear;
- (void)subViewDidAppear;
- (void)subViewWillAppear;
- (void)loadSubView;
- (void)updateSelectTitle:(id)arg1;
- (void)showLoadSuccUI;
- (void)showLoadFailUI;
- (void)showLoadingUI;
- (void)updateUI;
- (void)loadData:(_Bool)arg1 offset:(unsigned int)arg2;
- (void)loadMoreData:(_Bool)arg1;
- (void)reLoadData;
- (void)onSwitchToDate:(id)arg1;
- (void)onSelectYear;
- (void)initUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isRecv:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

