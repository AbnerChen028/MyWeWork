//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WWKCorpVerifyInfoCell : UITableViewCell
{
    _Bool _suppinfo;
    UILabel *_contentLabel;
    UIImageView *_suppIconView;
}

@property(retain, nonatomic) UIImageView *suppIconView; // @synthesize suppIconView=_suppIconView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) _Bool suppinfo; // @synthesize suppinfo=_suppinfo;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutContentWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setVerifyInfoAttrString:(id)arg1;
- (void)setVerifyInfo:(id)arg1;
- (void)initSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

