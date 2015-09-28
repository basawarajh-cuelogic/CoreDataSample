//
//  DetailsViewController.h
//  CoreDataSample
//
//  Created by cuelogic on 28/09/15.
//  Copyright (c) 2015 Cuelogic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Device.h"
#import "Detail.h"


@interface DetailsViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *lblDeviceName;
@property (weak, nonatomic) IBOutlet UILabel *lblDeviceVersion;
@property (weak, nonatomic) IBOutlet UILabel *lblDeviceCompany;

@property (strong, nonatomic) Device *device;
@property (strong, nonatomic) Detail *detail;


@end
