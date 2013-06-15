//
//  MasterViewController.h
//  SmartHome2
//
//  Created by Amir Sadoughi on 6/15/13.
//  Copyright (c) 2013 Amir Sadoughi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
