//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/ForwardingListeningExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_) && (ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_

#define ComGoogleCommonUtilConcurrentForwardingExecutorService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentForwardingExecutorService_INCLUDE 1
#include "com/google/common/util/concurrent/ForwardingExecutorService.h"

#define ComGoogleCommonUtilConcurrentListeningExecutorService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListeningExecutorService_INCLUDE 1
#include "com/google/common/util/concurrent/ListeningExecutorService.h"

@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentForwardingListeningExecutorService : ComGoogleCommonUtilConcurrentForwardingExecutorService < ComGoogleCommonUtilConcurrentListeningExecutorService >

#pragma mark Public

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                                         withId:(id)result;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonUtilConcurrentListeningExecutorService>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingListeningExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_init(ComGoogleCommonUtilConcurrentForwardingListeningExecutorService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingListeningExecutorService)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentForwardingListeningExecutorService_INCLUDE_ALL")
