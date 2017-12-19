//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WWKInteractiveLabelDelegate-Protocol.h"

@class NSString, UILabel, UIScrollView, WWKInteractiveLabelResponder;
@protocol WWKQRScanResultCellDelegate;

@interface WWKQRScanResultCell : UITableViewCell <WWKInteractiveLabelDelegate>
{
    NSString *_resultString;
    UILabel *_titleLabel;
    UIScrollView *_containerView;
    WWKInteractiveLabelResponder *_resultLabel;
    UILabel *_tipsLabel;
    id <WWKQRScanResultCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WWKQRScanResultCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WWKInteractiveLabelResponder *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)contextMenuItems;
- (void)menuControllerWillHide:(id)arg1;
- (void)messageTextLongPress;
- (void)interactiveLabelDidLongPress:(id)arg1;
- (void)interactiveLabel:(id)arg1 didLongPressContext:(id)arg2 boundingRects:(id)arg3;
- (void)interactiveLabel:(id)arg1 didTouchContext:(id)arg2 boundingRects:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContent;
- (void)layoutSubviews;
- (void)p_initSubViews;
- (id)initWithResultString:(id)arg1 andReuseidentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
