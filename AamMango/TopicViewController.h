//
//  TopicViewController.h
//  AamMango
//
//  Created by Sumedha Pramod on 2/12/14.
//  Copyright (c) 2014 Sumedha Pramod. All rights reserved.
//

#import "Deck.h"
#import <UIKit/UIKit.h>
#import "TopicContentViewController.h"

@interface TopicViewController : UIViewController <UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) Deck *deck;

@end
