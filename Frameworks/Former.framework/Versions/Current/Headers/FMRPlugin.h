//
//  FMPlugin.h
//  Former
//
//  Created by Max Weisel on 4/24/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 The FMRPlugin class represents a plugin for the Form editor on Mac.
 
 FMRPlugin is made to be subclassed in order to create a custom plugin in Form. Each subclass provides the following information:
 - Name of the plugin
 - Description of the plugin
 - An array of FMRNode subclasses for each patch included in the plugin.
 
 */

@interface FMRPlugin : NSObject

///---------------------------------------------------------------------------------------
/// @name Metadata
///---------------------------------------------------------------------------------------

/*!
 @brief The name of the plugin to display in Form.
 @details Use this method to return the name that Form should use when displaying a list of installed plugins.
 */
+ (NSString *)name;

/*!
 @brief The description of the plugin.
 @details Use this method to return the description that Form should use when displaying a list of installed plugins.
 */
+ (NSString *)description;

/*!
 @brief An array of node classes for each patch included in the plugin.
 @details Use this method to return a list of FMRNode subclasses for each patch included in the plugin.
 
 Each class will automatically be added to the Form library.
 */
+ (NSArray *)nodeClasses;

@end
