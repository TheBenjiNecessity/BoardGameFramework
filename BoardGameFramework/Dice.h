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

@property (nonatomic, readonly) u_int32_t maxValue;
@property (nonatomic, readonly, getter=value) u_int32_t faceValue;


/* Init method that initializes the dice with a maximum value. */
-(id)initWithMaxValue: (u_int32_t)max;

/* Generates and stores a random number between 1 and maxValue (inclusive) and stores it in faceValue. */
-(void)roll;

@end
