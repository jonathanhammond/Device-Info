//
//  FMRPortGroupCollectionInternal.h
//  Former
//
//  Created by Max Weisel on 6/17/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRPortGroupCollection.h"

@class FMRNode;

@interface FMRPortGroupCollection ()

- (instancetype)initWithNode:(FMRNode *)node orientation:(FMRPortOrientation)orientation;

- (void)addPortGroup:(FMRPortGroup *)portGroup;
- (void)removePortGroup:(FMRPortGroup *)portGroup;

@end
