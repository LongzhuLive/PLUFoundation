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
//数字格式转换
+ (NSString *)countFormat:(long long)count;
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
