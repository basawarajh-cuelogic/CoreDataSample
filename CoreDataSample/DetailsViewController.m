//
//  DetailsViewController.m
//  CoreDataSample
//
//  Created by cuelogic on 24/09/15.
//  Copyright (c) 2015 Cuelogic. All rights reserved.
//

#import "DetailsViewController.h"

@interface DetailsViewController ()

@end

@implementation DetailsViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)cancel:(id)sender {
    
    [super cancelAndDismiss];
}

- (IBAction)done:(id)sender {
    
    self.device.deviceName = _txtfld_Name.text;
    self.device.deviceCompany = _txtfld_Company.text;
    
    [super saveAndDismiss];
}
@end
