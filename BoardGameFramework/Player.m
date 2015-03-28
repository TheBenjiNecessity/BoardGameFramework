//
//  Player.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-19.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "Player.h"

@implementation Player
@synthesize points;//from self
@synthesize color;//from BGPlayerItem
@synthesize displayTitle, displayDescription;

-(id)initWithName:(NSString *)name description:(NSString *)description
{
    if (self = [super init])
    {
        points = 0;
        displayTitle = name;
        displayDescription = description;
    }
    
    return self;
}

// Setters for adding and removing points from player. These setters make it
// impossible to set the points directly.

//Setter for adding points 'p' to 'points'.
//Param: (NSUInteger *)p points to add
-(void)addPoints:(NSUInteger *)p
{
    points += (int)p;
}

//Setter for removing points 'p' from 'points'
//Param: (NSUInteger *)p points to remove
-(void)removePoints:(NSUInteger *)p
{
    points -= (int)p;
}

@end
