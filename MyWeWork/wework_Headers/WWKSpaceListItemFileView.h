//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NotificationProxyObserverDelegate-Protocol.h"

@class UIImageView, UILabel, WWKMessageFile;

@interface WWKSpaceListItemFileView : UIView <NotificationProxyObserverDelegate>
{
    struct scoped_ptr<NotificationProxyObserver> _ftn_state_observer;
    _Bool _mIsThumbDownLoadEnable;
    UIImageView *_fileIconImageView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    UIView *_maskView;
    WWKMessageFile *_mFile;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) _Bool mIsThumbDownLoadEnable; // @synthesize mIsThumbDownLoadEnable=_mIsThumbDownLoadEnable;
@property(retain, nonatomic) WWKMessageFile *mFile; // @synthesize mFile=_mFile;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIImageView *fileIconImageView; // @synthesize fileIconImageView=_fileIconImageView;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)checkThumbFileState:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)updateFile:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (void)updateItemView:(id)arg1 byteSize:(int)arg2 fileCount:(unsigned long long)arg3;
- (void)initContentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addObservers;
- (id)initWithFrame:(struct CGRect)arg1;

@end

