/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "FBMMessage.h"

@class NSNumber, NSString;
/*
@interface FBMPushedMessage : FBMMessage
{
    BOOL _isGroupMessage;
    BOOL _hasAttachmentFromPush;
    BOOL _contentAvailable;
    NSString *_threadName;
    unsigned int _multimediaType;
    NSNumber *_stickerIDFromPush;
    unsigned int _pushSource;
    long long _prevLastVisibleActionIdFromPush;
}*/
@interface FBMPushedMessage (Messenger_9_1)
@property(nonatomic) unsigned int pushSource; // @synthesize pushSource=_pushSource;
@property(nonatomic) BOOL contentAvailable; // @synthesize contentAvailable=_contentAvailable;
@property(nonatomic) BOOL hasAttachmentFromPush; // @synthesize hasAttachmentFromPush=_hasAttachmentFromPush;
@property(nonatomic) long long prevLastVisibleActionIdFromPush; // @synthesize prevLastVisibleActionIdFromPush=_prevLastVisibleActionIdFromPush;
@property(nonatomic) NSNumber *stickerIDFromPush; // @synthesize stickerIDFromPush=_stickerIDFromPush;
@property(nonatomic) unsigned int multimediaType; // @synthesize multimediaType=_multimediaType;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(nonatomic) BOOL isGroupMessage; // @synthesize isGroupMessage=_isGroupMessage;
//- (void).cxx_destruct;

@end

