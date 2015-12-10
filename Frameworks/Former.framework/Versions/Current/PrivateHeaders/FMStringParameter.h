//
//  FMStringParameter.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMParameter.h>
#import <Former/FMRStringParameter.h>

@interface FMStringParameter : FMParameter

@property (nonatomic) FMRStringParameter *patchParameter;

@property (nonatomic) NSString *value;
@property (nonatomic, readonly) FMRStringParameterDisplayStyle displayStyle;

@end
