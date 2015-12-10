//
//  FMRPrimitiveOutputPort.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMRValueOutputPort.h>

/*!
 The FMRPrimitiveOutputPort class represents a port that outputs a primitive type (Boolean, Index, Number, Angle, Color or String). The default implementation will take care of all value conversion at runtime.
 
 FMRPrimitiveOutputPort is made to be used directly when creating an FMRNode subclass.
 */
@interface FMRPrimitiveOutputPort : FMRValueOutputPort

@end
