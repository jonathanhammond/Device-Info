//
//  FMRStringParameter.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRParameter.h"

typedef enum {
    FMRStringParameterDisplayStyleSingleLine,
    FMRStringParameterDisplayStyleMultipleLine
} FMRStringParameterDisplayStyle;

@interface FMRStringParameter : FMRParameter

@property (nonatomic) NSString *value;
@property (nonatomic) FMRStringParameterDisplayStyle displayStyle;

@end
