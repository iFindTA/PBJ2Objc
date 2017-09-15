//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/SynchronousQueue.java
//

#ifndef _JavaUtilConcurrentSynchronousQueue_H_
#define _JavaUtilConcurrentSynchronousQueue_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractQueue.h"
#include "java/util/concurrent/BlockingQueue.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangThread;
@class JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode;
@class JavaUtilConcurrentSynchronousQueue_TransferStack_SNode;
@class JavaUtilConcurrentTimeUnitEnum;
@class SunMiscUnsafe;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

#define JavaUtilConcurrentSynchronousQueue_spinForTimeoutThreshold 1000LL

@interface JavaUtilConcurrentSynchronousQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithBoolean:(jboolean)fair;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)offerWithId:(id)e;

- (jboolean)offerWithId:(id)o
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)peek;

- (id)poll;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)putWithId:(id)o;

- (jint)remainingCapacity;

- (jboolean)removeWithId:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (id)take;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

+ (jlong)objectFieldOffsetWithSunMiscUnsafe:(SunMiscUnsafe *)UNSAFE
                               withNSString:(NSString *)field
                               withIOSClass:(IOSClass *)klazz;


@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue)

FOUNDATION_EXPORT jint JavaUtilConcurrentSynchronousQueue_NCPUS_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSynchronousQueue, NCPUS_, jint)

FOUNDATION_EXPORT jint JavaUtilConcurrentSynchronousQueue_maxTimedSpins_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSynchronousQueue, maxTimedSpins_, jint)

FOUNDATION_EXPORT jint JavaUtilConcurrentSynchronousQueue_maxUntimedSpins_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSynchronousQueue, maxUntimedSpins_, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSynchronousQueue, spinForTimeoutThreshold, jlong)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_init(JavaUtilConcurrentSynchronousQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue *new_JavaUtilConcurrentSynchronousQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_initWithBoolean_(JavaUtilConcurrentSynchronousQueue *self, jboolean fair);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue *new_JavaUtilConcurrentSynchronousQueue_initWithBoolean_(jboolean fair) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jlong JavaUtilConcurrentSynchronousQueue_objectFieldOffsetWithSunMiscUnsafe_withNSString_withIOSClass_(SunMiscUnsafe *UNSAFE, NSString *field, IOSClass *klazz);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue)

@interface JavaUtilConcurrentSynchronousQueue_Transferer : NSObject

#pragma mark Package-Private

- (instancetype)init;

- (id)transferWithId:(id)e
         withBoolean:(jboolean)timed
            withLong:(jlong)nanos;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_Transferer)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_Transferer_init(JavaUtilConcurrentSynchronousQueue_Transferer *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_Transferer)

#define JavaUtilConcurrentSynchronousQueue_TransferStack_REQUEST 0
#define JavaUtilConcurrentSynchronousQueue_TransferStack_DATA 1
#define JavaUtilConcurrentSynchronousQueue_TransferStack_FULFILLING 2

@interface JavaUtilConcurrentSynchronousQueue_TransferStack : JavaUtilConcurrentSynchronousQueue_Transferer {
 @public
  JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *head_;
}

#pragma mark Package-Private

- (instancetype)init;

- (JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)awaitFulfillWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s
                                                                                                                       withBoolean:(jboolean)timed
                                                                                                                          withLong:(jlong)nanos;

- (jboolean)casHeadWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)h
                   withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)nh;

- (void)cleanWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s;

+ (jboolean)isFulfillingWithInt:(jint)m;

- (jboolean)shouldSpinWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s;

+ (JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)snodeWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s
                                                                                                                     withId:(id)e
                                                                 withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)next
                                                                                                                    withInt:(jint)mode;

- (id)transferWithId:(id)e
         withBoolean:(jboolean)timed
            withLong:(jlong)nanos;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_TransferStack)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack, head_, JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSynchronousQueue_TransferStack, REQUEST, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSynchronousQueue_TransferStack, DATA, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentSynchronousQueue_TransferStack, FULFILLING, jint)

FOUNDATION_EXPORT jboolean JavaUtilConcurrentSynchronousQueue_TransferStack_isFulfillingWithInt_(jint m);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *JavaUtilConcurrentSynchronousQueue_TransferStack_snodeWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode_withId_withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode_withInt_(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *s, id e, JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *next, jint mode);

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_TransferStack_init(JavaUtilConcurrentSynchronousQueue_TransferStack *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferStack *new_JavaUtilConcurrentSynchronousQueue_TransferStack_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_TransferStack)

@interface JavaUtilConcurrentSynchronousQueue_TransferStack_SNode : NSObject {
 @public
  JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *next_;
  JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *match_;
  JavaLangThread *waiter_;
  id item_;
  jint mode_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)item;

- (jboolean)casNextWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)cmp
                   withJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)val;

- (jboolean)isCancelled;

- (void)tryCancel;

- (jboolean)tryMatchWithJavaUtilConcurrentSynchronousQueue_TransferStack_SNode:(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)s;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode, next_, JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode, match_, JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode, waiter_, JavaLangThread *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode, item_, id)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_TransferStack_SNode_initWithId_(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *self, id item);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferStack_SNode *new_JavaUtilConcurrentSynchronousQueue_TransferStack_SNode_initWithId_(id item) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_TransferStack_SNode)

@interface JavaUtilConcurrentSynchronousQueue_TransferQueue : JavaUtilConcurrentSynchronousQueue_Transferer {
 @public
  JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *head_;
  JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *tail_;
  JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *cleanMe_;
}

#pragma mark Package-Private

- (instancetype)init;

- (void)advanceHeadWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)h
                   withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)nh;

- (void)advanceTailWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)t
                   withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)nt;

- (id)awaitFulfillWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)s
                                                                      withId:(id)e
                                                                 withBoolean:(jboolean)timed
                                                                    withLong:(jlong)nanos;

- (jboolean)casCleanMeWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)cmp
                      withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)val;

- (void)cleanWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)pred
             withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)s;

- (id)transferWithId:(id)e
         withBoolean:(jboolean)timed
            withLong:(jlong)nanos;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_TransferQueue)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue, head_, JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue, tail_, JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue, cleanMe_, JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_TransferQueue_init(JavaUtilConcurrentSynchronousQueue_TransferQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferQueue *new_JavaUtilConcurrentSynchronousQueue_TransferQueue_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_TransferQueue)

@interface JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode : NSObject {
 @public
  JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *next_;
  id item_;
  JavaLangThread *waiter_;
  jboolean isData_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)item
               withBoolean:(jboolean)isData;

- (jboolean)casItemWithId:(id)cmp
                   withId:(id)val;

- (jboolean)casNextWithJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)cmp
                   withJavaUtilConcurrentSynchronousQueue_TransferQueue_QNode:(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)val;

- (jboolean)isCancelled;

- (jboolean)isOffList;

- (void)tryCancelWithId:(id)cmp;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode, next_, JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode, item_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode, waiter_, JavaLangThread *)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode_initWithId_withBoolean_(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *self, id item, jboolean isData);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode *new_JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode_initWithId_withBoolean_(id item, jboolean isData) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_TransferQueue_QNode)

@interface JavaUtilConcurrentSynchronousQueue_WaitQueue : NSObject < JavaIoSerializable >

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_WaitQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_WaitQueue_init(JavaUtilConcurrentSynchronousQueue_WaitQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_WaitQueue *new_JavaUtilConcurrentSynchronousQueue_WaitQueue_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_WaitQueue)

@interface JavaUtilConcurrentSynchronousQueue_LifoWaitQueue : JavaUtilConcurrentSynchronousQueue_WaitQueue

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_LifoWaitQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_LifoWaitQueue_init(JavaUtilConcurrentSynchronousQueue_LifoWaitQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_LifoWaitQueue *new_JavaUtilConcurrentSynchronousQueue_LifoWaitQueue_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_LifoWaitQueue)

@interface JavaUtilConcurrentSynchronousQueue_FifoWaitQueue : JavaUtilConcurrentSynchronousQueue_WaitQueue

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentSynchronousQueue_FifoWaitQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentSynchronousQueue_FifoWaitQueue_init(JavaUtilConcurrentSynchronousQueue_FifoWaitQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue_FifoWaitQueue *new_JavaUtilConcurrentSynchronousQueue_FifoWaitQueue_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentSynchronousQueue_FifoWaitQueue)

#endif // _JavaUtilConcurrentSynchronousQueue_H_
