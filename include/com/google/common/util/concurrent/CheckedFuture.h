//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/CheckedFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentCheckedFuture_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentCheckedFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentCheckedFuture_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentCheckedFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentCheckedFuture_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentCheckedFuture_) && (ComGoogleCommonUtilConcurrentCheckedFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCheckedFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCheckedFuture_

#define ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE 1
#include "com/google/common/util/concurrent/ListenableFuture.h"

@class JavaUtilConcurrentTimeUnitEnum;

@protocol ComGoogleCommonUtilConcurrentCheckedFuture < ComGoogleCommonUtilConcurrentListenableFuture, NSObject, JavaObject >

- (id)checkedGet;

- (id)checkedGetWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCheckedFuture)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCheckedFuture)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentCheckedFuture_INCLUDE_ALL")