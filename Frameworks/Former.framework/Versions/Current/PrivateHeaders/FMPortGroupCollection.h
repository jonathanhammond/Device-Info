//
//  FMPortGroupCollection.h
//  Former
//
//  Created by Max Weisel on 6/17/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMNode;
#import <Former/FMRPort.h> 

@interface FMPortGroupCollection : NSObject <NSCoding>

- (instancetype)initWithNode:(FMNode *)node orientation:(FMRPortOrientation)orientation;

//// Hierarchy
@property (nonatomic, readonly, weak) FMNode *node;

//// Port Group Keys
@property (nonatomic, readonly) NSOrderedSet *portGroupKeys;
- (void)updateWithPortGroupKeys:(NSOrderedSet *)portGroupKeys;

//// Metadata
@property (nonatomic, readonly) FMRPortOrientation orientation;

@end
