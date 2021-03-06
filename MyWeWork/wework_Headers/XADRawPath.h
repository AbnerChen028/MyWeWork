//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADPath.h"

@class NSData, XADStringSource;

@interface XADRawPath : XADPath
{
    NSData *data;
    XADStringSource *source;
    const char *separators;
}

- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_sourceForPart;
- (void)_appendPathForPartToData:(id)arg1;
- (_Bool)_canDecodePartWithEncodingName:(id)arg1;
- (id)_pathByDeletingFirstPathComponentOfPartWithEncodingName:(id)arg1;
- (id)_pathByDeletingLastPathComponentOfPartWithEncodingName:(id)arg1;
- (id)_firstPathComponentOfPartWithEncodingName:(id)arg1;
- (id)_lastPathComponentOfPartWithEncodingName:(id)arg1;
- (void)_addPathComponentsOfPartToArray:(id)arg1 encodingName:(id)arg2;
- (int)_depthOfPartWithEncodingName:(id)arg1;
- (_Bool)_isPartEmpty;
- (_Bool)_isPartAbsolute;
- (void)dealloc;
- (id)initWithPath:(id)arg1 parent:(id)arg2;
- (id)initWithData:(id)arg1 source:(id)arg2 separators:(const char *)arg3 parent:(id)arg4;
- (id)initWithData:(id)arg1 source:(id)arg2 separators:(const char *)arg3;

@end

