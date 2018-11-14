//
//  NSArray+PLUMap.h
//  longzhu
//
//  Created by ziya on 2017/3/25.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef id(^PLUMapBlock)(id orignObj);

typedef BOOL (^PLUFillterBlock)(id orignObj);

@interface NSArray (PLUMap)

- (NSArray *)pluMapWithBlock:(PLUMapBlock)block;

- (NSArray *)pluFillterWithBlock:(PLUFillterBlock)block;

@end
