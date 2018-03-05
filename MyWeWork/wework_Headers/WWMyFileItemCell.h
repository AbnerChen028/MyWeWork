//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WWMyFileItemCell : UITableViewCell
{
    _Bool _isShowStar;
    UIImageView *_fileImage;
    UIView *_customSeparatorLine;
    UIView *_resendVw;
    UIView *_favorateVw;
    UILabel *_uploadTimeLabel;
    UILabel *_extentionLabel;
    UIImageView *_markVw;
    UIImageView *_customAccessoryVw;
    UIImageView *_starImage;
    UILabel *_fileSizeLabel;
}

@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(nonatomic) _Bool isShowStar; // @synthesize isShowStar=_isShowStar;
@property(retain, nonatomic) UIImageView *starImage; // @synthesize starImage=_starImage;
@property(retain, nonatomic) UIImageView *customAccessoryVw; // @synthesize customAccessoryVw=_customAccessoryVw;
@property(retain, nonatomic) UIImageView *markVw; // @synthesize markVw=_markVw;
@property(retain, nonatomic) UILabel *extentionLabel; // @synthesize extentionLabel=_extentionLabel;
@property(retain, nonatomic) UILabel *uploadTimeLabel; // @synthesize uploadTimeLabel=_uploadTimeLabel;
@property(retain, nonatomic) UIView *favorateVw; // @synthesize favorateVw=_favorateVw;
@property(retain, nonatomic) UIView *resendVw; // @synthesize resendVw=_resendVw;
@property(retain, nonatomic) UIView *customSeparatorLine; // @synthesize customSeparatorLine=_customSeparatorLine;
@property(retain, nonatomic) UIImageView *fileImage; // @synthesize fileImage=_fileImage;
- (void).cxx_destruct;
- (void)updateImageSize;
- (void)initWithData:(id)arg1 isShowConvName:(_Bool)arg2;
- (void)adjustTextLabelText:(id)arg1 maxWidth:(float)arg2;
- (float)getAccessoryOffset;
- (void)layoutSubviews;
- (void)showArrow:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateFontSize;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
