//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WWKForwardingControllerDelegate-Protocol.h"

@class MFMailComposeViewController, NSString, UIButton, UIWebView;

@interface WWKDebugLogController : UIViewController <MFMailComposeViewControllerDelegate, UIWebViewDelegate, WWKForwardingControllerDelegate>
{
    struct FilePath currentLogFile;
    UIWebView *_webView;
    MFMailComposeViewController *_mailComposeController;
    UIButton *_scrollToBottomButton;
    unsigned long long _logType;
}

@property(nonatomic) unsigned long long logType; // @synthesize logType=_logType;
@property(nonatomic) __weak UIButton *scrollToBottomButton; // @synthesize scrollToBottomButton=_scrollToBottomButton;
@property(retain, nonatomic) MFMailComposeViewController *mailComposeController; // @synthesize mailComposeController=_mailComposeController;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)showProgressHUDWithText:(id)arg1;
- (void)sendLogByMail:(id)arg1;
- (void)sendLogByMessage:(id)arg1;
- (void)searchLog:(id)arg1;
- (void)selectLog:(id)arg1;
- (void)scrollToBottom:(id)arg1;
- (void)closeDidClick:(id)arg1;
-     // Error parsing type: v36@0:8^{Message={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::MessageObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::MessageObserver *, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}^^{MessageObserver}{__compressed_pair<model::MessageObserver **, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}}}ii}{unique_ptr<pb::Message, std::__1::default_delete<pb::Message> >={__compressed_pair<pb::Message *, std::__1::default_delete<pb::Message> >=^{Message}}}}16^{Conversation=}24B32, name: forwardingMessage:ToConversation:isSuccess:
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)mimeType;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

