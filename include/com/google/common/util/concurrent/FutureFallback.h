//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/FutureFallback.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentFutureFallback_RESTRICT
#define ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentFutureFallback_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentFutureFallback_) && (ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE_ALL || ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE)
#define _ComGoogleCommonUtilConcurrentFutureFallback_

@class JavaLangThrowable;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol ComGoogleCommonUtilConcurrentFutureFallback < NSObject, JavaObject >

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)createWithJavaLangThrowable:(JavaLangThrowable *)t;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFutureFallback)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFutureFallback)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE_ALL")
