//
//  DetailViewController.h
//  ListThings
//
//  Created by Derk Smit on 2/4/13.
//  Copyright (c) 2013 Derk Smit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
