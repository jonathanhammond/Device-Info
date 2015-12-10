//
//  FMRPortInternal.h
//  Former
//
//  Created by Max Weisel on 6/16/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/Former.h>

@interface FMRPort ()

- (instancetype)initWithName:(NSString *)name uniqueKey:(NSString *)uniqueKey orientation:(FMRPortOrientation)orientation connectionRelationship:(FMRPortConnectionRelationship)connectionRelationship;

@property (nonatomic, readwrite, weak) FMRNode *node;
@property (nonatomic) NSString *portGroupKey;

@end
