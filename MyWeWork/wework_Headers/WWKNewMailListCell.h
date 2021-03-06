//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

@class UIImageView, UILabel;

@interface WWKNewMailListCell : WWKSimpleTableViewCell
{
    struct NewMailTips _mailInfo;
    double _summaryLabelHeight;
    UILabel *_nickNameLabel;
    UILabel *_timeLabel;
    UILabel *_mailSubjectLabel;
    UILabel *_mailSummaryLabel;
    UIImageView *_attachImageView;
    UIImageView *_avatarImageView;
    UIImageView *_replyImageView;
    UIImageView *_blackImageView;
}

@property(retain, nonatomic) UIImageView *blackImageView; // @synthesize blackImageView=_blackImageView;
@property(retain, nonatomic) UIImageView *replyImageView; // @synthesize replyImageView=_replyImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *attachImageView; // @synthesize attachImageView=_attachImageView;
@property(retain, nonatomic) UILabel *mailSummaryLabel; // @synthesize mailSummaryLabel=_mailSummaryLabel;
@property(retain, nonatomic) UILabel *mailSubjectLabel; // @synthesize mailSubjectLabel=_mailSubjectLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
-     // Error parsing type: v24@0:8^{Message={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::MessageObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::MessageObserver *, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}^^{MessageObserver}{__compressed_pair<model::MessageObserver **, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}}}ii}{unique_ptr<pb::Message, std::__1::default_delete<pb::Message> >={__compressed_pair<pb::Message *, std::__1::default_delete<pb::Message> >=^{Message}}}}16, name: setData:
- (void)setMailInfo:(const struct NewMailTips *)arg1;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

