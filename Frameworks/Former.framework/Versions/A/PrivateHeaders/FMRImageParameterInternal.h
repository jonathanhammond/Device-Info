//
//  FMRImageParameterInternal.h
//  Former
//
//  Created by Max Weisel on 7/1/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import "FMRImageParameter.h"
#import "FMRParameterInternal.h"

#import "FMImageParameter.h"

@interface FMRImageParameter ()

@property (nonatomic, weak) FMImageParameter *parameter;
@property (nonatomic, readonly) FMImageStoreEntry *defaultImageEntry;

@end
