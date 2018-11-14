//
//  NSMutableAttributedString+Attributes.h
//  ZLProfessor
//
//  Created by 刘祖荣 on 14-6-26.
//  Copyright (c) 2014年 ZGW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSMutableAttributedString (Attributes)

- (void)addColor:(UIColor *)color substring:(NSString *)substring;
- (void)addBackgroundColor:(UIColor *)color substring:(NSString *)substring;
- (void)addUnderlineForSubstring:(NSString *)substring;
- (void)addStrikeThrough:(int)thickness substring:(NSString *)substring;
- (void)addShadowColor:(UIColor *)color width:(int)width height:(int)height radius:(int)radius substring:(NSString *)substring;
- (void)addFontWithName:(NSString *)fontName size:(int)fontSize substring:(NSString *)substring;
- (void)addFont:(UIFont *)font substring:(NSString *)substring;
- (void)addAlignment:(NSTextAlignment)alignment substring:(NSString *)substring;
- (void)addColorToRussianText:(UIColor *)color;
- (void)addStrokeColor:(UIColor *)color thickness:(int)thickness substring:(NSString *)substring;
- (void)addVerticalGlyph:(BOOL)glyph substring:(NSString *)substring;
- (void)addLineSpacing:(float)LineSpacing substring:(NSString *)substring;
@end

@interface NSString (Russian)

- (BOOL)hasRussianCharacters;
- (BOOL)hasEnglishCharacters;

@end
