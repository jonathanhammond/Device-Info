//
//  FMPatchPort.h
//  Former
//
//  Created by Max Weisel on 6/17/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMPort.h>

#import <Former/FMRPort.h>

#import <Former/PMRPrimitive.h>

@interface FMPatchPort : FMPort

@property (nonatomic) FMRPort *patchPort;

@property (nonatomic, readonly) BOOL supportsStaticValue;
@property (nonatomic) PMRPrimitive *staticValue;
extern NSString *const FMPatchPortStaticValueDidChangeNotification;

@property (nonatomic, readonly) PMRPrimitive *defaultValue;
@property (nonatomic, readonly) PMRPrimitive *effectiveValue;
extern NSString *const FMPatchPortEffectiveValueDidChangeNotification;

@end
