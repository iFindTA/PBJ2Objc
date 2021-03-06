//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicStampedReference.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicStampedReference_H_
#define _JavaUtilConcurrentAtomicAtomicStampedReference_H_

#include "J2ObjC_header.h"

@class IOSIntArray;

@interface JavaUtilConcurrentAtomicAtomicStampedReference : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)initialRef
                   withInt:(jint)initialStamp;

- (jboolean)attemptStampWithId:(id)expectedReference
                       withInt:(jint)newStamp;

- (jboolean)compareAndSetWithId:(id)expectedReference
                         withId:(id)newReference
                        withInt:(jint)expectedStamp
                        withInt:(jint)newStamp;

- (id)getWithIntArray:(IOSIntArray *)stampHolder;

- (id)getReference;

- (jint)getStamp;

- (void)setWithId:(id)newReference
          withInt:(jint)newStamp;

- (jboolean)weakCompareAndSetWithId:(id)expectedReference
                             withId:(id)newReference
                            withInt:(jint)expectedStamp
                            withInt:(jint)newStamp;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicStampedReference)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicStampedReference_initWithId_withInt_(JavaUtilConcurrentAtomicAtomicStampedReference *self, id initialRef, jint initialStamp);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicStampedReference *new_JavaUtilConcurrentAtomicAtomicStampedReference_initWithId_withInt_(id initialRef, jint initialStamp) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicStampedReference)

#endif // _JavaUtilConcurrentAtomicAtomicStampedReference_H_
