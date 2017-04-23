/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "FBSessionClassProvidable-Protocol.h"

@class FBMMessageReceiptUpdater, NSString;

@interface FBMLocalThreadMessagesManipulator : NSObject //<FBSessionClassProvidable>
{
    FBMMessageReceiptUpdater *_messageReceiptUpdater;
//    id <MNAuthenticationManager> _authManager;
}

//- (void).cxx_destruct;
- (void)deleteMessageWithId:(id)arg1 fromThread:(id)arg2;
- (void)clearMessagesOnThread:(id)arg1;
- (void)setMessages:(id)arg1 forThread:(id)arg2;
- (void)_addMessage:(id)arg1 toThread:(id)arg2 searchOption:(unsigned int)arg3;
- (void)addOlderMessage:(id)arg1 toThread:(id)arg2;
- (void)addNewerMessage:(id)arg1 toThread:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithMessageReceiptUpdater:(id)arg1 authManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
