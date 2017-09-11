//
//  PLUDevice.h
//  TGA
//
//  Created by plu-dev on 16/3/31.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PLUAppleDeviceType) {
    PLUAppleDeviceTypeUnknow,
    PLUAppleDeviceTypeIPhone,
    PLUAppleDeviceTypeIPad,
    PLUAppleDeviceTypeIPod
};

@interface PLUDevice : NSObject

+ (PLUDevice *)currentDevice;
/**
 *  platform: @"iPhone1,1",不会为空
 */
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) PLUAppleDeviceType appleDeviceType;
/**
 *  model: @"iPhone 6S",不会为空
 */
@property (nonatomic, readonly) NSString *model;
/**
 *  chip: @"A1203",不会为空
 */
@property (nonatomic, readonly) NSString *chip;
/**
 *  systemVersion: @"9.3.1",不会为空
 */
@property (nonatomic, readonly) NSString *systemVersion;

/**
 *  判断是否是64位系统
 *
 *  @return 是否？
 */
- (BOOL)is64bit;



@end
