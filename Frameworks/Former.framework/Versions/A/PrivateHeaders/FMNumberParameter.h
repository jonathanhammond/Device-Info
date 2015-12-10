//
//  FMNumberParameter.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMParameter.h>
#import <Former/FMRNumberParameter.h>

@interface FMNumberParameter : FMParameter

@property (nonatomic) FMRNumberParameter *patchParameter;

@property (nonatomic) float value;
@property (nonatomic, readonly) float minimumValue;
@property (nonatomic, readonly) float maximumValue;

@end
