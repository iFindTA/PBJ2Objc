//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/TimeLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentTimeLimiter_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentTimeLimiter_RESTRICT
#define ComGoogleCommonUtilConcurrentTimeLimiter_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentTimeLimiter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentTimeLimiter_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentTimeLimiter_) && (ComGoogleCommonUtilConcurrentTimeLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentTimeLimiter_INCLUDE)
#define _ComGoogleCommonUtilConcurrentTimeLimiter_

@class IOSClass;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilConcurrentCallable;

@protocol ComGoogleCommonUtilConcurrentTimeLimiter < NSObject, JavaObject >

- (id)newProxyWithId:(id)target
        withIOSClass:(IOSClass *)interfaceType
            withLong:(jlong)timeoutDuration
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)timeoutUnit OBJC_METHOD_FAMILY_NONE;

- (id)callWithTimeoutWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                           withLong:(jlong)timeoutDuration
                 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)timeoutUnit
                                        withBoolean:(jboolean)interruptible;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentTimeLimiter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentTimeLimiter)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentTimeLimiter_INCLUDE_ALL")
