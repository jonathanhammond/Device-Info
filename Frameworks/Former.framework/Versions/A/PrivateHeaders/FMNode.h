//
//  FMNode.h
//  Former
//
//  Created by Max Weisel on 6/9/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMDocument;
#import <Former/FMGroup.h>
#import <Former/FMRNode.h>
#import <Former/FMPort.h>
#import <Former/FMSymbolicPort.h>
#import <Former/FMPortGroup.h>
#import <Former/FMPortGroupCollection.h>
#import <Former/FMParameter.h>

typedef NS_ENUM(NSUInteger, FMNodeInspectorPanel) {
    FMNodeInspectorPanelInputParameters = 0,
    FMNodeInspectorPanelPatchSettings,
};

@interface FMNode : NSObject <NSCoding>

//// Keys
@property (nonatomic, readonly) NSString *documentKey;
@property (nonatomic, readonly) NSString *uniqueKey;

//// Hierarchy
@property (nonatomic, readonly) FMDocument *document;
@property (nonatomic, weak) FMGroup *parentGroup;
@property (nonatomic, readonly) FMGroup *subnodeGroup;
@property (nonatomic, readonly) NSArray *keyPath;
- (void)hierarchyWillChange;
- (void)hierarchyDidChange;
- (void)pruneInvalidConnections;
@property (nonatomic) BOOL forceAllowsSubnodes;

@property (nonatomic, readonly) BOOL shouldBeTreatedAsViewNode;
- (void)swapSubnodeGroupToGroup;
- (void)swapSubnodeGroupToViewGroup;
extern NSString *const FMNodeSubnodeGroupDidChangeNotification;

//// Metadata
@property (nonatomic) NSString *name;
@property (nonatomic, readonly) RIColorRGBA defaultColor;
@property (nonatomic) RIPoint2F position;
@property (nonatomic) FMNodeInspectorPanel inspectorPanel;
@property (nonatomic) BOOL selected;
extern NSString *const FMNodePositionDidChangeNotification;
extern NSString *const FMNodeNameDidChangeNotification;
extern NSString *const FMNodeSelectionDidChangeNotification;

//// Ports
@property (nonatomic, readonly) NSArray *ports; // TODO: It would be super useful for this to include the symbolic ports.
@property (nonatomic, readonly) NSArray *inputPorts;
@property (nonatomic, readonly) NSArray *outputPorts;
extern NSString *const FMNodeAddPortNotification;
extern NSString *const FMNodeRemovePortNotification;
@property (nonatomic, readonly) NSOrderedSet *symbolicInputPorts; // TODO: Why no matching symbolicPorts?
@property (nonatomic, readonly) NSOrderedSet *symbolicOutputPorts;
- (void)addPatchPort:(FMRPort *)patchPort;
- (void)removePatchPort:(FMRPort *)patchPort;
- (void)patchPortNameDidChange:(FMRPort *)patchPort;
- (void)symbolicPortNameDidChange:(FMSymbolicPort *)symbolicPort;
- (void)symbolicPortNameWasAdded:(FMPort *)port;
- (void)symbolicPortNameWasRemoved:(FMPort *)port;

// Returns ports and symbolic ports.
- (FMPort *)portForKey:(NSString *)uniqueKey;

//// Port Groups
extern NSString *const FMNodeAddPortGroupNotification;
extern NSString *const FMNodeRemovePortGroupNotification;
- (FMPortGroup *)inputPortGroupForKey:(NSString *)portGroupKey;
- (FMPortGroup *)outputPortGroupForKey:(NSString *)portGroupKey;
- (FMPortGroup *)portGroupForKey:(NSString *)portGroupKey orientation:(FMRPortOrientation)orientation;

//// Port Group Collections
@property (nonatomic, readonly) FMPortGroupCollection *inputPortGroupCollection;
@property (nonatomic, readonly) FMPortGroupCollection *outputPortGroupCollection;

//// Parameters
@property (nonatomic, readonly) NSOrderedSet *parameters;
extern NSString *const FMNodeAddParameterNotification;
extern NSString *const FMNodeRemoveParameterNotification;
- (FMParameter *)parameterForKey:(NSString *)uniqueKey;
- (void)parameterDidChange:(FMParameter *)parameter;
- (void)addPatchParameter:(FMRParameter *)patchParameter;
- (void)removePatchParameter:(FMRParameter *)patchParameter;

//// Patch
@property (nonatomic, strong) FMRNode *patch;

@end
