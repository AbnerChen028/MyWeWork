//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

@class QMUITextField, UIImageView, WWKWSEmojiButton;

@interface WWKWorkStatusCustomCell : WWKSimpleTableViewCell
{
    UIImageView *_arrowImage;
    QMUITextField *_textfield;
    WWKWSEmojiButton *_emojiButton;
}

@property(retain, nonatomic) WWKWSEmojiButton *emojiButton; // @synthesize emojiButton=_emojiButton;
@property(retain, nonatomic) QMUITextField *textfield; // @synthesize textfield=_textfield;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

