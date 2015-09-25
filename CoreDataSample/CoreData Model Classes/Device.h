//
//  Device.h
//  
//
//  Created by cuelogic on 24/09/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Detail;

@interface Device : NSManagedObject

@property (nonatomic, retain) NSString * deviceName;
@property (nonatomic, retain) NSString * deviceCompany;
@property (nonatomic, retain) NSSet *details;
@end

@interface Device (CoreDataGeneratedAccessors)

- (void)addDetailsObject:(Detail *)value;
- (void)removeDetailsObject:(Detail *)value;
- (void)addDetails:(NSSet *)values;
- (void)removeDetails:(NSSet *)values;

@end
