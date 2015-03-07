//
//  Card.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-19.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "Card.h"

@implementation Card
@synthesize displayTitle;
@synthesize displayDescription;

-(id)initWithDisplayTitle:(NSString *)title description:(NSString *)description
{
    if (self = [super init])
    {
       displayTitle = title;
       displayDescription = description;
    }
    
    return self;
}

@end
