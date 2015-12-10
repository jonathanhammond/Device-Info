//
//  DeviceInfoPlugin.m
//  DeviceInfo
//
//  Created by Jon Hammond on 10/12/2015.
//  Copyright © 2015 Jon Hammond. All rights reserved.
//

#import "DeviceInfoPlugin.h"
#import "DeviceInfoNode.h"

@implementation DeviceInfoPlugin

+ (NSString *)name {
    return @"DeviceInfo";
}

+ (NSString *)description {
    return @"Created by Jon Hammond on 10/12/2015";
}

+ (NSArray *)nodeClasses {
    return @[[DeviceInfoNode class]];
}

@end
