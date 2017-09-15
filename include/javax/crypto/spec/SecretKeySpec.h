//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/crypto/spec/SecretKeySpec.java
//

#ifndef _JavaxCryptoSpecSecretKeySpec_H_
#define _JavaxCryptoSpecSecretKeySpec_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/security/spec/KeySpec.h"
#include "javax/crypto/SecretKey.h"

@class IOSByteArray;

@interface JavaxCryptoSpecSecretKeySpec : NSObject < JavaxCryptoSecretKey, JavaSecuritySpecKeySpec, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)key
                          withInt:(jint)offset
                          withInt:(jint)len
                     withNSString:(NSString *)algorithm;

- (instancetype)initWithByteArray:(IOSByteArray *)key
                     withNSString:(NSString *)algorithm;

- (jboolean)isEqual:(id)obj;

- (NSString *)getAlgorithm;

- (IOSByteArray *)getEncoded;

- (NSString *)getFormat;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecSecretKeySpec)

FOUNDATION_EXPORT void JavaxCryptoSpecSecretKeySpec_initWithByteArray_withNSString_(JavaxCryptoSpecSecretKeySpec *self, IOSByteArray *key, NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoSpecSecretKeySpec *new_JavaxCryptoSpecSecretKeySpec_initWithByteArray_withNSString_(IOSByteArray *key, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxCryptoSpecSecretKeySpec_initWithByteArray_withInt_withInt_withNSString_(JavaxCryptoSpecSecretKeySpec *self, IOSByteArray *key, jint offset, jint len, NSString *algorithm);

FOUNDATION_EXPORT JavaxCryptoSpecSecretKeySpec *new_JavaxCryptoSpecSecretKeySpec_initWithByteArray_withInt_withInt_withNSString_(IOSByteArray *key, jint offset, jint len, NSString *algorithm) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecSecretKeySpec)

#endif // _JavaxCryptoSpecSecretKeySpec_H_