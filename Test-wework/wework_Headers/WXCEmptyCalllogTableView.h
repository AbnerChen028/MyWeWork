//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol WXCEmptyCalllogTableViewDelegate;

@interface WXCEmptyCalllogTableView : UIView
{
    id <WXCEmptyCalllogTableViewDelegate> _delegate;
    UILabel *_textLabel;
    UIImageView *_iconView;
}

@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) id <WXCEmptyCalllogTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initConstraints;
- (void)onDetailBtnClick:(id)arg1;
- (id)init;

@end
