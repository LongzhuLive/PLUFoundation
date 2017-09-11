//
//  PLUCoreMacros.h
//  PLUCoreFoundation
//
//  Created by sunshaobing on 16/6/23.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#ifndef PLULogger_h
#define PLULogger_h


#ifdef DEBUG
#	define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#	define DLog(...)
#endif




#endif /* PLULogger_h */
