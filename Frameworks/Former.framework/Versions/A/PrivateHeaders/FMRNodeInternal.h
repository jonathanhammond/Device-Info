//
//  FMRNodeInternal.h
//  Former
//
//  Created by Max Weisel on 6/16/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/Former.h>

@class FMNode;

#import <Former/FMRPortGroupCollection.h>

@interface FMRNode ()

+ (RIColorRGBA)defaultColor;
+ (NSString *)patchViewClassName;
+ (BOOL)allowsSubnodes;
+ (BOOL)secretInLibrary;
+ (BOOL)hiddenInLibrary;
+ (FMDocument *)documentGraph;

@property (nonatomic, weak) FMNode *node;
@property (nonatomic, readonly) NSArray *ports;
@property (nonatomic, readonly) FMRPortGroupCollection *inputPortGroupCollection;
@property (nonatomic, readonly) FMRPortGroupCollection *outputPortGroupCollection;
@property (nonatomic) BOOL external;

- (FMRPortGroup *)fm_inputPortGroupForKey:(NSString *)portGroupKey;
- (FMRPortGroup *)fm_outputPortGroupForKey:(NSString *)portGroupKey;

- (id)portForKey:(NSString *)uniqueKey;

@end
