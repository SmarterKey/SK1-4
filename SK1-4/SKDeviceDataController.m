//
//  SKDeviceDataController.m
//  SK1-4
//
//  Created by Administrator on 3/6/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "SKDeviceDataController.h"
#import "SKDevice.h"

@interface SKDeviceDataController ()
-(void)initializeDefaultDataList;
@end

@implementation SKDeviceDataController

-(void)initializeDefaultDataList {
    NSMutableArray *deviceList = [[NSMutableArray alloc] init];
    self.masterDeviceList = deviceList;
    SKDevice *information;
    information =[[SKDevice alloc] initWithName:@"Front Door" passCode:@"123456" gsmNumber:@"07987654321"];
    [self addDeviceWithInformation:information];
}

/*//implement a custom setter for th emaster list property
-(void)setMasterDeviceList:(NSMutableArray *)newList {
    if (_masterDeviceList != newList) {
        _masterDeviceList = [newList mutableCopy];
    }
}
*/
@end
