//
//  Item.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-25.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BGItem <NSObject>

@property (nonatomic) NSString *displayTitle;
@property (nonatomic) NSString *displayDescription;

@end
