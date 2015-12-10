//
//  FMRMathNode.h
//  Former
//
//  Created by Chris Osborn on 6/27/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/Former.h>

typedef NS_ENUM(NSUInteger, FMRMathOperator) {
    FMRMathOperatorAdd = 0,
    FMRMathOperatorSubtract,
    FMRMathOperatorMultiply,
    FMRMathOperatorDivide,
    FMRMathOperatorModulus,
    FMRMathOperatorPower,
    FMRMathOperatorMinimum,
    FMRMathOperatorMaximum,
    
    FMRMathOperatorNumberOfOpreators,
};

NSString *FMRStringForMathOperator(FMRMathOperator mathOperator);

@interface FMRMathNode : FMRNode

@end
