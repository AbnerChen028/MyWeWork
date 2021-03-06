//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKTableViewController.h"

@class NSArray;

@interface WWSingleCommentController : WWKTableViewController
{
    struct UserComment _usrCmmt;
    shared_ptr_4d8cf9e1 _rcmdAppPtr;
    _Bool _isMeasuringCellHeight;
    NSArray *_secArr;
    NSArray *_commentRowArr;
}

@property(retain, nonatomic) NSArray *commentRowArr; // @synthesize commentRowArr=_commentRowArr;
@property(retain, nonatomic) NSArray *secArr; // @synthesize secArr=_secArr;
@property(nonatomic) _Bool isMeasuringCellHeight; // @synthesize isMeasuringCellHeight=_isMeasuringCellHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)p_commentCellTypeWithRowNumber:(long long)arg1;
- (unsigned long long)p_secTypeWithSecNumber:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)p_buildTableDataSource;
- (void)p_refreshTable;
- (void)viewDidLoad;
- (void)p_initUI;
- (void)p_initLogic;
- (id)init;
- (id)backButtonTitle;
- (void)setWithUserComment:(const struct UserComment *)arg1 appInfo:(shared_ptr_4d8cf9e1)arg2;

@end

