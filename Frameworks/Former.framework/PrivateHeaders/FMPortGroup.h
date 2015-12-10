//
//  FMPortGroup.h
//  Former
//
//  Created by Max Weisel on 6/18/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Former/FMRPort.h>
#import <Former/FMRPortGroup.h>
@class FMNode;

@interface FMPortGroup : NSObject <NSCoding>

- (instancetype)initWithNode:(FMNode *)node
                    groupKey:(NSString *)groupKey
                 orientation:(FMRPortOrientation)orientation;

//// Key
@property (nonatomic, readonly) NSString *groupKey;

//// Hierarchy
@property (nonatomic, readonly, weak) FMNode *node;
@property (nonatomic, readonly) NSOrderedSet *portKeys;

//// Metadata
@property (nonatomic, readonly) FMRPortOrientation orientation;
@property (nonatomic) BOOL collapsedSidebarGroup;
@property (nonatomic) BOOL collapsedCanvasGroup;
@property (nonatomic) BOOL hidden;
extern NSString *const FMPortGroupCollapsedSidebarGroupDidChangeNotification;
extern NSString *const FMPortGroupCollapsedCanvasGroupDidChangeNotification;
extern NSString *const FMPortGroupHiddenDidChangeNotification;

@end
