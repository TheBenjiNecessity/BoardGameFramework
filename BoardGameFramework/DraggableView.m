//
//  DraggableView.m
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-28.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import "DraggableView.h"

@implementation DraggableView

-(id)init
{
   if (self = [super init])
   {
      self.userInteractionEnabled = NO;
      [self addGestureRecognizer:[[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(cardIsBeingDraggedWithPanGestureRecognizer:)]];
   }
   
   return self;
}

-(void)setCanBeDragged:(BOOL)draggable
{
   self.userInteractionEnabled = draggable;
}

-(void)cardIsBeingDraggedWithPanGestureRecognizer: (UIPanGestureRecognizer *)sender
{
   if (sender.state == UIGestureRecognizerStateBegan)
   {
      [delegate view:self didStartDraggingWithGestureRecognizer:sender];
   }
   
   [delegate view:self isDraggingWithGestureRecognizer:sender];
   //self.center = [sender locationInView:self.superview];

   if (sender.state == UIGestureRecognizerStateEnded)
   {
      [delegate view:self didEndDraggingWithGestureRecognizer:sender];
   }
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
