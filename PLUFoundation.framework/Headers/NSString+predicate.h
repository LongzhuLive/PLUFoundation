//
//  NSString+isPhoneNumber.h
//  TGA
//
//  Created by li.chenglong on 16/8/8.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(predicate)

- (BOOL)isPhoneNumber;

- (BOOL)isValidPassword;

- (BOOL)isMobilePhoneNumber;

- (BOOL)isAlphanumeric;

- (BOOL)isNumberAndChart;

- (BOOL)checkPassWord;

//判断全数字：
- (BOOL) deptNumInputShouldNumber;

//判断全字母： 
- (BOOL) deptPassInputShouldAlpha;
@end
