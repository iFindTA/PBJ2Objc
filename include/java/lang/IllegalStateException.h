//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalStateException.java
//

#ifndef _JavaLangIllegalStateException_H_
#define _JavaLangIllegalStateException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface JavaLangIllegalStateException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalStateException)

FOUNDATION_EXPORT void JavaLangIllegalStateException_init(JavaLangIllegalStateException *self);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithNSString_(JavaLangIllegalStateException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithNSString_withJavaLangThrowable_(JavaLangIllegalStateException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithJavaLangThrowable_(JavaLangIllegalStateException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalStateException)

#endif // _JavaLangIllegalStateException_H_
