//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIColor, UITextField, UIView;
@protocol WWKSearchBarDelegate;

@interface WWKSearchBar : UISearchBar <UITextFieldDelegate>
{
    _Bool _isShowBackButton;
    _Bool _isPlaceHolderCenter;
    _Bool _isInNonTableViewHeaderView;
    id <WWKSearchBarDelegate> _searchDelegate;
    double _borderWidth;
    UIButton *_customCancelButton;
    UIColor *_barBackgroundColor;
    UIColor *_searchTextFieldBackgroundColor;
    double _leftMargin;
    UIButton *_backButton;
    UITextField *_searchTextField;
    UIButton *_cancelButton;
    UIView *_bottomSeperator;
}

@property(retain, nonatomic) UIView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool isInNonTableViewHeaderView; // @synthesize isInNonTableViewHeaderView=_isInNonTableViewHeaderView;
@property(nonatomic) _Bool isPlaceHolderCenter; // @synthesize isPlaceHolderCenter=_isPlaceHolderCenter;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) UIColor *searchTextFieldBackgroundColor; // @synthesize searchTextFieldBackgroundColor=_searchTextFieldBackgroundColor;
@property(retain, nonatomic) UIColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
@property(retain, nonatomic) UIButton *customCancelButton; // @synthesize customCancelButton=_customCancelButton;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) __weak id <WWKSearchBarDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)backButtonPressed;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)showBottomSeparator:(_Bool)arg1;
- (void)showBackButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initParam;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
