//
//  CardView.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-20.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CardView : UIView
{
    UIImage *cardFront;
    UIImageView *cardImageView;
}

+(UIImage *)cardBackImage;

//-(void)setCardTo

@end
