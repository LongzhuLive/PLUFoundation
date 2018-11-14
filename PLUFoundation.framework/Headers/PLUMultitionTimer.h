//
//  PLUMultitionTimer.h
//  TGA
//
//  Created by li.chenglong on 16/8/24.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString *const PLUMultitionTimerRemaindTimeKey;
FOUNDATION_EXTERN NSString *const PLUMultitionTimerRunningKey;

@interface PLUMultitionTimer : NSObject

@property (nonatomic, assign) NSInteger remaindTime;
@property (nonatomic, assign) BOOL running;

+ (instancetype) instanceById:(NSString *)timerId;

- (void)start;
- (void)stop;
-(void)releaseTimer;
@end
