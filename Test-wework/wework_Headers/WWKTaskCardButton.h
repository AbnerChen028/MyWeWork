//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWKTaskCardButton : NSObject
{
    unsigned int _buttonId;
    long long _buttonType;
    NSString *_title;
    NSString *_replaceTitle;
    NSString *_url;
    long long _colorType;
    long long _isClick;
}

@property(nonatomic) long long isClick; // @synthesize isClick=_isClick;
@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *replaceTitle; // @synthesize replaceTitle=_replaceTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) unsigned int buttonId; // @synthesize buttonId=_buttonId;
- (void).cxx_destruct;

@end
