//
//  NSString+Validate.h
//  PLUFoundation
//
//  Created by sunshaobing on 16/8/10.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Validate)
/**
 *  验证手机号是否合法
 *
 *  @param mobile: nullable
 *
 *  @return
 */
- (BOOL)isValidateMobileNumber;
/**
 *  验证身份证号是否合法
 *
 *  @param IDCard: nullable
 *
 *  @return
 */
- (BOOL)isValidateIDCardNumber;
/**
 *  是否包含字符串
 *
 *  @param str 要匹配的字符串
 *
 *  @return BOOL
 */
- (BOOL)isContainsStr:(NSString *)str;

@end
