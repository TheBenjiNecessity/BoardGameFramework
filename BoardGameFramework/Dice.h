//
//  Dice.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-20.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

/*
 * Purpose: Represents a dice which can be rolled and a random number 
 *          between 1 and a max value can be gotten.
 */

#import <Foundation/Foundation.h>

@interface Dice : NSObject

@property (nonatomic, readonly) NSUInteger maxValue;
@property (nonatomic, readonly, getter=value) NSUInteger faceValue;

/* Init method that initializes the dice with a maximum value. */
-(id)initWithMaxValue: (NSUInteger)max;

/* Generates and stores a random number between 1 and maxValue (inclusive) and stores it in faceValue. */
-(void)roll;

@end
