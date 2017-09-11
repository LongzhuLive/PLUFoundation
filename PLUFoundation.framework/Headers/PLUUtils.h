//
//  PLUUtils.h
//  PLUCoreFoundation
//
//  Created by sunshaobing on 16/6/27.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLUDevice.h"

@interface PLUUtils : NSObject

#pragma mark - 判断类型元素构成
/**
 *  判断是否为无效字符串
 *  为空的范围：nil,NULL,NSNull,Not NSString Class,@"(null)",字符串去掉空格后长度为0
 *
 *  @param string: nullable
 *
 *  @return BOOL
 */
+ (BOOL)isBlankString:(NSString *)string;
/**
 *  判断是否为空数组
 *  为空的范围：nil,NULL,NSNull,Not NSArray Class,length=0
 *
 *  @param array: nullable
 *
 *  @return BOOL
 */
+ (BOOL)isBlankArray:(NSArray *)array;
/**
 *  判断是否为空字典
 *  为空的范围：nil,NULL,NSNull,Not NSDictionary Class,keys.length=0
 *
 *  @param dic: nullable
 *
 *  @return
 */
+ (BOOL)isBlankDic:(NSDictionary *)dic;
/**
 *  判断是否为空字符串
 *  为空的范围：nil,NULL,NSNull,Not NSString Class,@"(null)"
 *
 *  @param string: nullable
 *
 *  @return
 */
+ (BOOL)isNilString:(NSString *)string;
/**
 *  判断是否纯数字组成
 *  NO的范围：nil,含有字母
 *
 *  @param source: nullable
 *
 *  @return
 */
+(BOOL)isNumberWithString:(NSString *)source;


#pragma mark - 兼容性类型替换

/**
 *  将空值或者NSNull 替换为@""(默认)或指定类型 其他直接返回
 *
 *  @param obj: nullable
 *
 *  @return
 */
+ (id)replaceNSNull:(id) obj;
+ (id)replaceNSNull:(id)obj withType:(Class) classType;

#pragma mark - 唯一性ID

/**
 *  获取此设备上app的唯一id
 *
 *  @return NSString
 */
+ (NSString *)getUniqueAppUId;
/**
 *  生成一个uuid
 *
 *  @return
 */
+ (NSString*)createUUID;

#pragma mark - 网络相关
/**
 *  判断设备是否开启了HTTP代理
 *
 *  @return
 */
+(BOOL)isHttpProxyEnabled;
/**
 *  获取网络状态
 *  @"0":无网模式;@"2G";@"3G";@"4G";@"WIFI";@"other";
 *  @return
 */
+(NSString *)getNetWorkStates;


#pragma mark - 文件相关
/**
 *  根据bundle获取文件路径
 *
 *  @param boundleName: nonullable 如test.bundle，只要传入@"test"
 *  @param fileName: nonullable    example.jpg
 *
 *  @return filePath,不会为空
 */
+(NSString *)filePathInBundle: (NSString *)boundleName fileName: (NSString *)fileName;









@end
