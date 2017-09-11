//
//  PLUProcessInfo.h
//  TGA
//
//  Created by sunshaobing on 16/6/3.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLUThreadInfo.h"

@interface PLUProcessInfo : NSObject

/**
 *  线程列表
 */
@property (nonatomic, strong) NSArray<PLUThreadInfo *> *threadsInfos;

@end

@interface PLUProcessInfo (utils)
/**
 *  进程CPU占用
 */
@property (nonatomic, readonly) CGFloat totalCpuUsage;
/**
 *  最高CPU占用的线程
 */
@property (nonatomic, readonly) PLUThreadInfo *maxCpuUsageThreadInfo;

@end










