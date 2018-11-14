//
//  NSString+UploadCover.h
//  longzhu
//
//  Created by JiWuChao on 16/12/9.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (UploadCover)
 
/**
 *  根据照片的路径经过MD5加密 分割 然后添加照片的格式
 *
 *  @param roomId <#roomId description#>
 *  @param style  照片的格式
 *
 *  @return <#return value description#>
 */
- (NSString *)pathCutAndJointWithHeadRoomId:(NSString *)roomId
                                  withStyle:(NSString *)style;
@end
