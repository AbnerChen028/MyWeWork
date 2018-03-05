//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface QMUICellHeightIndexPathCache : NSObject
{
    NSMutableArray *_heightsBySectionForPortrait;
    NSMutableArray *_heightsBySectionForLandscape;
    _Bool _automaticallyInvalidateEnabled;
}

@property(nonatomic) _Bool automaticallyInvalidateEnabled; // @synthesize automaticallyInvalidateEnabled=_automaticallyInvalidateEnabled;
- (void).cxx_destruct;
- (id)description;
- (void)buildRowsIfNeeded:(long long)arg1 inExistSection:(long long)arg2;
- (void)buildSectionsIfNeeded:(long long)arg1;
- (void)buildCachesAtIndexPathsIfNeeded:(id)arg1;
- (void)invalidateAllHeightCache;
- (void)invalidateHeightAtIndexPath:(id)arg1;
- (double)heightForIndexPath:(id)arg1;
- (void)cacheHeight:(double)arg1 byIndexPath:(id)arg2;
- (_Bool)existsHeightAtIndexPath:(id)arg1;
- (void)enumerateAllOrientationsUsingBlock:(CDUnknownBlockType)arg1;
- (id)heightsBySectionForCurrentOrientation;
- (id)init;

@end
