//
//  FMRPrimitiveInputPort.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRValueInputPort.h"
#import "PMRPrimitive.h"

/*!
 The FMRPrimitiveInputPort class represents a port that accepts any primitive type (Boolean, Index, Number, Angle, Color or String). The default implementation will take care of all value conversion at runtime.
 
 FMRPrimitiveInputPort is made to be used directly when creating an FMRNode subclass.
 */
@interface FMRPrimitiveInputPort : FMRValueInputPort

///---------------------------------------------------------------------------------------
/// @name Creating a primitive input port
///---------------------------------------------------------------------------------------

/*!
 @brief Create a primitive input port with a name, unique key and default value.
 @details This method initializes an FMRPrimitiveInputPort with a designated name, uniqueKey and default value.
 
 The unique key will be used later to retrieve the port in the PMRPatch subclass for execution.
 @param name The name of the port to display on the patch in the Form editor.
 @param uniqueKey The uniqueKey of the port that will be used to retrieve it on the device for execution.
 @param defaultValue A PMRPrimitive instance of the default value to use for the port.
 */
- (instancetype)initWithName:(NSString *)name uniqueKey:(NSString *)uniqueKey defaultValue:(PMRPrimitive *)defaultValue;


///---------------------------------------------------------------------------------------
/// @name Mapped Values
///---------------------------------------------------------------------------------------

/*!
 @brief Map a specific value to a label.
 @details This method is used to label possible values for the input port. When set, this creates a dropdown in Form that can be used by the user to select values.
 @param value The value to be mapped.
 @param label The label to display in Form.
 */
- (void)mapValue:(PMRPrimitive *)value toLabel:(NSString *)label;

/*!
 @brief Retrieve a specific value given a label.
 @details This method is used to retrieve a value for a specific label.
 @param label The label that was previously mapped.
 */
- (PMRPrimitive *)mappedValueForLabel:(NSString *)label;

/*!
 @brief Retrieve a specific label given a value.
 @details This method is used to retrieve a label for a specific value.
 @param value The value that was previously mapped.
 */
- (NSString *)labelForMappedValue:(PMRPrimitive *)value;

/*!
 @brief Lock the port to only allow mapped values in the editor.
 @details This method tells Form to only allow the user to set static values from the list of values that have been mapped.
 */
@property (nonatomic) BOOL lockToMappedValues;


///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

/*!
 @brief The default value.
 @details This property represents the default value to use when no input value is set.
 */
@property (nonatomic, readonly) PMRPrimitive *defaultValue;

@end
