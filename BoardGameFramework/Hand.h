//
//  Hand.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-20.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Hand : NSObject

@property (nonatomic, readonly) NSMutableArray *hand;

-(id)initWithCardArray: (NSArray *) cardArray;

-(void)addCard: (Card *)card;

-(void)removeCardAtIndex: (NSUInteger)index;

-(void)removeCardIdenticalTo: (Card *)card;

@end
