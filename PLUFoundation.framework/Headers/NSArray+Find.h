//
//  NSArray+Extension.h
//  TGA
//
//  Created by mafengxin on 16/5/30.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NSComparisonResult (^PLUComparator)(id obj);

@interface NSArray (Find)

/**
 * 二分查找一个有序数组中符合某条件的元素
 *
 *  @param compare nonullable
 *
 *  @return 该数组该条件若有重复,随机返回一个 如需返回所有符合该条件数组请自行增加方法
 */
- (id)objInOrderedArrayByCompare:(PLUComparator)compare;
/**
 * 二分查找一个有序数组中符合某条件的元素
 *
 *  @param compare nonullable
 *
 *  @return 该数组该条件若有重复,随机返回一个 如需返回所有符合该条件数组请自行增加方法
 */
- (NSInteger)idxOfOrderedArrayByCompare:(PLUComparator)compare ;
@end
