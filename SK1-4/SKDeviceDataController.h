//
//  SKDeviceDataController.h
//  SK1-4
//
//  Created by Administrator on 3/6/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
@class SKDevice;

@interface SKDeviceDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterDeviceList;

-(NSUInteger)countOfList;
-(SKDevice *)objectInMasterDeviceListAtIndex:(NSUInteger)theIndex;
-(void)addDeviceWithInformation:(SKDevice *)information;

@end
