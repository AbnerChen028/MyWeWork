//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKConversationMessageMaskedBubbleView.h"

@class UILabel, WWKMessageApplyNotify;

@interface WWKApplyNotifyBubbleView : WWKConversationMessageMaskedBubbleView
{
    UILabel *_titleLabel;
    UILabel *_typeLabel;
    UILabel *_row1Label;
    UILabel *_row2Label;
}

@property(retain, nonatomic) UILabel *row2Label; // @synthesize row2Label=_row2Label;
@property(retain, nonatomic) UILabel *row1Label; // @synthesize row1Label=_row1Label;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)p_getAttributeTextAtRow:(unsigned long long)arg1;
- (void)viewDidTap:(id)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (_Bool)p_isApplyComm;
- (_Bool)p_isApplyExpense;
- (_Bool)p_isApplyLeave;
- (struct CGSize)p_layoutSubViewsWithLimitWidth:(double)arg1;
- (void)updateData;
- (Class)messageItemClass;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) WWKMessageApplyNotify *messageItem; // @dynamic messageItem;

@end
