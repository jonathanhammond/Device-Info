//
//  DeviceInfoPatch.h
//  DeviceInfo
//
//  Created by Jon Hammond on 10/12/2015.
//  Copyright © 2015 Jon Hammond. All rights reserved.
//

#import <Performer/Performer.h>

@interface DeviceInfoPatch : PMRPatch

@property (nonatomic, readonly) PMRPrimitiveOutputPort *name;
@property (nonatomic, readonly) PMRPrimitiveOutputPort *systemName;
@property (nonatomic, readonly) PMRPrimitiveOutputPort *systemVersion;
@property (nonatomic, readonly) PMRPrimitiveOutputPort *model;
@property (nonatomic, readonly) PMRPrimitiveOutputPort *batteryLevel;

@end
