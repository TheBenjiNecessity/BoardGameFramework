//
//  Player.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-19.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Item.h"
#import "BGPlayerItem.h"

@interface Player : NSObject <BGPlayerItem, BGItem>
{
    int points;
}

@property (readonly) int points;

-(id)initWithName:(NSString *)name description:(NSString *)description;
-(void)addPoints: (NSUInteger *)points;
-(void)removePoints: (NSUInteger *)points;

@end
