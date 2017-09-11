//
//  NSArray+PLUDistinctArray.h
//  TGA
//
//  Created by qiuji on 15/11/5.
//  Copyright © 2015年 DarrenYau. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Filter)

/**
 *  数组中元素去重
 *
 *  @param cmptr nonullable
 *
 *  @return 返回去重后的数组，优先第一个出现的元素
 */
- (NSArray *)distinctObjectsUsingComparator:(NSComparator)cmptr;

@end
