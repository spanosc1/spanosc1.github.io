//
//  DetailViewController.h
//  ref
//
//  Created by Christopher Spanos on 2/18/14.
//  Copyright (c) 2014 Christopher Spanos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
