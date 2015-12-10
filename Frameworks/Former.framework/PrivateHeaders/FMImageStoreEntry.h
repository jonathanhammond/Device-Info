//
//  FMImageStoreEntry.h
//  Former
//
//  Created by Max Weisel on 7/10/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FMImageStoreEntryDelegate.h"

@interface FMImageStoreEntry : NSObject <NSCoding>

@property (nonatomic, readonly) NSImage *image;
@property (nonatomic, readonly) NSString *key;

- (instancetype)initWithImage:(NSImage *)image key:(NSString *)key;

@end
