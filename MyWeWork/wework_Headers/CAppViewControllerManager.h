//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface CAppViewControllerManager : MMObject
{
}

+ (id)topViewControllerOfWindow:(id)arg1;
+ (id)getCurrentNavigationController;
+ (id)getTabBarController;
+ (id)getAppViewControllerManager;
- (void)forceRedrawNavigationViewControllers;
- (id)getMainWindow;
- (id)getTabBarBaseViewController:(unsigned long long)arg1;
- (id)getNewMainFrameViewController;
- (void)moveToTab:(long long)arg1 showMainView:(_Bool)arg2;

@end
