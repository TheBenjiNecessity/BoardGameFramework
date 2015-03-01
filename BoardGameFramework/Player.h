//
//  Player.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-19.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Item.h"

enum color
{
    WHITE, BLACK, RED, BLUE, YELLOW, GREEN, ORANGE, PURPLE
};

@interface Player : Item
{
    int points;
    enum color color;
}

@property (readonly) int points;

-(id)initWithDisplayTitle:(NSString *)title displayDescription:(NSString *)description;
-(void)addPoints: (NSUInteger *)points;
-(void)removePoints: (NSUInteger *)points;

@end
