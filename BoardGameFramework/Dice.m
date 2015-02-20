//
//  Dice.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-20.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "Dice.h"

@implementation Dice
@synthesize maxValue;
@synthesize faceValue;

-(id)initWithMaxValue: (u_int32_t)max
{
    if (self = [super init])
    {
        if (max <= 1)
            return nil;
        
        maxValue = max;
        faceValue = 1;
    }
    
    return self;
}

-(void)roll
{
    faceValue = arc4random_uniform(maxValue) + 1;
}

@end
