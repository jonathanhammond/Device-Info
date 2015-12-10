//
//  FMRBooleanParameterInternal.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRBooleanParameter.h"
#import "FMRParameterInternal.h"

#import "FMBooleanParameter.h"

@interface FMRBooleanParameter ()

@property (nonatomic, weak) FMBooleanParameter *parameter;
@property (nonatomic, readonly) BOOL defaultValue;

@end
