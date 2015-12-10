//
//  FMRNumberParameterInternal.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRNumberParameter.h"
#import "FMRParameterInternal.h"

#import "FMNumberParameter.h"

@interface FMRNumberParameter ()

@property (nonatomic, weak) FMNumberParameter *parameter;
@property (nonatomic, readonly) float defaultValue;

@end
