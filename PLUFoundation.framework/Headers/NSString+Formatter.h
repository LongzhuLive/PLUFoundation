//
//  NSString+Formatter.h
//  TGA
//
//  Created by qiuji on 16/1/29.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Formatter)

//返回时间字符串
+ (NSString *) stringFromFomate:(NSDate*)date formate:(NSString*)formate;
//时间戳转化为时间字符串
+ (NSString *)stringFromTimeStamp:(NSString *)stamp formate:(NSString *)formate;
//秒数转化为时间格式
+ (NSString *)timeFormatted:(NSString *)totalSeconds;
//时长转换格式
+ (NSString *)timeStringConversion:(int)timeSec;

/** 数字格式转换
 * count<=0时默认显示0，count > 0 && count < 10000 显示全部数字
 * count >= 10000 && count < 1亿 显示x.y万（四舍五入保留小数点后1位）
 * count >= 1亿 显示x.y亿（四舍五入保留小数点后1位）
 * 如果小数点后一位是x.0万／x.0亿则显示x万／x亿
 */
+ (NSString *)countFormat:(long long)count;
/**
 * param: placeholder 当count<=0时默认显示placeholder，如果placeholder为nil或者placeholder为非nil且非NSString类型则显示@“0”
 */
+ (NSString *)countFormat:(long long)count placeholder:(NSString *)placeholder;

//时间转换成时间戳
+ (NSString *)timeToTimestamp:(NSDate *)date;
// 去除空格
+ (NSString *)trimmingWithString:(NSString *)source;
// 如 数字 123456 返回“123,456”
+ (NSString *)stringWithDecimalStyleNumber:(NSNumber *)number;
// 去除5种特殊字符串（\b、\f、\n、\r、\t）
- (NSString *)escapeCharacter4String;

//  秒数 > 123'12''
+ (NSString *)minuteFormatWithSec:(int)timeSec;

@end
