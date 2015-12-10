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
    return @"This patch retrieves the Device's name, system name, system version, model and Battery status. Created by Jon Hammond justaddmusicmedia.com";
}

+ (NSArray *)nodeClasses {
    return @[[DeviceInfoNode class]];
}

@end
