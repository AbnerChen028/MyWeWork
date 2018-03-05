//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKCustomerDetailCell.h"

@class UIImageView, UILabel, UIView;

@interface WWKCustomerDetailRecordingCell : WWKCustomerDetailCell
{
    _Bool _isLastCell;
    _Bool _isFirstCell;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
    UIView *_lineView;
    UIImageView *_circleImageView;
}

@property(nonatomic, setter=setFirstCell:) _Bool isFirstCell; // @synthesize isFirstCell=_isFirstCell;
@property(nonatomic, setter=setLastCell:) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) UIImageView *circleImageView; // @synthesize circleImageView=_circleImageView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)initSubviews;

@end
