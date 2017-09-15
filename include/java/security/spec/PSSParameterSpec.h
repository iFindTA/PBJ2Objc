//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/PSSParameterSpec.java
//

#ifndef _JavaSecuritySpecPSSParameterSpec_H_
#define _JavaSecuritySpecPSSParameterSpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/AlgorithmParameterSpec.h"

@interface JavaSecuritySpecPSSParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

- (instancetype)initWithInt:(jint)saltLen;

- (instancetype)initWithNSString:(NSString *)mdName
                    withNSString:(NSString *)mgfName
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)mgfSpec
                         withInt:(jint)saltLen
                         withInt:(jint)trailerField;

- (NSString *)getDigestAlgorithm;

- (NSString *)getMGFAlgorithm;

- (id<JavaSecuritySpecAlgorithmParameterSpec>)getMGFParameters;

- (jint)getSaltLength;

- (jint)getTrailerField;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecPSSParameterSpec)

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *JavaSecuritySpecPSSParameterSpec_DEFAULT_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecPSSParameterSpec, DEFAULT_, JavaSecuritySpecPSSParameterSpec *)

FOUNDATION_EXPORT void JavaSecuritySpecPSSParameterSpec_initWithInt_(JavaSecuritySpecPSSParameterSpec *self, jint saltLen);

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *new_JavaSecuritySpecPSSParameterSpec_initWithInt_(jint saltLen) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecuritySpecPSSParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withInt_withInt_(JavaSecuritySpecPSSParameterSpec *self, NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, jint saltLen, jint trailerField);

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *new_JavaSecuritySpecPSSParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withInt_withInt_(NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, jint saltLen, jint trailerField) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecPSSParameterSpec)

#endif // _JavaSecuritySpecPSSParameterSpec_H_