//
//  NSObject+PLUExchangeMethod.h
//  longzhu
//
//  Created by songnaiyin on 2017/4/28.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (PLUExchangeMethod)

+ (void)exchangeClassMethodWithOrigin:(SEL)originMethod new:(SEL)newMethod;

+ (void)exchangeInstanceMethodWithOrigin:(SEL)originMethod new:(SEL)newMethod;

@end
