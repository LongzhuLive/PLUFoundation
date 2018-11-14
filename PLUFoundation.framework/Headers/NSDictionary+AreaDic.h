//
//  NSDictionary+AreaDic.h
//  TGA
//
//  Created by 刘祖荣 on 16/9/26.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary(AreaDic)

+ (NSDictionary * _Nullable)getProviceDictionary;

+ (NSDictionary * _Nullable)getCityDictionary;

+ (NSDictionary * _Nullable)getCityData:(NSNumber * _Nullable)proviceId;

+ (NSString * _Nullable)getProviceData:(NSNumber * _Nullable)cityId;

+ (NSString * _Nullable)getArea:(NSInteger)cityNumber;

+ (NSString * _Nullable)getCityName:(NSNumber * _Nullable)cityNumber;
@end
