//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalArgumentException.java
//

#ifndef _JavaLangIllegalArgumentException_H_
#define _JavaLangIllegalArgumentException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface JavaLangIllegalArgumentException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalArgumentException)

FOUNDATION_EXPORT void JavaLangIllegalArgumentException_init(JavaLangIllegalArgumentException *self);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *new_JavaLangIllegalArgumentException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalArgumentException_initWithNSString_(JavaLangIllegalArgumentException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *new_JavaLangIllegalArgumentException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalArgumentException_initWithNSString_withJavaLangThrowable_(JavaLangIllegalArgumentException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *new_JavaLangIllegalArgumentException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalArgumentException_initWithJavaLangThrowable_(JavaLangIllegalArgumentException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *new_JavaLangIllegalArgumentException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalArgumentException)

#endif // _JavaLangIllegalArgumentException_H_
