//
//  NumberView.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-03-01.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <UIKit/UIKit.h>

/* Represents a view with a number over an image. */
@interface NumberView : UIView
{
   UIImageView *imageView;
   UILabel *numberLabel;
}

-(id)initWithFrame: (CGRect)frame Image:(UIImage *)image number:(int)number;
-(void)setNumber:(int)number;

@end
