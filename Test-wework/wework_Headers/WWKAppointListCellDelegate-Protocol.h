//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol WWKAppointListCellDelegate <NSObject>
- (UIView *)getView;
- (void)onCloseButtonClickedWithItem:(scoped_refptr_dc93df68)arg1 point:(struct CGPoint)arg2;
- (void)onJoinButtonClickedWithItem:(scoped_refptr_dc93df68)arg1 point:(struct CGPoint)arg2;
@end
