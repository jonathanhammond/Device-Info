//
//  FMRInputPortInternal.h
//  Former
//
//  Created by Max Weisel on 6/16/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRInputPort.h"

@interface FMRInputPort ()

- (instancetype)initWithName:(NSString *)name uniqueKey:(NSString *)uniqueKey connectionRelationship:(FMRPortConnectionRelationship)connectionRelationship;

@end
