//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, WEWCloudObjectAcl;

@interface WEWCloudModifyObjectItem : NSObject
{
    NSString *_objectid;
    unsigned long long _optype;
    NSData *_orgnialName;
    NSData *_newname;
    NSString *_to_objectid;
    WEWCloudObjectAcl *_acl;
    NSData *_fileDescrName;
    unsigned long long _setTopType;
}

@property(nonatomic) unsigned long long setTopType; // @synthesize setTopType=_setTopType;
@property(retain, nonatomic) NSData *fileDescrName; // @synthesize fileDescrName=_fileDescrName;
@property(retain, nonatomic) WEWCloudObjectAcl *acl; // @synthesize acl=_acl;
@property(copy, nonatomic) NSString *to_objectid; // @synthesize to_objectid=_to_objectid;
@property(retain, nonatomic) NSData *newname; // @synthesize newname=_newname;
@property(retain, nonatomic) NSData *orgnialName; // @synthesize orgnialName=_orgnialName;
@property(nonatomic) unsigned long long optype; // @synthesize optype=_optype;
@property(copy, nonatomic) NSString *objectid; // @synthesize objectid=_objectid;
- (void).cxx_destruct;

@end

