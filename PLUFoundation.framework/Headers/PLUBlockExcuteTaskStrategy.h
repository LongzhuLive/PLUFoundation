//
//  PLUBlockExcuteTaskStrategy.h
//  TGA
//
//  Created by sunshaobing on 16/8/12.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PLUBlockExcuteTaskStrategy <NSObject>

//重置策略
- (void)reset;
/**
 *  下次调用执行所需间隔的时间
 *
 *  @return <0表示没有下次了
 */
- (NSTimeInterval)nextTaskExcuteIntervalFromNow;

@end


