//
//  FMRIndexParameterInternal.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRIndexParameter.h"
#import "FMRParameterInternal.h"

#import "FMIndexParameter.h"

@interface FMRIndexParameter ()

@property (nonatomic, weak) FMIndexParameter *parameter;
@property (nonatomic, readonly) int defaultValue;

@end
