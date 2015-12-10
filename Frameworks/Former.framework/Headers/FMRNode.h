//
//  FMRNode.h
//  Former
//
//  Created by Max Weisel on 6/10/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Former/FMRPort.h>
#import <Former/FMRPortGroup.h>
#import <Former/FMRParameter.h>

@class FMDocument;

/*!
 The FMRNode class represents a patch in the Form editor on the Mac.
 
 FMRNode is made to be subclassed in order to create a custom patch in Form. Each node subclass performs the following:
 - Sets up input and output ports
 - Sets up any parameters
 - Defines the patch class to use on the device for execution.
 - Defines any metadata for the editor (default name, patch library description, etc)
 
 */

@interface FMRNode : NSObject

///---------------------------------------------------------------------------------------
/// @name Metadata
///---------------------------------------------------------------------------------------

/*!
@brief The default name to use when a patch is created.
@details Use this method to return the default name that Form should use when a user creates a new instance of the patch.
*/
+ (NSString *)defaultName;

/*!
 @brief The description to display in the patch library.
 @details Use this method to return the description that Form should display to the user in the patch library.
 */
+ (NSString *)libraryDescription;

/*!
 @brief The category to use for the patch in the patch library.
 @details Use this method to return the patch library category that Form should add this patch to in the patch library.
 */
+ (NSString *)libraryCategory;

/*!
 @brief A set of port group keys for port groups that should be hidden by default.
 @details Use this method to return a set of port group keys that should be hidden by default when the user creates a new instance of the patch.
 */
+ (NSSet *)hiddenPortGroupKeys;

/*!
 @brief The patch class name to use on the device for execution.
 @details Use this method specify the name of the corresponding PMRPatch subclass to use on the device for execution.
 */
+ (NSString *)processClassName;


///---------------------------------------------------------------------------------------
/// @name Ports
///---------------------------------------------------------------------------------------

/*!
 @brief Add a port to the patch.
 @details This method adds a port to the patch that will show up in the editor.
 
 Ports can be grouped by specifying a port group key. If this value is nil, the port will be added to the default port group.
 @param port The port to be added.
 @param portGroupKey The port group key.
 */
- (void)addPort:(FMRPort *)port portGroup:(NSString *)portGroupKey;

/*!
 @brief Remove a port from the patch.
 @details This method removes a port that was previously added to the patch.
 @param port The port to be removed.
 */
- (void)removePort:(FMRPort *)port;

/*!
 @brief An array of all ports on the patch.
 @details This returns an array of all ports that have been added to the patch.
 */
- (NSArray *)ports;


///---------------------------------------------------------------------------------------
/// @name Parameters
///---------------------------------------------------------------------------------------

/*!
 @brief Add a parameter to the patch.
 @details This method adds a parameter to the patch that will show up in the editor.
 @param parameter The parameter to be added.
 */
- (void)addParameter:(FMRParameter *)parameter;

/*!
 @brief Remove a parameter from the patch.
 @details This method removes a parameter that was previously added to the patch.
 @param parameter The parameter to be removed.
 */
- (void)removeParameter:(FMRParameter *)parameter;

/*!
 @brief An array of all parameters on the patch.
 @details This returns an array of all parameters that have been added to the patch.
 */
- (NSArray *)parameters;

/*!
 @brief This method is called by the system whenever the value of a parameter changes.
 @details Override this method to be notified when a parameter value changes. This method is generally used for parameters that will cause the patch to add or remove ports.
 */
- (void)parameterValueDidChange:(FMRParameter *)parameter;

@end
