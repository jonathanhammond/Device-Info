//
//  NSCoder+FMAdditions.h
//  Former
//
//  Created by Chris Osborn on 6/24/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

typedef NS_ENUM(NSUInteger, FMCodingType) {
    FMCodingTypeSaveFile = 0, // This is what will be returned if no codingType is set.
    FMCodingTypeCopyPaste,
    FMCodingTypeExecution,
    FMCodingTypeUndoRedo,
};

@interface NSCoder (FMAdditions)

@property (nonatomic) FMCodingType codingType;

@property (nonatomic) int majorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) int patchVersion;

@end
