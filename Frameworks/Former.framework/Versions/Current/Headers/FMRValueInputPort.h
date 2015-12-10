//
//  FMRValueInputPort.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRInputPort.h"

/*!
 The FMRValueInputPort class represents a port that accepts any object at runtime.
 
 FMRValueInputPort can be used directly when creating an FMRNode subclass, or it can be subclassed to create a port that accepts only a specific object type. This information is then used by Form to determine which output ports can be connected.
 */
@interface FMRValueInputPort : FMRInputPort

///---------------------------------------------------------------------------------------
/// @name Creating a value input port
///---------------------------------------------------------------------------------------

/*!
 @brief Create a value input port with a name and unique key.
 @details This method initializes an FMRValueInputPort with a designated name and uniqueKey.
 
 The unique key will be used later to retrieve the port in the PMRPatch subclass for execution.
 @param name The name of the port to display on the patch in the Form editor.
 @param uniqueKey The uniqueKey of the port that will be used to retrieve it on the device for execution.
 */
- (instancetype)initWithName:(NSString *)name uniqueKey:(NSString *)uniqueKey;

@end
