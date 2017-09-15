//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/TransformerFactoryConfigurationError.java
//

#ifndef _JavaxXmlTransformTransformerFactoryConfigurationError_H_
#define _JavaxXmlTransformTransformerFactoryConfigurationError_H_

#include "J2ObjC_header.h"
#include "java/lang/Error.h"

@class JavaLangException;

@interface JavaxXmlTransformTransformerFactoryConfigurationError : JavaLangError

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaLangException:(JavaLangException *)e;

- (instancetype)initWithJavaLangException:(JavaLangException *)e
                             withNSString:(NSString *)msg;

- (instancetype)initWithNSString:(NSString *)msg;

- (JavaLangException *)getException;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerFactoryConfigurationError)

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactoryConfigurationError_init(JavaxXmlTransformTransformerFactoryConfigurationError *self);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *new_JavaxXmlTransformTransformerFactoryConfigurationError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactoryConfigurationError_initWithNSString_(JavaxXmlTransformTransformerFactoryConfigurationError *self, NSString *msg);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *new_JavaxXmlTransformTransformerFactoryConfigurationError_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_(JavaxXmlTransformTransformerFactoryConfigurationError *self, JavaLangException *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *new_JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_(JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_withNSString_(JavaxXmlTransformTransformerFactoryConfigurationError *self, JavaLangException *e, NSString *msg);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *new_JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_withNSString_(JavaLangException *e, NSString *msg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerFactoryConfigurationError)

#endif // _JavaxXmlTransformTransformerFactoryConfigurationError_H_
