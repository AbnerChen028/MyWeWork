//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MZFormSheetControllerTransition-Protocol.h"

@class NSString;

@interface MZFormSheetTransition : NSObject <MZFormSheetControllerTransition>
{
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)exitFormSheetControllerTransition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)entryFormSheetControllerTransition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)contentViewControllerForController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

