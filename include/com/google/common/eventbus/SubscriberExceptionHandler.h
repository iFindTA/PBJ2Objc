//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/eventbus/SubscriberExceptionHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonEventbusSubscriberExceptionHandler_INCLUDE_ALL")
#if ComGoogleCommonEventbusSubscriberExceptionHandler_RESTRICT
#define ComGoogleCommonEventbusSubscriberExceptionHandler_INCLUDE_ALL 0
#else
#define ComGoogleCommonEventbusSubscriberExceptionHandler_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEventbusSubscriberExceptionHandler_RESTRICT

#if !defined (_ComGoogleCommonEventbusSubscriberExceptionHandler_) && (ComGoogleCommonEventbusSubscriberExceptionHandler_INCLUDE_ALL || ComGoogleCommonEventbusSubscriberExceptionHandler_INCLUDE)
#define _ComGoogleCommonEventbusSubscriberExceptionHandler_

@class ComGoogleCommonEventbusSubscriberExceptionContext;
@class JavaLangThrowable;

@protocol ComGoogleCommonEventbusSubscriberExceptionHandler < NSObject, JavaObject >

- (void)handleExceptionWithJavaLangThrowable:(JavaLangThrowable *)exception
withComGoogleCommonEventbusSubscriberExceptionContext:(ComGoogleCommonEventbusSubscriberExceptionContext *)context;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusSubscriberExceptionHandler)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusSubscriberExceptionHandler)

#endif

#pragma pop_macro("ComGoogleCommonEventbusSubscriberExceptionHandler_INCLUDE_ALL")
