//
//  RIFunctions.h
//  RelativeInterface
//
//  Created by Max Weisel on 11/25/13.
//  Copyright (c) 2013 RelativeWave. All rights reserved.
//

#import "RIBase.h"

#define RI_STR(x) #x
#define RI_STR_(x) RI_STR(x)
#define RIStringValue(text) @ RI_STR_(text)

#if !defined(COUNT)
#   define COUNT(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x])))))
#endif
