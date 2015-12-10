//
//  RIColorFunctions.h
//  RelativeInterface
//
//  Created by Max Weisel on 12/13/13.
//  Copyright (c) 2013 RelativeWave. All rights reserved.
//

// Base
#import "RIBase.h"

// Types
#import "RIColorTypes.h"

// Make
RI_INLINE RIColorRGB RIColorMakeRGB(float red, float green, float blue) {
    RIColorRGB color = {.red = red, .green = green, .blue = blue};
    return color;
}

RI_INLINE RIColorRGBA RIColorMakeRGBA(float red, float green, float blue, float alpha) {
    RIColorRGBA color = {.red = red, .green = green, .blue = blue, .alpha = alpha};
    return color;
}

RI_INLINE RIColorRGB RIColorMakeWithHexCodeRGB(int hexCode) {
    return RIColorMakeRGB(((hexCode >> 16) & 0xFF) / 255.0,  // R
                         ((hexCode >> 8)  & 0xFF) / 255.0,  // G
                         (hexCode & 0xFF) / 255.0);         // B
}

RI_INLINE RIColorRGBA RIColorMakeWithHexCodeRGBA(int hexCode, float alpha) {
    return RIColorMakeRGBA(((hexCode >> 16) & 0xFF) / 255.0,  // R
                         ((hexCode >> 8)  & 0xFF) / 255.0,  // G
                         (hexCode & 0xFF) / 255.0,          // B
                         alpha);                            // A
}

RI_INLINE RIColorHSB RIColorMakeHSB(float hue, float saturation, float brightness) {
    RIColorHSB color = {.hue = hue, .saturation = saturation, .brightness = brightness};
    return color;
}

RI_INLINE RIColorHSBA RIColorMakeHSBA(float hue, float saturation, float brightness, float alpha) {
    RIColorHSBA color = {.hue = hue, .saturation = saturation, .brightness = brightness, .alpha = alpha};
    return color;
}

// Compare
RI_INLINE BOOL RIColorIsEqualToColorRGB(RIColorRGB c1, RIColorRGB c2) {
    return (c1.red == c2.red &&
            c1.green == c2.green &&
            c1.blue == c2.blue);
}

RI_INLINE BOOL RIColorIsEqualToColorRGBA(RIColorRGBA c1, RIColorRGBA c2) {
    return (c1.red == c2.red &&
            c1.green == c2.green &&
            c1.blue == c2.blue &&
            c1.alpha == c2.alpha);
}

RI_INLINE BOOL RIColorIsEqualToColorHSB(RIColorHSB c1, RIColorHSB c2) {
    return (c1.hue == c2.hue &&
            c1.saturation == c2.saturation &&
            c1.brightness == c2.brightness);
}

RI_INLINE BOOL RIColorIsEqualToColorHSBA(RIColorHSBA c1, RIColorHSBA c2) {
    return (c1.hue == c2.hue &&
            c1.saturation == c2.saturation &&
            c1.brightness == c2.brightness &&
            c1.alpha == c2.alpha);
}

// Conversion
RI_INLINE RIColorRGB RIColorRGBAToColorRGB(RIColorRGBA color) {
    return RIColorMakeRGB(color.red, color.green, color.blue);
}

RI_INLINE RIColorRGBA RIColorRGBToColorRGBA(RIColorRGB color, float alpha) {
    return RIColorMakeRGBA(color.red, color.green, color.blue, alpha);
}

RI_INLINE RIColorHSB RIColorHSBAToColorHSB(RIColorHSBA color) {
    return RIColorMakeHSB(color.hue, color.saturation, color.brightness);
}

RI_INLINE RIColorHSBA RIColorHSBToColorHSBA(RIColorHSB color, float alpha) {
    return RIColorMakeHSBA(color.hue, color.saturation, color.brightness, alpha);
}

RIColorRGB RIColorHSBToColorRGB(RIColorHSB hsbColor);
RIColorRGBA RIColorHSBAToColorRGBA(RIColorHSBA hsbaColor);
RIColorHSB RIColorRGBToColorHSB(RIColorRGB color);
RIColorHSBA RIColorRGBAToColorHSBA(RIColorRGBA color);
