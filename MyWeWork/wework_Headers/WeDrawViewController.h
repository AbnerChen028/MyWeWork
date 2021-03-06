//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MDrawViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WXCMaskViewDelegate-Protocol.h"
#import "WXDActionsheetViewDelegate-Protocol.h"
#import "WeDrawPopDelegate-Protocol.h"
#import "WeDrawTopToolDelegate-Protocol.h"

@class MDrawView, NSArray, NSMutableArray, NSString, UIButton, UIColor, UIImage, UIImagePickerController, UIImageView, UIView, WXCMaskView, WXDActionsheetView, WeDrawConfirmButton, WeDrawDot, WeDrawPenView, WeDrawPopView, WeDrawTopTool;
@protocol WeDrawViewControllerDelegate;

@interface WeDrawViewController : UIViewController <UINavigationControllerDelegate, WXCMaskViewDelegate, UIImagePickerControllerDelegate, MDrawViewDelegate, WeDrawPopDelegate, WeDrawTopToolDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, WXDActionsheetViewDelegate>
{
    CDUnknownBlockType _transBlock;
    float _fsacal;
    UIImageView *_viewAnimateImageView;
    WXDActionsheetView *actionSheet;
    _Bool _needInitAnimate;
    _Bool _showPanel;
    _Bool _elementSelected;
    _Bool _isAnimation;
    _Bool _lockConfigView;
    _Bool _isConfigViewOut;
    _Bool _isConfigViewWillOut;
    _Bool _shouldBlinkPenview;
    id <WeDrawViewControllerDelegate> _delegate;
    UIImage *_snipImage;
    double _fromScale;
    MDrawView *_drawView;
    UIImagePickerController *_imagePickerController;
    WeDrawTopTool *_toolView;
    WeDrawDot *_nibView;
    WeDrawPopView *_colorPopView;
    WeDrawPopView *_sizePopView;
    WeDrawPenView *_penView;
    WeDrawPopView *_penPopView;
    WeDrawPopView *_shapePopView;
    WeDrawConfirmButton *_confirmButton;
    WXCMaskView *_maskView;
    NSMutableArray *_colorViews;
    NSMutableArray *_sizeViews;
    NSMutableArray *_penViews;
    NSMutableArray *_shapeViews;
    long long _currentType;
    long long _currentShape;
    long long _currentPen;
    long long _currentSize;
    UIColor *_currentColor;
    UIColor *_oldColor;
    long long _oldSize;
    UIView *_panelView;
    UIView *_colorSizeWrap;
    NSArray *_colors;
    NSArray *_sizes;
    NSArray *_pens;
    double _padding;
    double _offset;
    UIButton *_configViewDelete;
    UIButton *_configViewEdit;
    struct CGRect _fromRect;
}

@property(nonatomic) _Bool shouldBlinkPenview; // @synthesize shouldBlinkPenview=_shouldBlinkPenview;
@property(nonatomic) _Bool isConfigViewWillOut; // @synthesize isConfigViewWillOut=_isConfigViewWillOut;
@property(nonatomic) _Bool isConfigViewOut; // @synthesize isConfigViewOut=_isConfigViewOut;
@property(nonatomic) _Bool lockConfigView; // @synthesize lockConfigView=_lockConfigView;
@property(retain, nonatomic) UIButton *configViewEdit; // @synthesize configViewEdit=_configViewEdit;
@property(retain, nonatomic) UIButton *configViewDelete; // @synthesize configViewDelete=_configViewDelete;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) _Bool elementSelected; // @synthesize elementSelected=_elementSelected;
@property(nonatomic) _Bool showPanel; // @synthesize showPanel=_showPanel;
@property(retain, nonatomic) NSArray *pens; // @synthesize pens=_pens;
@property(retain, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) UIView *colorSizeWrap; // @synthesize colorSizeWrap=_colorSizeWrap;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) long long oldSize; // @synthesize oldSize=_oldSize;
@property(retain, nonatomic) UIColor *oldColor; // @synthesize oldColor=_oldColor;
@property(retain, nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
@property(nonatomic) long long currentSize; // @synthesize currentSize=_currentSize;
@property(nonatomic) long long currentPen; // @synthesize currentPen=_currentPen;
@property(nonatomic) long long currentShape; // @synthesize currentShape=_currentShape;
@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) NSMutableArray *shapeViews; // @synthesize shapeViews=_shapeViews;
@property(retain, nonatomic) NSMutableArray *penViews; // @synthesize penViews=_penViews;
@property(retain, nonatomic) NSMutableArray *sizeViews; // @synthesize sizeViews=_sizeViews;
@property(retain, nonatomic) NSMutableArray *colorViews; // @synthesize colorViews=_colorViews;
@property(retain, nonatomic) WXCMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WeDrawConfirmButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WeDrawPopView *shapePopView; // @synthesize shapePopView=_shapePopView;
@property(retain, nonatomic) WeDrawPopView *penPopView; // @synthesize penPopView=_penPopView;
@property(retain, nonatomic) WeDrawPenView *penView; // @synthesize penView=_penView;
@property(retain, nonatomic) WeDrawPopView *sizePopView; // @synthesize sizePopView=_sizePopView;
@property(retain, nonatomic) WeDrawPopView *colorPopView; // @synthesize colorPopView=_colorPopView;
@property(retain, nonatomic) WeDrawDot *nibView; // @synthesize nibView=_nibView;
@property(retain, nonatomic) WeDrawTopTool *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(retain, nonatomic) MDrawView *drawView; // @synthesize drawView=_drawView;
@property(nonatomic) double fromScale; // @synthesize fromScale=_fromScale;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(nonatomic) _Bool needInitAnimate; // @synthesize needInitAnimate=_needInitAnimate;
@property(retain, nonatomic) UIImage *snipImage; // @synthesize snipImage=_snipImage;
@property(nonatomic) __weak id <WeDrawViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickConfigEdit;
- (void)animateEditShape;
- (void)resetPopSelectIndexWithColor:(id)arg1 size:(long long)arg2 pen:(long long)arg3;
- (void)setPenpopEnable;
- (void)clickAtMaskView;
- (void)hidePop;
- (void)resetOffset;
- (void)showPop;
- (void)showPenview;
- (void)hideTool;
- (void)showTool;
- (void)clickAtConfirm;
- (void)clickAtPenView;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)modalAlertPressed:(id)arg1 withButtonIndex:(long long)arg2;
- (void)clickDelete;
- (void)clickToolDone;
- (void)clickToolMore;
- (void)clickToolConfirm;
- (void)clickToolClose;
- (void)clickToolRedo;
- (void)clickToolUndo;
- (void)clickTool;
- (_Bool)canContinueClose;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)clickDotWithConfig:(id)arg1;
- (void)clickAtPop:(id)arg1;
- (void)checkAndTipImageVaild:(id)arg1;
- (void)clickPickImage;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didCanvasScaleAndPanEnd;
- (void)didCanvasScaleAndPanStart;
- (void)currentSelectedToolsPropertyChanged:(unsigned long long)arg1 color:(id)arg2 lineWidth:(double)arg3;
- (void)textToolEditing:(_Bool)arg1;
- (void)canUndoStateChanged:(_Bool)arg1 canRedo:(_Bool)arg2;
- (void)seletedToolsStateChanged:(_Bool)arg1;
- (double)toolbarHeight;
- (void)didDrawStarted;
- (_Bool)isToolbarPlaceBottom;
- (void)addContstrains;
- (struct CGRect)fixFrame;
- (void)addContstrains2;
- (void)initSubviews2;
- (void)initSubviews;
- (void)initData;
- (void)hideStatusBar;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)initDraw;
- (void)doApplyTransBlockToCoreModel;
- (void)setLogTranferBlock:(CDUnknownBlockType)arg1;
- (void)setTopNavigationItem:(_Bool)arg1 title:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)startAnimateOut:(struct CGRect)arg1;
- (void)startAnimateIn:(CDUnknownBlockType)arg1;
- (id)initWithSourceImage:(id)arg1 withDelegate:(id)arg2;
- (id)initWithSourceImage:(id)arg1 needInitAnimate:(_Bool)arg2 fromRect:(struct CGRect)arg3 withDelegate:(id)arg4;
- (id)initWithSourceImage:(id)arg1 scale:(float)arg2 needInitAnimate:(_Bool)arg3 fromRect:(struct CGRect)arg4 fromScale:(double)arg5 withDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

