//
//  Item.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-25.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "Item.h"

@implementation Item
@synthesize displayDescription;
@synthesize displayTitle;


-(id)initWithDisplayTitle:(NSString *)title displayDescription:(NSString *)description
{
    if (self = [super init])
    {
        displayTitle = title;
        displayDescription = description;
    }
    
    return self;
}

@end
