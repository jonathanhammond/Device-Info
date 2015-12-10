//
//  DeviceInfoNode.m
//  DeviceInfo
//
//  Created by Jon Hammond on 10/12/2015.
//  Copyright © 2015 Jon Hammond. All rights reserved.
//

#import "DeviceInfoNode.h"

@implementation DeviceInfoNode

+ (NSString *)defaultName {
    return @"Device Info";
}

+ (NSString *)processClassName {
    return @"DeviceInfoPatch";
}

- (instancetype)init {
    if ((self = [super init]) != nil) {
        // Inputs
        
        // Outputs
        [self addPort:[[FMRPrimitiveOutputPort alloc] initWithName:@"Name" uniqueKey:@"Form.name"] portGroup:nil];
        [self addPort:[[FMRPrimitiveOutputPort alloc] initWithName:@"System Name" uniqueKey:@"Form.systemName"] portGroup:nil];
        [self addPort:[[FMRPrimitiveOutputPort alloc] initWithName:@"System Version" uniqueKey:@"Form.systemVersion"] portGroup:nil];
        [self addPort:[[FMRPrimitiveOutputPort alloc] initWithName:@"Model" uniqueKey:@"Form.model"] portGroup:nil];
        [self addPort:[[FMRPrimitiveOutputPort alloc] initWithName:@"Battery Level" uniqueKey:@"Form.batteryLevel"] portGroup:nil];
    }
    return self;
}

- (void)dealloc {
    
}

@end
