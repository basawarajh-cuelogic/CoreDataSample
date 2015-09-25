//
//  Detail.h
//  
//
//  Created by cuelogic on 24/09/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Device;

@interface Detail : NSManagedObject

@property (nonatomic, retain) NSString * detailCompany;
@property (nonatomic, retain) NSString * detailName;
@property (nonatomic, retain) NSString * detailVersion;
@property (nonatomic, retain) Device *device;

@end
