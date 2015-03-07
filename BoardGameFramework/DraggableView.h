//
//  DraggableView.h
//  BoardGameFramework
//
//  Created by Benjamin Wishart on 2015-02-28.
//  Copyright (c) 2015 Benjamin Wishart. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DraggableView;
@protocol DraggableViewDelegate <NSObject>

-(void)view: (UIView *)view didStartDraggingWithGestureRecognizer: (UIPanGestureRecognizer *)recognizer;

-(void)view: (UIView *)view didEndDraggingWithGestureRecognizer: (UIPanGestureRecognizer *)recognizer;

-(void)view: (UIView *)view isDraggingWithGestureRecognizer:(UIPanGestureRecognizer *)recognizer;

@end

@interface DraggableView : UIView
{
   id <DraggableViewDelegate> delegate;
   CGPoint previousPanningPoint;
}

-(id)init;
-(void)setCanBeDragged:(BOOL)draggable;
-(void)cardIsBeingDraggedWithPanGestureRecognizer: (UIPanGestureRecognizer *)sender;

@end
