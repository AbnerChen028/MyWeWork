//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DateContainer : NSObject
{
    long long _year;
    long long _month;
    long long _day;
}

+ (id)containerWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)shareInstance;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;

@end
