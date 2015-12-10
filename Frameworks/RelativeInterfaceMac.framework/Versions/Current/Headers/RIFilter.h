//
//  RIFilter.h
//  RelativeInterface
//
//  Created by Max Weisel on 5/6/14.
//  Copyright (c) 2014 RelativeWave. All rights reserved.
//

#import <Foundation/Foundation.h>

// Shader
#import "RIShader.h"
#import "RIFilterShader.h"

// Image
@class RIImage;

@interface RIFilter : NSObject

- (int)numberOfPasses;
- (RIShader<RIFilterShader> *)shaderForRenderPass:(int)pass;
- (void)configureShader:(RIShader<RIFilterShader> *)shader renderPass:(int)pass image:(RIImage *)image;

@end
