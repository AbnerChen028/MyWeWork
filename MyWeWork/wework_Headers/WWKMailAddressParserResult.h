//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWKMailAddressParserResult : NSObject
{
    _Bool _valid;
    NSString *_address;
    NSString *_nick;
}

@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName;

@end

