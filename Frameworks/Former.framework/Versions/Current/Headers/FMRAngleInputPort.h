//
//  FMRAngleInputPort.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRPrimitiveInputPort.h"

/*!
 The FMRAngleInputPort class represents a port that accepts an angle type specifically. The default implementation will take care of all value conversion at runtime.
 
 FMRAngleInputPort is made to be used directly when creating an FMRNode subclass.
 */
@interface FMRAngleInputPort : FMRPrimitiveInputPort

///---------------------------------------------------------------------------------------
/// @name Creating an angle input port
///---------------------------------------------------------------------------------------

/*!
 @brief Create an angle input port with a name, unique key and default value.
 @details This method initializes an FMRAngleInputPort with a designated name, uniqueKey and default value.
 
 The unique key will be used later to retrieve the port in the PMRPatch subclass for execution.
 @param name The name of the port to display on the patch in the Form editor.
 @param uniqueKey The uniqueKey of the port that will be used to retrieve it on the device for execution.
 @param defaultValue A PMRPrimitive instance of the default value to use for the port. This should be a primitive created with either a degrees or radians value.
 */
- (instancetype)initWithName:(NSString *)name uniqueKey:(NSString *)uniqueKey defaultValue:(PMRPrimitive *)defaultValue;

@end
