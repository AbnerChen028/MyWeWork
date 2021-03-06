//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WWKMailAttachPreviewViewDelegate-Protocol.h"
#import "WWKZoomImageViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIPageControl, UIScrollView;
@protocol WWKMultiImageBrowseViewControllerDelegate;

@interface WWKMultiImageBrowseViewController : UIViewController <WWKZoomImageViewDelegate, UIScrollViewDelegate, WWKMailAttachPreviewViewDelegate>
{
    _Bool _isForWorkLog;
    NSMutableArray *_photos;
    NSMutableArray *_attachItems;
    unsigned long long _startIndex;
    id <WWKMultiImageBrowseViewControllerDelegate> _delegate;
    long long _style;
    UIScrollView *_scrollView;
    NSMutableArray *_zoomImageViews;
    unsigned long long _currentIndex;
    UIButton *_indicatorButton;
    UIPageControl *_pageControl;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIButton *indicatorButton; // @synthesize indicatorButton=_indicatorButton;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *zoomImageViews; // @synthesize zoomImageViews=_zoomImageViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool isForWorkLog; // @synthesize isForWorkLog=_isForWorkLog;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <WWKMultiImageBrowseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) NSMutableArray *attachItems; // @synthesize attachItems=_attachItems;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (void)MailAttachPreviewViewDidCompleteDownload:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)singleTouchInZoomingImageView:(id)arg1 location:(struct CGPoint)arg2;
- (void)p_updateDeleteButton;
- (void)p_updateTitle;
- (void)p_onDidClickDelete:(id)arg1;
- (void)p_dismiss:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

