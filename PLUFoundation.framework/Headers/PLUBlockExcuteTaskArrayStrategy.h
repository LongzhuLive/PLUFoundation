//
//  PLUBlockExcuteTaskArrayStrategy.h
//  TGA
//
//  Created by sunshaobing on 16/8/12.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLUBlockExcuteTaskStrategy.h"

/**
 *  请求策略，间隔自定义秒
 */
@interface PLUBlockExcuteTaskArrayStrategy : NSObject <PLUBlockExcuteTaskStrategy>

/**
 *  根据最大执行次数和间隔来进行执行策略
 *
 *  @param maxExcuteCount 最大执行次数 0~NSUIntegerMax
 *  @param interval       间隔列表，当前重试间隔根据列表获取，获取不到则按照上－个重试间隔来
 *
 *  @return PLUBlockExcuteTaskArrayStrategy
 */
+(PLUBlockExcuteTaskArrayStrategy *)arrayStrategyWithMaxExcuteCount: (NSUInteger)maxExcuteCount intervals:(NSNumber *)interval, ...;
/**
 *  根据间隔来进行执行策略（默认最大执行次数＝间隔列表.count）
 *
 *  @param interval 间隔列表
 *
 *  @return PLUBlockExcuteTaskArrayStrategy
 */
+(PLUBlockExcuteTaskArrayStrategy *)arrayStrategyWithIntervals: (NSNumber *)interval, ...;

@end
