//
//  FMIndexParameter.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMParameter.h>
#import <Former/FMRIndexParameter.h>

@interface FMIndexParameter : FMParameter

@property (nonatomic) FMRIndexParameter *patchParameter;

@property (nonatomic) int value;
@property (nonatomic, readonly) int minimumValue;
@property (nonatomic, readonly) int maximumValue;

@end
