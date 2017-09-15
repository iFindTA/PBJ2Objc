//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/FakeTimeLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentFakeTimeLimiter_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentFakeTimeLimiter_RESTRICT
#define ComGoogleCommonUtilConcurrentFakeTimeLimiter_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentFakeTimeLimiter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentFakeTimeLimiter_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentFakeTimeLimiter_) && (ComGoogleCommonUtilConcurrentFakeTimeLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentFakeTimeLimiter_INCLUDE)
#define _ComGoogleCommonUtilConcurrentFakeTimeLimiter_

#define ComGoogleCommonUtilConcurrentTimeLimiter_RESTRICT 1
#define ComGoogleCommonUtilConcurrentTimeLimiter_INCLUDE 1
#include "com/google/common/util/concurrent/TimeLimiter.h"

@class IOSClass;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentFakeTimeLimiter : NSObject < ComGoogleCommonUtilConcurrentTimeLimiter >

#pragma mark Public

- (instancetype)init;

- (id)callWithTimeoutWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                           withLong:(jlong)timeoutDuration
                 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)timeoutUnit
                                        withBoolean:(jboolean)amInterruptible;

- (id)newProxyWithId:(id)target
        withIOSClass:(IOSClass *)interfaceType
            withLong:(jlong)timeoutDuration
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)timeoutUnit OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFakeTimeLimiter)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFakeTimeLimiter_init(ComGoogleCommonUtilConcurrentFakeTimeLimiter *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFakeTimeLimiter *new_ComGoogleCommonUtilConcurrentFakeTimeLimiter_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFakeTimeLimiter)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentFakeTimeLimiter_INCLUDE_ALL")
