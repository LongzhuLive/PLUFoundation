//
//  PLUBlockExcuteTask.h
//  TGA
//
//  Created by sunshaobing on 16/8/12.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLUBlockExcuteTaskStrategy.h"


typedef void(^PLUBlockExcuteTaskBlock)();

@interface PLUBlockExcuteTask : NSObject

/**
 *  重试策略，为空时只执行一次
 */
@property (nonatomic, strong, nullable) id<PLUBlockExcuteTaskStrategy> blockExcuteTaskStrategy;
@property (nonnull, readonly, nonatomic) NSString *name;

-(nonnull instancetype)initWithName: (nonnull NSString *)name excuteBlock: (nonnull PLUBlockExcuteTaskBlock)excuteBlock cleanBlock: (nullable PLUBlockExcuteTaskBlock)_cleanBlock;

/**
 * 执行Block任务,若已开始会强制stop后开始执行
 * 会将blockExcuteTaskStrategy重置，并执行Block
 */
-(void)startTask;
/**
 *  根据blockExcuteTaskStrategy来确定间隔多久执行下次调用（必须执行过一次excute调用才会生效）
 *
 *  @return YES: 表示会进行下次重试；NO: 表示不会再重试了
 */
-(BOOL)tryExcuteAgainIfNeed;
/**
 * !!取消任务执行，会调用cancelBlock，这时会将excuteBlock和cancelBlock设置为nil
 * !!如果需要解除引用，强制必须要调用
 */
-(void)stopTask;


@end
