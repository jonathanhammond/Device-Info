//
//  FMRPortGroupCollection.h
//  Former
//
//  Created by Max Weisel on 6/17/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMRNode;
#import <Former/FMRPort.h>
#import <Former/FMRPortGroup.h>

@interface FMRPortGroupCollection : NSObject

@property (nonatomic, readonly, weak) FMRNode *node;
@property (nonatomic, readonly) FMRPortOrientation orientation;
@property (nonatomic, readonly) NSOrderedSet *portGroups;

- (FMRPortGroup *)portGroupForKey:(NSString *)groupKey;

@end
