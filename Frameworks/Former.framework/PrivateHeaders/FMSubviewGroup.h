//
//  FMSubviewGroup.h
//  Former
//
//  Created by Max Weisel on 6/18/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/FMGroup.h>

@interface FMSubviewGroup : FMGroup

@property (nonatomic, readonly) NSOrderedSet *subviewNodes;
extern NSString *const FMSubviewGroupSubviewOrderDidChangeNotification;

- (NSUInteger)indexOfSubviewNode:(FMNode *)node;
- (void)moveSubviewNode:(FMNode *)node toIndex:(NSUInteger)index;

@end
