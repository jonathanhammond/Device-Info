//
//  FMRParameterInternal.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRParameter.h"

@class FMRNode;
@class FMParameter;

@interface FMRParameter ()

+ (Class)parameterClass;
+ (NSString *)processClassName;

- (instancetype)initWithName:(NSString *)name uniqueKey:(NSString *)uniqueKey hidden:(BOOL)hidden;

@property (nonatomic, weak) FMRNode *node;
@property (nonatomic, weak) FMParameter *parameter;
@property (nonatomic, readonly) BOOL hidden;

@end
