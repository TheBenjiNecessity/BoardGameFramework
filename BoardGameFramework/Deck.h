//
//  Deck.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-20.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
{
    NSMutableArray *cards;
    NSDictionary *cardInfoFromJSONFile;
}

-(id)init;

-(id)initWithJSONFile: (NSData *)JSONFile;

-(Card *)draw;

-(BOOL)addCard: (Card *)card;

-(BOOL)isEmpty;

-(void)shuffle;

@end
