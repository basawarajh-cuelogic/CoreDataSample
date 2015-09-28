//
//  DetailsViewController.h
//  CoreDataSample
//
//  Created by cuelogic on 24/09/15.
//  Copyright (c) 2015 Cuelogic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#import "Device.h"
#import "Detail.h"

@interface AddDetailsViewController : BaseViewController
@property (weak, nonatomic) IBOutlet UITextField *txtfld_Name;
@property (weak, nonatomic) IBOutlet UITextField *txtfld_Version;
@property (weak, nonatomic) IBOutlet UITextField *txtfld_Company;

@property (strong, nonatomic) Device *device;
@property (strong, nonatomic) Detail *details;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;

@end
