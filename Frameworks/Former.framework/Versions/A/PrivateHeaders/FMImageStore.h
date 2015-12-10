//
//  FMImageStore.h
//  Former
//
//  Created by Max Weisel on 4/2/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Former/FMImageStoreEntry.h>

@interface FMImageStore : NSObject <NSCoding>

+ (FMImageStoreEntry *)createImageEntry:(NSImage *)image;
- (void)addImageEntry:(FMImageStoreEntry *)imageEntry;
- (void)removeImageEntry:(FMImageStoreEntry *)imageEntry;
- (NSArray *)dataRepresentationsOfAllEntries;

@end
