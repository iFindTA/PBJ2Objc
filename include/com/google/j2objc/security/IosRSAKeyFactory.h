//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosRSAKeyFactory.java
//

#ifndef _ComGoogleJ2objcSecurityIosRSAKeyFactory_H_
#define _ComGoogleJ2objcSecurityIosRSAKeyFactory_H_

#include "J2ObjC_header.h"
#include "java/security/KeyFactorySpi.h"

@class IOSClass;
@protocol JavaSecurityKey;
@protocol JavaSecurityPrivateKey;
@protocol JavaSecurityPublicKey;
@protocol JavaSecuritySpecKeySpec;

@interface ComGoogleJ2objcSecurityIosRSAKeyFactory : JavaSecurityKeyFactorySpi

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (id<JavaSecurityPrivateKey>)engineGeneratePrivateWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

- (id<JavaSecurityPublicKey>)engineGeneratePublicWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

- (id)engineGetKeySpecWithJavaSecurityKey:(id<JavaSecurityKey>)key
                             withIOSClass:(IOSClass *)keySpec;

- (id<JavaSecurityKey>)engineTranslateKeyWithJavaSecurityKey:(id<JavaSecurityKey>)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosRSAKeyFactory)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosRSAKeyFactory_init(ComGoogleJ2objcSecurityIosRSAKeyFactory *self);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosRSAKeyFactory *new_ComGoogleJ2objcSecurityIosRSAKeyFactory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosRSAKeyFactory)

#endif // _ComGoogleJ2objcSecurityIosRSAKeyFactory_H_
