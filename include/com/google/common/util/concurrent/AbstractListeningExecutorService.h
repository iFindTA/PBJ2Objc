//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/AbstractListeningExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_RESTRICT
#define ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_) && (ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_

#define JavaUtilConcurrentAbstractExecutorService_RESTRICT 1
#define JavaUtilConcurrentAbstractExecutorService_INCLUDE 1
#include "java/util/concurrent/AbstractExecutorService.h"

#define ComGoogleCommonUtilConcurrentListeningExecutorService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentListeningExecutorService_INCLUDE 1
#include "com/google/common/util/concurrent/ListeningExecutorService.h"

@class ComGoogleCommonUtilConcurrentListenableFutureTask;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentAbstractListeningExecutorService : JavaUtilConcurrentAbstractExecutorService < ComGoogleCommonUtilConcurrentListeningExecutorService >

#pragma mark Public

- (instancetype)init;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                                         withId:(id)result;

#pragma mark Protected

- (ComGoogleCommonUtilConcurrentListenableFutureTask *)newTaskForWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonUtilConcurrentListenableFutureTask *)newTaskForWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                                               withId:(id)value OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_init(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractListeningExecutorService)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentAbstractListeningExecutorService_INCLUDE_ALL")
