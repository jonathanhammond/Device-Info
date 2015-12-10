//
//  FMImageStoreInternal.h
//  Former
//
//  Created by Max Weisel on 4/2/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMImageStore.h"

@class FMDocument;

@interface FMImageStore () <FMImageStoreEntryDelegate>

@property (nonatomic, weak) FMDocument *document;

extern NSString *const FMImageStoreAddImageNotification;
extern NSString *const FMImageStoreRemoveImageNotification;

@end
