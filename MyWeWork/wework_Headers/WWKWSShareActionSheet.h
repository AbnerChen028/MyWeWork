//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WWKScrollActionSheetIconViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, WWKActionSheetScrollView;
@protocol WWKWSShareActionSheetDelegate;

@interface WWKWSShareActionSheet : UIView <WWKScrollActionSheetIconViewDelegate, UIScrollViewDelegate>
{
    unsigned long long _rowCount;
    NSArray *_dataAry1;
    NSString *_cancelTitle;
    UILabel *_titleLabel;
    WWKActionSheetScrollView *_scrollView;
    UIButton *_cancelButton;
    id <WWKWSShareActionSheetDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKWSShareActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutSubViewWithWidth:(double)arg1;
- (void)onCancelBtnClicked;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (void)initSubViews;
- (void)dealloc;
- (id)initWithItems:(id)arg1 desciption:(id)arg2 cancelButtonTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

