//
//  FMParameter.h
//  Former
//
//  Created by Max Weisel on 6/19/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMRParameter.h>

@class FMNode;

@interface FMParameter : NSObject <NSCoding>

- (instancetype)initWithNode:(FMNode *)node;

//// Hierarchy
- (void)hierarchyWillChange;
- (void)hierarchyDidChange;

//// Key
@property (nonatomic, readonly) NSString *uniqueKey;
@property (nonatomic, readonly, weak) FMNode *node;

//// Metadata
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL hidden;

//// Patch Parameter
// This should only be used by FMNode!!!
@property (nonatomic) BOOL valueInitialized;
@property (nonatomic) FMRParameter *patchParameter;

// Used by subclasses to tell the patch to update.
- (void)valueDidChange;
extern NSString *const FMParameterValueDidChangeNotification;

@end
