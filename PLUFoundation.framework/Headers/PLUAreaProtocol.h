//
//  PLUAreaProtocol.h
//  TGA
//
//  Created by 刘祖荣 on 16/9/23.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PLUAreaProtocol <NSObject>
//省或者市的名字
@property (nonatomic, copy) NSString *name;
//省或者市的code
@property (nonatomic, copy) NSNumber *codeName;

@end
