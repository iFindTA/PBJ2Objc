//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/UncaughtExceptionHandlers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_RESTRICT
#define ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_) && (ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_INCLUDE_ALL || ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_INCLUDE)
#define _ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_

@protocol JavaLangThread_UncaughtExceptionHandler;

@interface ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers : NSObject

#pragma mark Public

+ (id<JavaLangThread_UncaughtExceptionHandler>)systemExit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers)

FOUNDATION_EXPORT id<JavaLangThread_UncaughtExceptionHandler> ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_systemExit();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_) && (ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_INCLUDE_ALL || ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_INCLUDE)
#define _ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_

#define JavaLangThread_RESTRICT 1
#define JavaLangThread_UncaughtExceptionHandler_INCLUDE 1
#include "java/lang/Thread.h"

@class JavaLangRuntime;
@class JavaLangThread;
@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter : NSObject < JavaLangThread_UncaughtExceptionHandler >

#pragma mark Public

- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                      withJavaLangThrowable:(JavaLangThrowable *)e;

#pragma mark Package-Private

- (instancetype)initWithJavaLangRuntime:(JavaLangRuntime *)runtime;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_initWithJavaLangRuntime_(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter *self, JavaLangRuntime *runtime);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter *new_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_initWithJavaLangRuntime_(JavaLangRuntime *runtime) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_INCLUDE_ALL")
