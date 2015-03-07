//
//  Hexagon.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-03-01.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <Foundation/Foundation.h>
#define NUMBER_OF_SIDES         6

typedef enum direction {
   TOP = 0,
   TOPRIGHT = 1,
   BOTTOMRIGHT = 2,
   BOTTOM= 3,
   BOTTOMLEFT = 4,
   TOPLEFT = 5
}Direction;

@interface Hexagon : NSObject
{
   BOOL isFlat;//if true, the hexagon has a top side and bottom else if false then the hexagon has a right side and a left side.
   
   NSArray *neighbors;//index: top = 0, topright = 1... there is never more than 6 sides
}

-(id)init;
-(void)setHexagonOrNil: (Hexagon *)hexagon atSide:(Direction)side;
-(Hexagon *)hexagonAtSide: (Direction)side;

@end
