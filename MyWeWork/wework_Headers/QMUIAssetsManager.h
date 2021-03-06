//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsLibrary, PHCachingImageManager;

@interface QMUIAssetsManager : NSObject
{
    ALAssetsLibrary *_alAssetsLibrary;
    PHCachingImageManager *_phCachingImageManager;
    _Bool _usePhotoKit;
}

+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (int)authorizationStatus;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)phCachingImageManager;
- (id)alAssetsLibrary;
- (void)refreshAssetsLibrary;
- (void)saveVideoWithVideoPathURL:(id)arg1 albumAssetsGroup:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveImageWithImageRef:(struct CGImage *)arg1 albumAssetsGroup:(id)arg2 orientation:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)enumerateAllAlbumsWithAlbumContentType:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAllAlbumsWithAlbumContentType:(int)arg1 showEmptyAlbum:(_Bool)arg2 showSmartAlbumIfSupported:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (_Bool)usePhotoKit;
- (id)init;

@end

