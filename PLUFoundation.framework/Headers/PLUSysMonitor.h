//
//  PLUSysMonitor.h
//  TGA
//
//  Created by sunshaobing on 16/6/3.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PLUProcessInfo.h"

@interface PLUSysMonitor : NSObject

+(PLUSysMonitor *)sharedInstance;

/**
 *  获取当前进程CPU占用
 *
 *  @return CPU占用30%，返回30
 */
-(CGFloat)getCurrentProcessCpuUsage;
/**
 *  获取当前进程信息
 *
 *  @return PLUProcessInfo＊
 */
-(PLUProcessInfo *)getCurrentProcessInfo;


@end
