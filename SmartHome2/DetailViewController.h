//
//  DetailViewController.h
//  SmartHome2
//
//  Created by Amir Sadoughi on 6/15/13.
//  Copyright (c) 2013 Amir Sadoughi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
