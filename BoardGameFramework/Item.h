//
//  Item.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-25.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Item : NSObject

/* The title of the card that would be displayed to the user */
@property (nonatomic) NSString *displayTitle;
/* A description of the card that would be displayed to the user */
@property (nonatomic) NSString *displayDescription;

-(id)initWithDisplayTitle: (NSString *)title displayDescription: (NSString *)description;

@end
