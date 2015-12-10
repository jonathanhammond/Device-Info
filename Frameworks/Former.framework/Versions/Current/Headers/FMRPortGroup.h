//
//  FMRPortGroup.h
//  Former
//
//  Created by Max Weisel on 6/16/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Former/FMRPort.h>

@interface FMRPortGroup : NSObject

@property (nonatomic, readonly) NSString *groupKey;
@property (nonatomic, readonly) FMRPortOrientation orientation;

@property (nonatomic, readonly) NSOrderedSet *ports;
- (void)addPort:(FMRPort *)port;
- (void)removePort:(FMRPort *)port;
- (FMRPort *)portForKey:(NSString *)uniqueKey;

// TODO: APIs to reorder ports.

@end
