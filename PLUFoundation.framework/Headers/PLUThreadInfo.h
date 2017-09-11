//
//  PLUThreadInfo.h
//  TGA
//
//  Created by sunshaobing on 16/6/3.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PLUThreadInfo : NSObject

@property (nonatomic, assign) uint64_t threadId;
@property (nonatomic, assign) CGFloat cpuUsage;
@property (nonatomic, strong) NSString *threadName;

@end
