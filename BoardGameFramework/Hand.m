//
//  Hand.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-20.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "Hand.h"

@implementation Hand
@synthesize hand;

-(id)initWithCardArray: (NSArray *)cardArray
{
    if (self = [super init])
    {
        hand = [[NSMutableArray alloc] initWithArray:cardArray];
    }
    
    return self;
}

-(void)addCard:(Card *)card
{
    [hand addObject:card];
}

-(void)removeCardAtIndex: (NSUInteger)index
{
    [hand removeObjectAtIndex:index];
}

-(void)removeCardIdenticalTo:(Card *)card
{
    [hand removeObjectIdenticalTo:card];
}

@end
