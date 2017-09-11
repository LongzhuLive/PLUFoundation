//
//  NSDictionary+ToJson.h
//  TGA
//
//  Created by qiuji on 16/3/7.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (JsonUtils)

/**
 *  NSDic转换为JSon字符串
 *
 *  @return JSon字符串
 */
- (NSString *)toJSONString;

/**
 * 反转义以下两种情况
    eg1: @"http:\/\/www.longzhu.com\/yzcm\/m" to @"http://www.longzhu.com/yzcm/m"
    eg2: @"{\"oudid\":\"7fec435c480a7588c81056e91e37e3b34ac86bd1\"}"  to "{'oudid':'7fec435c480a7588c81056e91e37e3b34ac86bd1'}"
 */
- (NSString *)toJSONStringEscape;

@end
