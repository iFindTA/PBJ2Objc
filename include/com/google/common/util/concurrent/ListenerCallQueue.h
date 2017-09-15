//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/util/concurrent/ListenerCallQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonUtilConcurrentListenerCallQueue_INCLUDE_ALL")
#if ComGoogleCommonUtilConcurrentListenerCallQueue_RESTRICT
#define ComGoogleCommonUtilConcurrentListenerCallQueue_INCLUDE_ALL 0
#else
#define ComGoogleCommonUtilConcurrentListenerCallQueue_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentListenerCallQueue_RESTRICT

#if !defined (_ComGoogleCommonUtilConcurrentListenerCallQueue_) && (ComGoogleCommonUtilConcurrentListenerCallQueue_INCLUDE_ALL || ComGoogleCommonUtilConcurrentListenerCallQueue_INCLUDE)
#define _ComGoogleCommonUtilConcurrentListenerCallQueue_

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"

@class ComGoogleCommonUtilConcurrentListenerCallQueue_Callback;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentListenerCallQueue : NSObject < JavaLangRunnable >

#pragma mark Public

- (void)run;

#pragma mark Package-Private

- (instancetype)initWithId:(id)listener
withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)addWithComGoogleCommonUtilConcurrentListenerCallQueue_Callback:(ComGoogleCommonUtilConcurrentListenerCallQueue_Callback *)callback;

- (void)execute;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentListenerCallQueue)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentListenerCallQueue_initWithId_withJavaUtilConcurrentExecutor_(ComGoogleCommonUtilConcurrentListenerCallQueue *self, id listener, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentListenerCallQueue *new_ComGoogleCommonUtilConcurrentListenerCallQueue_initWithId_withJavaUtilConcurrentExecutor_(id listener, id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListenerCallQueue)

#endif

#if !defined (_ComGoogleCommonUtilConcurrentListenerCallQueue_Callback_) && (ComGoogleCommonUtilConcurrentListenerCallQueue_INCLUDE_ALL || ComGoogleCommonUtilConcurrentListenerCallQueue_Callback_INCLUDE)
#define _ComGoogleCommonUtilConcurrentListenerCallQueue_Callback_

@protocol JavaLangIterable;

@interface ComGoogleCommonUtilConcurrentListenerCallQueue_Callback : NSObject

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)methodCall;

- (void)callWithId:(id)listener;

- (void)enqueueOnWithJavaLangIterable:(id<JavaLangIterable>)queues;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListenerCallQueue_Callback)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentListenerCallQueue_Callback_initWithNSString_(ComGoogleCommonUtilConcurrentListenerCallQueue_Callback *self, NSString *methodCall);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListenerCallQueue_Callback)

#endif

#pragma pop_macro("ComGoogleCommonUtilConcurrentListenerCallQueue_INCLUDE_ALL")
