//
//  Card.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-19.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

/*
 * Purpose:
 * - A parent class for any card objects used in a game.
 * Notes:
 * - This class only supports the basics for cards.
 * - A card is not necessarily a specific kind of card like a classic playing
 *   card.
 * - This class represents a model containing information about a card.
 * - Any properties that have 'display' in the title should be used to display
 *   information to the user.
 */

#import <Foundation/Foundation.h>

@interface Card : NSObject

/* The title of the card that would be displayed to the user */
@property (nonatomic) NSString *displayTitle;
/* A description of the card that would be displayed to the user */
@property (nonatomic) NSString *displayDescription;
@property (nonatomic) BOOL shouldBeUnique;
@property (nonatomic) NSUInteger *identifier;

-(id)initWithDisplayTitle: (NSString *)title description:(NSString *) description;

/*
 How would this work?
 
 Different kinds of cards:
 playing cards
 magic cards
 robolines cards
 
 What do they have in common?
 front image
 back image
 display title
 description
 isUnique bool?
 identifier? this should be unique 
 */


@end
