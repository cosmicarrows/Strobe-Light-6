//
//  DetailViewController.h
//  strobeLight6
//
//  Created by Laurence Wingo on 1/17/13.
//  Copyright (c) 2013 Laurence Wingo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
