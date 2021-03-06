//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationItemCell.h"

#import "UserProxyObserverDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UITapGestureRecognizer, WWKReusableObjectPool;

@interface WWKConversationMessageCell : WWKConversationItemCell <UserProxyObserverDelegate>
{
    struct unique_ptr<UserSmartProxyObserver, std::__1::default_delete<UserSmartProxyObserver>> _userObserver;
    _Bool _flashingBubbles;
    WWKReusableObjectPool *_reusableObjectPool;
    UIActivityIndicatorView *_indicatorView;
    UIButton *_resendButton;
    UIButton *_receiptRespondButton;
    UIButton *_receiptStateButton;
    UIButton *_receiptViewButton;
    UIButton *_receiptLogoButton;
    UIButton *_receiptCorner;
    UIButton *_alertButton;
    UIButton *_decryptFailButton;
    UIButton *_sourceAppButton;
    UIButton *_appTaskCardButton;
    UIButton *_translateButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    double _receiptAnimationStartTick;
    NSMutableArray *_checkButtons;
    NSMutableArray *_nameLabels;
    NSMutableArray *_workStatusImages;
    NSMutableArray *_avatarViews;
    NSMutableArray *_bubbleViews;
}

@property(retain, nonatomic) NSMutableArray *bubbleViews; // @synthesize bubbleViews=_bubbleViews;
@property(retain, nonatomic) NSMutableArray *avatarViews; // @synthesize avatarViews=_avatarViews;
@property(retain, nonatomic) NSMutableArray *workStatusImages; // @synthesize workStatusImages=_workStatusImages;
@property(retain, nonatomic) NSMutableArray *nameLabels; // @synthesize nameLabels=_nameLabels;
@property(retain, nonatomic) NSMutableArray *checkButtons; // @synthesize checkButtons=_checkButtons;
@property(nonatomic) double receiptAnimationStartTick; // @synthesize receiptAnimationStartTick=_receiptAnimationStartTick;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIButton *translateButton; // @synthesize translateButton=_translateButton;
@property(retain, nonatomic) UIButton *appTaskCardButton; // @synthesize appTaskCardButton=_appTaskCardButton;
@property(retain, nonatomic) UIButton *sourceAppButton; // @synthesize sourceAppButton=_sourceAppButton;
@property(retain, nonatomic) UIButton *decryptFailButton; // @synthesize decryptFailButton=_decryptFailButton;
@property(retain, nonatomic) UIButton *alertButton; // @synthesize alertButton=_alertButton;
@property(retain, nonatomic) UIButton *receiptCorner; // @synthesize receiptCorner=_receiptCorner;
@property(retain, nonatomic) UIButton *receiptLogoButton; // @synthesize receiptLogoButton=_receiptLogoButton;
@property(retain, nonatomic) UIButton *receiptViewButton; // @synthesize receiptViewButton=_receiptViewButton;
@property(retain, nonatomic) UIButton *receiptStateButton; // @synthesize receiptStateButton=_receiptStateButton;
@property(retain, nonatomic) UIButton *receiptRespondButton; // @synthesize receiptRespondButton=_receiptRespondButton;
@property(retain, nonatomic) UIButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) _Bool flashingBubbles; // @synthesize flashingBubbles=_flashingBubbles;
@property(retain, nonatomic) WWKReusableObjectPool *reusableObjectPool; // @synthesize reusableObjectPool=_reusableObjectPool;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)OnUserPropertyChanged:(scoped_refptr_e1f85e48)arg1;
- (void)onRefreshUserInfo:(id)arg1;
- (void)messageDidUpdate:(id)arg1;
- (void)message:(id)arg1 didUpdateProgress:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)appTaskCardButtonClicked:(id)arg1;
- (void)alertEditableButtonClicked:(id)arg1;
- (void)checkDelayIndicator:(id)arg1;
- (void)addReceiptDidClick:(id)arg1;
- (void)respondReceiptDidClick:(id)arg1;
- (void)viewReceiptDidClick:(id)arg1;
- (void)resendButtonDidTap:(id)arg1;
- (void)avatarDidLongPress:(id)arg1;
- (void)avatarDidTap:(id)arg1;
- (void)checkButtonDidClick:(id)arg1;
- (void)cellDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)updateReceiptCorner;
- (long long)receiptCornerState;
- (void)recycleBubbleViews;
- (void)buildBubbleViews;
- (void)updateDataAlert;
- (void)updateDataReceipt;
- (void)updateDataForceReceipt2;
- (void)updateDataForceReceipt;
- (void)updateDataContinousReceipt;
- (void)updateDataEmbeddedReceipt;
- (void)updateDataTraditionalReceipt;
- (void)onClickDecryptFailButton:(id)arg1;
- (void)updateData;
- (void)updateUserInfo:(const scoped_refptr_e1f85e48 *)arg1;
- (struct Key)conversationKey;
@property(readonly, nonatomic) _Bool isIncoming;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

