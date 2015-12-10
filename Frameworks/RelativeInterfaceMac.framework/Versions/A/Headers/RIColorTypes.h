//
//  RIColorTypes.h
//  RelativeInterface
//
//  Created by Max Weisel on 12/13/13.
//  Copyright (c) 2013 RelativeWave. All rights reserved.
//

typedef struct {
    float red;
    float green;
    float blue;
} RIColorRGB;

typedef struct {
    float red;
    float green;
    float blue;
    float alpha;
} RIColorRGBA;

typedef struct {
    float hue;
    float saturation;
    float brightness;
} RIColorHSB;

typedef struct {
    float hue;
    float saturation;
    float brightness;
    float alpha;
} RIColorHSBA;
