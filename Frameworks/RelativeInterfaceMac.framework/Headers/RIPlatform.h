//
//  RIPlatform.h
//  RelativeInterface
//
//  Created by Max Weisel on 1/10/14.
//  Copyright (c) 2014 RelativeWave. All rights reserved.
//

// iOS
#if TARGET_OS_IPHONE

#define RISystemUIFramework UIKit
#define RISystemView UIView
#define RISystemImage UIImage
#define RISystemEvent UIEvent
#define RISystemRenderView UIView

// Mac
#elif TARGET_OS_MAC

#define RISystemUIFramework AppKit
#define RISystemView NSView
#define RISystemImage NSImage
#define RISystemEvent NSEvent
#define RISystemRenderView NSOpenGLView

#endif

#define RIExternalFramework(framework, class) <framework/class>
