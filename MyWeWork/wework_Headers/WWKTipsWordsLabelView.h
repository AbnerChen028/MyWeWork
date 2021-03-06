//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont;

@interface WWKTipsWordsLabelView : UIView
{
    double _circleBackGroundRadius;
    UIColor *_circleBackGroundColor;
    double _wordMargin;
    NSString *_words;
    UIFont *_wordFont;
    UIColor *_wordColor;
    UIColor *_wordHlColor;
    long long _showWordindex;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long showWordindex; // @synthesize showWordindex=_showWordindex;
@property(retain, nonatomic) UIColor *wordHlColor; // @synthesize wordHlColor=_wordHlColor;
@property(retain, nonatomic) UIColor *wordColor; // @synthesize wordColor=_wordColor;
@property(retain, nonatomic) UIFont *wordFont; // @synthesize wordFont=_wordFont;
@property(retain, nonatomic) NSString *words; // @synthesize words=_words;
@property(nonatomic) double wordMargin; // @synthesize wordMargin=_wordMargin;
@property(retain, nonatomic) UIColor *circleBackGroundColor; // @synthesize circleBackGroundColor=_circleBackGroundColor;
@property(nonatomic) double circleBackGroundRadius; // @synthesize circleBackGroundRadius=_circleBackGroundRadius;
- (void).cxx_destruct;
- (id)getAttributeString:(unsigned long long)arg1;
- (void)configureLabel:(id)arg1 showCircleBackground:(_Bool)arg2;
- (id)genLabel;
- (void)initSubView;
- (void)updateShowWordsToIndex:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 tipsWords:(id)arg2 withViewType:(unsigned long long)arg3;

@end

