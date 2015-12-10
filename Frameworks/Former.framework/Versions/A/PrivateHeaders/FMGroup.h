//
//  FMGroup.h
//  Former
//
//  Created by Max Weisel on 6/10/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMNode;
@class FMPort;
@class FMSymbolicPort;

@interface FMGroup : NSObject <NSCoding>

+ (NSString *)processClassName;

//// Document Key
@property (nonatomic, readonly) NSString *documentKey;
@property (nonatomic, readonly) NSString *uniqueKey;

//// Hierarchy
@property (nonatomic, weak) FMNode *node;

@property (nonatomic, readonly) NSArray *subnodes;
- (FMNode *)subnodeForKey:(NSString *)uniqueKey;

- (void)hierarchyWillChange;
- (void)hierarchyDidChange;
- (void)pruneInvalidConnections;

// TODO: Instead of making addNode also handle reparentNode let's make that a separate method. This sepraration makes undo/redo easier to implement.
- (void)addNode:(FMNode *)node;
- (void)removeNode:(FMNode *)node;
- (void)subnodeViewTypeDidChange:(FMNode *)node;
extern NSString *const FMGroupAddNodeNotification;
extern NSString *const FMGroupRemoveNodeNotification;

//// Metadata
@property (nonatomic) RIPoint2F canvasCenter;
@property (nonatomic, getter=isOpaque) BOOL opaque; // TODO: Should this be readonly?

//// Symbolic Ports
@property (nonatomic, readonly) NSOrderedSet *symbolicInputPorts;
@property (nonatomic, readonly) NSOrderedSet *symbolicOutputPorts;
- (FMSymbolicPort *)addSymbolicPortForPort:(FMPort *)port;
- (void)removeSymbolicPortForPort:(FMPort *)port;
- (void)restoreSymbolicPort:(FMSymbolicPort *)symbolicPort;
extern NSString *const FMGroupAddSymbolicPortForPortNotification;
extern NSString *const FMGroupRemoveSymbolicPortForPortNotification;

//// Helper Methods
- (NSSet *)selectedNodes;

@end
