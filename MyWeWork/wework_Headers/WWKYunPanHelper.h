//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKYunPanHelper : NSObject
{
}

+ (id)getCloudDiskEntranceControllerFromConversation:(scoped_refptr_fd92d7bf)arg1;
+ (id)getCloudDiskListViewCtroller;
+ (id)getCloudDiskForwardSaveCtroller:(id)arg1 srcController:(id)arg2 isFromWeixin:(_Bool)arg3;
+ (_Bool)isYunpanThumbImageOpen;
+     // Error parsing type: B24@0:8r^{Message={AtomicRefCount={atomic<int>=Ai}}{WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{ObserverList<model::MessageObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<model::MessageObserver *, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}^^{MessageObserver}{__compressed_pair<model::MessageObserver **, std::__1::allocator<model::MessageObserver *> >=^^{MessageObserver}}}ii}{unique_ptr<pb::Message, std::__1::default_delete<pb::Message> >={__compressed_pair<pb::Message *, std::__1::default_delete<pb::Message> >=^{Message}}}}16, name: isMsgEncyrpted:
+ (void)setFeedsModeEnabled:(_Bool)arg1;
+ (_Bool)isFeedsModeEnabled;
+ (_Bool)isYunPanFeatureEnabled;

@end

