//
//  FMRColorParameterInternal.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRColorParameter.h"
#import "FMRParameterInternal.h"

#import "FMColorParameter.h"

@interface FMRColorParameter ()

@property (nonatomic, weak) FMColorParameter *parameter;
@property (nonatomic, readonly) RIColorRGBA defaultValue;

@end
