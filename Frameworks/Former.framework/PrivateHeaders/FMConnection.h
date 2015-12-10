//
//  FMConnection.h
//  Former
//
//  Created by Max Weisel on 6/9/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FMNode;
@class FMPort;

@interface FMConnection : NSObject <NSCoding>

- (instancetype)initWithOutputPort:(FMPort *)outputPort
                         inputPort:(FMPort *)inputPort
                 displayOutputPort:(FMPort *)displayOutputPort
                  displayInputPort:(FMPort *)displayInputPort;

@property (nonatomic, readonly) NSString *uniqueKey;

// The input and output ports after the connection traverses through all published ports.
@property (nonatomic, readonly, weak) FMPort *outputPort;
@property (nonatomic, readonly, weak) FMPort *inputPort;

// The ports on screen that the connection is wired into.
@property (nonatomic, readonly, weak) FMPort *displayOutputPort;
@property (nonatomic, readonly, weak) FMPort *displayInputPort;

- (void)traverseConnectionParentNode:(FMNode **)parentNode outputKeyPath:(NSArray **)outputPortKeyPath inputKeyPath:(NSArray **)inputPortKeyPath;

@end
