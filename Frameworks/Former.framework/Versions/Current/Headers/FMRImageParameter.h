//
//  FMRImageParameter.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMRParameter.h>

#import <Former/FMImageStoreEntry.h>

@interface FMRImageParameter : FMRParameter

@property (nonatomic, copy) FMImageStoreEntry *imageEntry;

@end
