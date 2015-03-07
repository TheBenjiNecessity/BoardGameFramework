//
//  NumberView.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-03-01.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "NumberView.h"

@implementation NumberView

-(id)initWithFrame: (CGRect)frame Image:(UIImage *)image number:(int)number
{
   if (self = [super init])
   {
      imageView = [[UIImageView alloc] initWithFrame:frame];
      [imageView setImage:image];
      
      numberLabel = [[UILabel alloc] initWithFrame:frame];
      [numberLabel setBackgroundColor:[UIColor clearColor]];
      [numberLabel setTextAlignment:NSTextAlignmentCenter];
      [numberLabel setText:[NSString stringWithFormat:@"%d", number]];
   }
   return self;
}


-(void)setNumber:(int)number
{
   [numberLabel setText:[NSString stringWithFormat:@"%d", number]];
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
