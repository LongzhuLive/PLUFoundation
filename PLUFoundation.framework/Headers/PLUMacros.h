//
//  PLUMacros.h
//  PLUCoreFoundation
//
//  Created by sunshaobing on 16/6/23.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#ifndef PLUMacros_h
#define PLUMacros_h

#define XcodeAppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define PLUAppId [[[NSBundle mainBundle] infoDictionary] objectForKey:@"PLUAppIdString"]
#define PLUPackageId [[[NSBundle mainBundle] infoDictionary] objectForKey:@"PLUPackageIdString"]

#define WeakObj(_obj)    __weak typeof(_obj) _obj##Weak = _obj;
#define StrongObj(_obj)  __strong typeof(_obj) _obj##Strong = _obj;

#define NSStringFromInt(int)            [NSString stringWithFormat:@"%d", int]
#define NSStringFromLong(long)          [NSString stringWithFormat:@"%ld", long]
#define NSStringFromLongLong(long)          [NSString stringWithFormat:@"%lld", long]
#define NSStringFromFloat(float)        [NSString stringWithFormat:@"%f", float]
#define NSStringFromNSInteger(integer)  [NSString stringWithFormat:@"%ld", (long)integer]


#endif /* PLUMacros_h */
