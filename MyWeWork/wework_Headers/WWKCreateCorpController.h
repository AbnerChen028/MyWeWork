//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "WWKNoVirtualCorpControllerDelegate-Protocol.h"
#import "WWKRecommCorpControllerDelegate-Protocol.h"
#import "WWKRecommCorplistControllerDelegate-Protocol.h"
#import "WWKSearchCorpEditCellDelegate-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString;

@interface WWKCreateCorpController : UITableViewController <WWKSearchCorpEditCellDelegate, WWKRecommCorplistControllerDelegate, WWKRecommCorpControllerDelegate, UINavigationControllerDelegate, WWKNoVirtualCorpControllerDelegate>
{
    NSMutableArray *_dataSource;
    _Bool _buttonEnable;
    _Bool _isCorpNameEdting;
    _Bool _createCorpSuccess;
    struct CorpBriefInfo _createdCorpInfo;
    MBProgressHUD *_hud;
    NSString *_personInitMail;
    NSString *_personInitName;
}

@property(retain, nonatomic) NSString *personInitName; // @synthesize personInitName=_personInitName;
@property(retain, nonatomic) NSString *personInitMail; // @synthesize personInitMail=_personInitMail;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)p_setButtonLoading:(_Bool)arg1;
- (void)p_setButtonEnable:(_Bool)arg1;
- (void)p_updateErrorMsg:(id)arg1;
- (void)p_updateButton;
- (void)p_endCreateWithDelay:(double)arg1;
- (void)p_beginCreate;
- (void)p_showAlertWithString:(id)arg1;
- (void)p_enterCorp:(const struct CorpBriefInfo *)arg1;
- (void)onCreateVirtualCorp;
- (void)onCreateCorp;
- (void)onCreate;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onKeybordDidShow;
- (void)onTextFieldDidEndEdit:(id)arg1 cell:(id)arg2;
- (void)onTextFieldDidBeginEdit:(id)arg1 cell:(id)arg2;
- (void)onTextFieldDidChange:(id)arg1 cell:(id)arg2;
- (void)onTap:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initData;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

