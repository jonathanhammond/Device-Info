//
//  FMRPort.h
//  Former
//
//  Created by Max Weisel on 6/16/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMRNode;

// Specifies which side of the patch a port sits on.
typedef enum {
    FMRPortOrientationUnknown = 0,
    FMRPortOrientationInput  = 1,
    FMRPortOrientationOutput = 2,
} FMRPortOrientation;

// Specifies how many connections can be connected to a specific port. Generally, output ports have a one-to-many relationship while input ports have a one-to-one relationship.
typedef enum {
    FMRPortConnectionRelationshipUnknown = 0,
    FMRPortConnectionRelationshipOneToMany = 1,
    FMRPortConnectionRelationshipOneToOne  = 2
} FMRPortConnectionRelationship;

@interface FMRPort : NSObject

+ (RIColorRGBA)defaultColor;
+ (NSString *)processClassName;

@property (nonatomic, readonly) NSString *uniqueKey; // This uniqueKey only needs to be unique to the parent node.
@property (nonatomic, readonly, weak) FMRNode *node;
@property (nonatomic, copy) NSString *name;

@property (nonatomic, readonly) FMRPortOrientation orientation;
@property (nonatomic, readonly) FMRPortConnectionRelationship connectionRelationship;

- (BOOL)canConnectToPort:(FMRPort *)port;

@end
