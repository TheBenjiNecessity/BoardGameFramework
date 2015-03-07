//
//  Hexagon.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-03-01.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "Hexagon.h"

@implementation Hexagon

-(id)init
{
   if (self = [super init])
   {
      isFlat = true;
   }
   
   return self;
}

-(void)setHexagonOrNil: (Hexagon *)hexagon atSide:(Direction)side
{
   NSMutableArray *tempNeighbors = neighbors.mutableCopy;
   
   [tempNeighbors insertObject:hexagon atIndex:side];
   neighbors = [NSArray arrayWithArray:tempNeighbors];
}

-(Hexagon *)hexagonAtSide:(Direction)side
{
   return [neighbors objectAtIndex:side];
}

@end
