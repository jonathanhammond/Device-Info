//
//  FMRViewNode.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/Former.h>

/*!
 The FMRViewNode class represents a view patch in the Form editor on the Mac.
 
 When creating a custom view patch in Form, you should always subclass this node class. In addition to performing the same responsibilities as a normal FMRNode, Form recognizes this patch and allows users to add subviews to it.
 */

@interface FMRViewNode : FMRNode

@end
