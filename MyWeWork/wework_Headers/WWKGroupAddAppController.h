//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UIView;

@interface WWKGroupAddAppController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _checkHasSelectedApps;
    NSString *_naviTitle;
    NSString *_rightBarItemTitle;
    CDUnknownBlockType _callback;
    NSMutableArray *_appSections;
    UITableView *_tableView;
    UIView *_topBackgroundView;
}

@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *appSections; // @synthesize appSections=_appSections;
@property(nonatomic) _Bool checkHasSelectedApps; // @synthesize checkHasSelectedApps=_checkHasSelectedApps;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *rightBarItemTitle; // @synthesize rightBarItemTitle=_rightBarItemTitle;
@property(retain, nonatomic) NSString *naviTitle; // @synthesize naviTitle=_naviTitle;
- (void).cxx_destruct;
- (void)checkRightNaviBarItemEnable;
- (void)sortAppGroups:(id)arg1;
- (void)rightBarItemClick;
- (void)leftBarItemClick;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (id)backButtonTitle;
- (_Bool)isPresent;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAppGroups:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
