//
//  MasterViewController.h
//  ref
//
//  Created by Christopher Spanos on 2/18/14.
//  Copyright (c) 2014 Christopher Spanos. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
