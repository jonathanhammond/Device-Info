//
//  FMRValueOutputPort.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMROutputPort.h>

/*!
 The FMRValueOutputPort class represents a port that can provide any type of object at runtime.
 
 FMRValueOutputPort can be used directly when creating an FMRNode subclass, or it can be subclassed to create a port that outputs only a specific object type. This information is then used by Form to determine which output ports can be connected.
 */
@interface FMRValueOutputPort : FMROutputPort

///---------------------------------------------------------------------------------------
/// @name Creating a value output port
///---------------------------------------------------------------------------------------

/*!
 @brief Create a value output port with a name and unique key.
 @details This method initializes an FMRValueOutputPort with a designated name and uniqueKey.
 
 The unique key will be used later to retrieve the port in the PMRPatch subclass for execution.
 @param name The name of the port to display on the patch in the Form editor.
 @param uniqueKey The uniqueKey of the port that will be used to retrieve it on the device for execution.
 */
- (instancetype)initWithName:(NSString *)name uniqueKey:(NSString *)uniqueKey;

@end
