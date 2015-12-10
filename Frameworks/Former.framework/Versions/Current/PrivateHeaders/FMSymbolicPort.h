//
//  FMSymbolicPort.h
//  Former
//
//  Created by Max Weisel on 6/17/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMPort.h"

@interface FMSymbolicPort : FMPort

- (instancetype)initWithPort:(FMPort *)port node:(FMNode *)node orientation:(FMRPortOrientation)orientation connectionRelationship:(FMRPortConnectionRelationship)connectionRelationship;

// Inside port that is being published.
@property (nonatomic, weak) FMPort *port;
@property (nonatomic, copy) NSString *name;

// Resolves through all symbolic ports.
- (FMPort *)resolvedPort;

@end
