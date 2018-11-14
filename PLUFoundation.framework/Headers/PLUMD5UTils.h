//
//  PLUMD5UTils.h
//  longzhu
//
//  Created by plu on 17/5/24.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>

@interface PLUMD5UTils : NSObject
//计算NSData 的MD5值
+(NSString*)getMD5WithData:(NSData*)data;

//计算字符串的MD5值，
+(NSString*)getmd5WithString:(NSString*)string;
 
@end
