//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class QMUIButton, UIImageView, UILabel;

@interface WWKForumLocationPopViewController : UIViewController
{
    int _type;
    UIImageView *_tipImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    QMUIButton *_sureButton;
    QMUIButton *_cancelButton;
    double _titleLabelMarginTop;
    double _subTitleMarginTop;
    double _sureButtonMarginTop;
    double _cancelButtonMarginTop;
    CDUnknownBlockType _onClickSureButton;
    CDUnknownBlockType _onClickCancelButton;
    struct UIEdgeInsets _contentInsets;
}

@property(copy, nonatomic) CDUnknownBlockType onClickCancelButton; // @synthesize onClickCancelButton=_onClickCancelButton;
@property(copy, nonatomic) CDUnknownBlockType onClickSureButton; // @synthesize onClickSureButton=_onClickSureButton;
@property(nonatomic) double cancelButtonMarginTop; // @synthesize cancelButtonMarginTop=_cancelButtonMarginTop;
@property(nonatomic) double sureButtonMarginTop; // @synthesize sureButtonMarginTop=_sureButtonMarginTop;
@property(nonatomic) double subTitleMarginTop; // @synthesize subTitleMarginTop=_subTitleMarginTop;
@property(nonatomic) double titleLabelMarginTop; // @synthesize titleLabelMarginTop=_titleLabelMarginTop;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) QMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) QMUIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setCancelButtonText:(id)arg1;
- (void)setSureButtonText:(id)arg1;
- (void)setSubtitle:(id)arg1 boldText:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)didClickCancelButton;
- (void)didClickSureButton;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithType:(int)arg1;

@end
