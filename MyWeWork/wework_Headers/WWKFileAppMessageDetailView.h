//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKBaseAppMessageTitleView.h"

@class UIImageView, UILabel;

@interface WWKFileAppMessageDetailView : WWKBaseAppMessageTitleView
{
    CDUnknownBlockType _openFileBlock;
    UIImageView *_fileTypeImageView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    struct FileMsg _fileMsg;
}

@property(nonatomic) __weak UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(nonatomic) __weak UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(nonatomic) __weak UIImageView *fileTypeImageView; // @synthesize fileTypeImageView=_fileTypeImageView;
@property(copy, nonatomic) CDUnknownBlockType openFileBlock; // @synthesize openFileBlock=_openFileBlock;
@property(nonatomic) struct FileMsg fileMsg; // @synthesize fileMsg=_fileMsg;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)getHeightWithLimitWitdh:(double)arg1;
- (id)initWithCoder:(id)arg1;

@end
