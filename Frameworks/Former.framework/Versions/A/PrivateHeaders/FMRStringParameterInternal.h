//
//  FMRStringParameterInternal.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRStringParameter.h"
#import "FMRParameterInternal.h"

#import "FMStringParameter.h"

@interface FMRStringParameter ()

@property (nonatomic, weak) FMStringParameter *parameter;
@property (nonatomic, readonly) NSString *defaultValue;

@end
