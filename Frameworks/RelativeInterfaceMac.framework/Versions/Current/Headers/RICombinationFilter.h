//
//  RICombinationFilter.h
//  RelativeInterface
//
//  Created by Max Weisel on 5/8/14.
//  Copyright (c) 2014 RelativeWave. All rights reserved.
//

#import "RIFilter.h"

@interface RICombinationFilter : RIFilter

- (id)initWithFilters:(NSArray *)filters;

@property (nonatomic, readonly) NSArray *filters;

@end
