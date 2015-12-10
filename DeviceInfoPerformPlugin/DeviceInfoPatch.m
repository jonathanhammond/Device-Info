//
//  DeviceInfoPatch.m
//  DeviceInfo
//
//  Created by Jon Hammond on 10/12/2015.
//  Copyright © 2015 Jon Hammond. All rights reserved.
//

#import "DeviceInfoPatch.h"

@implementation DeviceInfoPatch

- (void)processPatchWithContext:(PMRProcessContext *)context {
    // Start off with a black color.
    RIColorRGBA randomColor = RIColorBlackRGBA;
    
    // Get the value from the on/off input.
    BOOL onOff = _onOffInput.booleanValue;
    
    // If the input is on, create a random color.
    if (onOff)
        randomColor = RIColorMakeRGBA(randomFloat(),
                                      randomFloat(),
                                      randomFloat(),
                                      1.0);
    
    // Store the color in the color output.
    _colorOutput.colorValue = randomColor;
}

float randomFloat() {
    return ((double)arc4random() / 0x100000000);
}

@end
