//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WAAudioPlayerInterface-Protocol.h"

@class NSString;

@interface WAGameAudioPlayer : MMObject <WAAudioPlayerInterface>
{
}


// Remaining properties
@property(readonly, nonatomic) NSString *audioId;
@property(readonly, nonatomic) double bufferTime;
@property(readonly, nonatomic) double curTime;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool forcePaused;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *src;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) long long state;
@property(readonly) Class superclass;
@end

