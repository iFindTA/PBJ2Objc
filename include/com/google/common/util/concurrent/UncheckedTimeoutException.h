//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/UncheckedTimeoutException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentUncheckedTimeoutException_RESTRICT
#define ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentUncheckedTimeoutException_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_) && (ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE_ALL || ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE)
#define _ComGoogleCommonUtilConcurrentUncheckedTimeoutException_

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentUncheckedTimeoutException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUncheckedTimeoutException)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_init(ComGoogleCommonUtilConcurrentUncheckedTimeoutException *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *new_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_(ComGoogleCommonUtilConcurrentUncheckedTimeoutException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *new_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithJavaLangThrowable_(ComGoogleCommonUtilConcurrentUncheckedTimeoutException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *new_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_withJavaLangThrowable_(ComGoogleCommonUtilConcurrentUncheckedTimeoutException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncheckedTimeoutException *new_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncheckedTimeoutException)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE_ALL")
