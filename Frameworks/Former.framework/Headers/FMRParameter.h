//
//  FMRParameter.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 The FMRParameter class represents a parameter in the Form editor. Parameters are used to expose editable values that should not be changed at runtime. (e.g. Number of dimensions on a spring). Generally parameters are used for values that will dynamically change the input or output ports on a patch.
 
 */
@interface FMRParameter : NSObject

///---------------------------------------------------------------------------------------
/// @name Creating a parameter
///---------------------------------------------------------------------------------------

/*!
 @brief Create a parameter with a name and unique key.
 @details This method initializes an FMRParameter with a designated name and uniqueKey.
 
 The unique key will be used later to retrieve the parameter in the PMRPatch subclass for execution.
 @param name The name of the parameter to display on the patch in the Form editor.
 @param uniqueKey The uniqueKey of the parameter that will be used to retrieve it on the device for execution.
 */
- (instancetype)initWithName:(NSString *)name uniqueKey:(NSString *)uniqueKey;


///---------------------------------------------------------------------------------------
/// @name Properties
///---------------------------------------------------------------------------------------

/*!
 @brief The name of the parameter.
 @details This property represents the name of the parameter to display on the patch in the Form editor.
 */
@property (nonatomic, readonly) NSString *name;

/*!
 @brief The unqiue key of the parameter.
 @details This property represents the unique key of the parameter that will be used to retrieve it on the device for execution.
 */
@property (nonatomic, readonly) NSString *uniqueKey;

@end
