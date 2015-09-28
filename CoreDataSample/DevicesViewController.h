//
//  DevicesViewController.h
//  CoreDataSample
//
//  Created by cuelogic on 24/09/15.
//  Copyright (c) 2015 Cuelogic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Device.h"
#import "Detail.h"

@interface DevicesViewController : UITableViewController<NSFetchedResultsControllerDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableViewDevices;

@end
