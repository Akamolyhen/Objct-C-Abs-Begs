//
//  ViewController.h
//  MyFirstApp
//
//  Created by Thorn on 12/6/17.
//  Copyright © 2017 MyCompany. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet UILabel *firstLabel;
@property (nonatomic, strong) IBOutlet UILabel *secondLabel;
@property (nonatomic, strong) IBOutlet UILabel *thirdLabel;

- (IBAction)showName:(id)sender;


@end

