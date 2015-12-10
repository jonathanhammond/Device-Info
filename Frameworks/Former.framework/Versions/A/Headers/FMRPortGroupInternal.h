//
//  FMRPortGroupInternal.h
//  Former
//
//  Created by Max Weisel on 6/16/14.
//  Copyright (c) 2014 Relative Wave. All rights reserved.
//

#import <Former/Former.h>

@class FMRPortGroupCollection;

@interface FMRPortGroup ()

- (instancetype)initWithKey:(NSString *)groupKey orientation:(FMRPortOrientation)orientation;

@property (nonatomic, readwrite, weak) FMRPortGroupCollection *portGroupCollection;

@end
