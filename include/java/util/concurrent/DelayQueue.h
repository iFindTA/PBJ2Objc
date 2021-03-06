//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/DelayQueue.java
//

#ifndef _JavaUtilConcurrentDelayQueue_H_
#define _JavaUtilConcurrentDelayQueue_H_

#include "J2ObjC_header.h"
#include "java/util/AbstractQueue.h"
#include "java/util/concurrent/BlockingQueue.h"

@class IOSObjectArray;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentDelayed;
@protocol JavaUtilIterator;

@interface JavaUtilConcurrentDelayQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)addWithId:(id<JavaUtilConcurrentDelayed>)e;

- (void)clear;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (id<JavaUtilIterator>)iterator;

- (jboolean)offerWithId:(id<JavaUtilConcurrentDelayed>)e;

- (jboolean)offerWithId:(id<JavaUtilConcurrentDelayed>)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)peek;

- (id)poll;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)putWithId:(id<JavaUtilConcurrentDelayed>)e;

- (jint)remainingCapacity;

- (jboolean)removeWithId:(id)o;

- (jint)size;

- (id)take;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

- (void)removeEQWithId:(id)o;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentDelayQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentDelayQueue_init(JavaUtilConcurrentDelayQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentDelayQueue *new_JavaUtilConcurrentDelayQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentDelayQueue_initWithJavaUtilCollection_(JavaUtilConcurrentDelayQueue *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentDelayQueue *new_JavaUtilConcurrentDelayQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentDelayQueue)

#endif // _JavaUtilConcurrentDelayQueue_H_
