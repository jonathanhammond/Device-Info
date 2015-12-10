//
//  RIMouse.h
//  RelativeInterface
//
//  Created by Max Weisel on 1/10/14.
//  Copyright (c) 2014 RelativeWave. All rights reserved.
//

// External
#import <Foundation/Foundation.h>

// Interaction
#import "RIInteraction.h"

// Geometry Types
#import "RIGeometryTypes.h"

@class RIView;

typedef enum {
    RIMouseButtonUnknown = 0,
    RIMouseLeftButton = 1,
    RIMouseRightButton,
    RIMouseHover,
} RIMouseButton;

/*!
 The RIMouse class represents a mouse event in 3D space.
 */

@interface RIMouse : NSObject <RIInteraction>

///---------------------------------------------------------------------------------------
/// @name Getting mouse information
///---------------------------------------------------------------------------------------

/*!
 @brief An RIRay3F value that represents the mouse in global space coordinates.
 @details This property is recalculated everytime the RIMouse object is passed via a mouse event method.
 @note Call -[RIMouse locationInView:] to project the mouse event onto a view's interactionPlane.
 */
@property (nonatomic, readonly) RIRay3F ray;

/*!
 @brief An RIRay3F value that represents the previous mouse location in global space coordinates.
 @details This property is recalculated everytime the RIMouse object is passed via a mouse event method.
 @note Call -[RIMouse previousLocationInView:] to project the previous mouse location onto a view's interactionPlane.
 */
@property (nonatomic, readonly) RIRay3F previousRay;

/*!
 @brief An integer that represents the current click count for a mouse event.
 @details This property is carried over from the native system.
 */
@property (nonatomic, readonly) int clickCount;

/*!
 @brief An enum that represents which mouse button is triggering the mouse event.
 @details This property is carried over from the native system.
 */
@property (nonatomic, readonly) RIMouseButton button;

/*!
 @brief Get the previous location of a mouse event in a specific view.
 @details This method projects the previous mouse location onto the view's interactionPlane and returns the result in the view's local coordinate space.
 
 The return point is a 3D vector that exists on the interaction plane. If the default interaction plane is used, the z coordinate will always be 0.
 @param view The view to project the previous mouse location onto.
 */
- (RIPoint3F)previousLocationInView:(RIView *)view;

@end
