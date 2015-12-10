//
//  FMDocument.h
//  Former
//
//  Created by Max Weisel on 6/9/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMNode.h>

#import <Former/FMPort.h>
#import <Former/FMConnection.h>
#import <Former/FMGroup.h>
#import <Former/FMImageStore.h>

// TODO LIBRARY: This should be FMDocumentGraph. FMDocumentContainer should be FMDocument.
@interface FMDocument : FMNode

// Connections
extern NSString *const FMDocumentAddConnectionNotification;
extern NSString *const FMDocumentRemoveConnectionNotification;

- (FMConnection *)connectPort:(FMPort *)portA toPort:(FMPort *)portB;
- (void)breakConnection:(FMConnection *)connection;
- (void)breakAllConnectionsToPort:(FMPort *)port;

// Only used for undo/redo.
- (void)restoreConnection:(FMConnection *)connection;

// Image Store
@property (nonatomic, readonly) FMImageStore *imageStore;

@end
