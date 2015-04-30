//
//  DetailViewController.h
//  Goonrunner
//
//  Created by brett bernstein on 4/30/15.
//  Copyright (c) 2015 brett bernstein. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

