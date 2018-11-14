//
//  NSDate+PLUMessageDateStr.h
//  TGA
//
//  Created by DarrenYau on 16/8/18.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (PLUMessageDateStr)

+ (NSString *)sinceNowFormatTimeInterval:(NSTimeInterval)timeInterval;
/**
 *  当前服务器时间
 *
 *  @return <#return value description#>
 */
+ (NSTimeInterval)currentServerTime;
/**
 *  持续时间(按服务器时间计算)
 *
 *  @param beginTime <#beginTime description#>
 *
 *  @return <#return value description#>
 */
+ (int)serverDurationFromTime:(double)beginTime;

/**
 *  
 */
+ (NSString *)transformationWithTime:(id)time;

/**
 将格式(比如 1979-8-11 00:00)转化成timeInterval,单位秒

 */
+ (NSTimeInterval) formatTimeIntervalSince1970:(NSString *)format;

+ (void)updateServerTime:(NSTimeInterval)timeSpan;

+ (NSTimeInterval)diffTime;

@end
