//
//  FMPort.h
//  Former
//
//  Created by Max Weisel on 6/9/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMNode;
@class FMConnection;
#import <Former/FMRPort.h>
@class FMSymbolicPort;

@interface FMPort : NSObject <NSCoding> {
@protected
    FMRPortOrientation _orientation;
    FMRPortConnectionRelationship _connectionRelationship;
}

- (instancetype)initWithNode:(FMNode *)node
                 orientation:(FMRPortOrientation)orientation
      connectionRelationship:(FMRPortConnectionRelationship)connectionRelationship;

//// Keys
@property (nonatomic, readonly) NSString *documentKey;
@property (nonatomic, readonly) NSString *uniqueKey;

//// Hierarchy
@property (nonatomic, weak) FMNode *node;
- (void)pruneInvalidConnections;

//// Metadata
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) RIColorRGBA defaultColor;
@property (nonatomic, readonly) FMRPortOrientation orientation;
@property (nonatomic, readonly) FMRPortConnectionRelationship connectionRelationship;
extern NSString *const FMPortNameDidChangeNotification;

//// Connections
@property (nonatomic, readonly) NSSet *connections;
- (BOOL)canConnectToPort:(FMPort *)port;
- (BOOL)acceptsNewConnections;
- (BOOL)connectConnection:(FMConnection *)connection;
- (BOOL)disconnectConnection:(FMConnection *)connection;
extern NSString *const FMPortDidConnectNotification;
extern NSString *const FMPortDidDisconnectNotification;

//// Symbolic Ports
@property (nonatomic, weak) FMSymbolicPort *symbolicPort;
extern NSString *const FMPortDidAddSymbolicReferenceNotification;
extern NSString *const FMPortDidRemoveSymbolicReferenceNotification;

@end
