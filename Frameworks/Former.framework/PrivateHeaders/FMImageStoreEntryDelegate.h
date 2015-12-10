//
//  FMImageStoreEntryDelegate.h
//  Former
//
//  Created by Max Weisel on 7/10/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMImageStoreEntry;

@protocol FMImageStoreEntryDelegate <NSObject>

@required
- (void)imageStoreEntryIsNoLongerReferenced:(FMImageStoreEntry *)imageStoreEntry;

@end
