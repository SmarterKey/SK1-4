//
//  SKDevice.h
//  SK1-4
//
//  Created by Administrator on 3/6/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SKDevice : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *passCode;
@property (nonatomic, strong) NSString *gsmNumber;

-(id)initWithName:(NSString *)name passCode:(NSString *)passCode gsmNumber:(NSString *)gsmNumber;

@end
