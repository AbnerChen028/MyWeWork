//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

@class UIImageView, UILabel;

@interface WWKSearchMailResultCell : WWKSimpleTableViewCell
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_contentLabel;
}

+ (double)calculateCellHeight:(const struct NewMailTips *)arg1 searchText:(id)arg2;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)setMail:(const struct NewMailTips *)arg1 searchText:(id)arg2;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

