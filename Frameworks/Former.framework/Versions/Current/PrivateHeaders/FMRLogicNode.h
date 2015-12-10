//
//  FMRLogicNode.h
//  Former
//
//  Created by Chris Osborn on 6/27/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/Former.h>

typedef NS_ENUM(NSUInteger, FMRLogicOperator) {
    FMRLogicOperatorAND = 0,
    FMRLogicOperatorOR,
    FMRLogicOperatorXOR,
    FMRLogicOperatorNAND,
    FMRLogicOperatorNOR,
    FMRLogicOperatorNXOR,
    FMRLogicOperatorNOT,
    
    FMRLogicOperatorNumberOfOperators,
};

NSString *FMRStringForLogicOperator(FMRLogicOperator logicOperator);

@interface FMRLogicNode : FMRNode

@end
