//
//  Player.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-19.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "Player.h"

@implementation Player
@synthesize color;

-(id)initWithName:(NSString *)name description:(NSString *)description
{
    if (self = [super initWithDisplayTitle:name displayDescription:description])
    {
        points = 0;
    }
    
    return self;
}

-(void)addPoints:(NSUInteger *)p
{
    points += (int)p;
}

-(void)removePoints:(NSUInteger *)p
{
    points -= (int)p;
}

@end
