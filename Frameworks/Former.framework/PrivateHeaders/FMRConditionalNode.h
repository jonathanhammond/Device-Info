//
//  FMRConditionalNode.h
//  Former
//
//  Created by Chris Osborn on 6/27/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/Former.h>

typedef NS_ENUM(NSUInteger, FMRConditionalOperator) {
    FMRConditionalOperatorIsEqual = 0,
    FMRConditionalOperatorIsNotEqual,
    FMRConditionalOperatorIsGreaterThan,
    FMRConditionalOperatorIsLessThan,
    FMRConditionalOperatorIsGreaterThanOrEqual,
    FMRConditionalOperatorIsLessThanOrEqual,
    
    FMRConditionalOperatorNumberOfOpreators,
};

NSString *FMRStringForConditionalOperator(FMRConditionalOperator conditionalOperator);

@interface FMRConditionalNode : FMRNode

@end
