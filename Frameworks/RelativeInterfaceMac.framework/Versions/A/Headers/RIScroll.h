//
//  RIScroll.h
//  RelativeInterface
//
//  Created by Max Weisel on 3/5/14.
//  Copyright (c) 2014 RelativeWave. All rights reserved.
//

// External
#import <Foundation/Foundation.h>

// Interaction
#import "RIInteraction.h"

// Geometry Types
#import "RIGeometryTypes.h"

@interface RIScroll : NSObject <RIInteraction>

@property (nonatomic, readonly) RIRay3F ray;
@property (nonatomic, readonly) RIPoint2F translation;
@property (nonatomic, readonly) RIPoint2F velocity;

@end
