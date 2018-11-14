/*
 @author: ideawu
 @link: https://github.com/ideawu/Objective-C-RSA
*/

#import <Foundation/Foundation.h>

@interface RSA : NSObject

/**
 *  公钥加密，加密后进行base64编码返回
 *
 *  @param str    要加密的字串
 *  @param pubKey 公钥
 *
 *  @return 加密后进行base64
 */
+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;
/**
 *  公钥加密
 *
 *  @param data
 *  @param pubKey
 *
 *  @return 加密后的NSData
 */
+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;
// return base64 encoded string
// enc with private key NOT working YET!
//+ (NSString *)encryptString:(NSString *)str privateKey:(NSString *)privKey;
// return raw data
//+ (NSData *)encryptData:(NSData *)data privateKey:(NSString *)privKey;

// decrypt base64 encoded string, convert result to string(not base64 encoded)

/**
 *  公钥解密
 *
 *  @param str    base64加密的String
 *  @param pubKey 公钥
 *
 *  @return 原始String
 */
+ (NSString *)decryptString:(NSString *)str publicKey:(NSString *)pubKey;
/**
 *  公钥解密
 *
 *  @param data   加密的data
 *  @param pubKey 公钥
 *
 *  @return 原始NSData
 */
+ (NSData *)decryptData:(NSData *)data publicKey:(NSString *)pubKey;
/**
 *  私钥解密
 *
 *  @param str    base64加密的String
 *  @param privKey 私钥
 *
 *  @return 原始String
 */
+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;
/**
 *  私钥解密
 *
 *  @param str    加密的data
 *  @param privKey 私钥
 *
 *  @return 原始NSData
 */
+ (NSData *)decryptData:(NSData *)data privateKey:(NSString *)privKey;

@end









