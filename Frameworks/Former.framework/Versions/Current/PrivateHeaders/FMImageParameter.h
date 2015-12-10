//
//  FMImageParameter.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMParameter.h>
#import <Former/FMRImageParameter.h>
#import <Former/FMImageStoreEntry.h>

@interface FMImageParameter : FMParameter

@property (nonatomic, strong) FMImageStoreEntry *imageEntry;

@end
