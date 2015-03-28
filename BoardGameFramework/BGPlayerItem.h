//
//  BGPlayerItem.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-28.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

typedef enum color
{
    WHITE, BLACK, RED, BLUE, YELLOW, GREEN, ORANGE, PURPLE, WILD
} Color;

@protocol BGPlayerItem

@property (nonatomic) Color color;

- (Color)color;

@end
