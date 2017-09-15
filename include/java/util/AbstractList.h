//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractList.java
//

#ifndef _JavaUtilAbstractList_H_
#define _JavaUtilAbstractList_H_

#include "J2ObjC_header.h"
#include "java/util/AbstractCollection.h"
#include "java/util/List.h"

@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;

@interface JavaUtilAbstractList : JavaUtilAbstractCollection < JavaUtilList > {
 @public
  jint modCount_;
}

#pragma mark Public

- (jboolean)addWithId:(id)object;

- (void)addWithInt:(jint)location
            withId:(id)object;

- (jboolean)addAllWithInt:(jint)location
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)isEqual:(id)object;

- (id)getWithInt:(jint)location;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)object;

- (id<JavaUtilIterator>)iterator;

- (jint)lastIndexOfWithId:(id)object;

- (id<JavaUtilListIterator>)listIterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)location;

- (id)removeWithInt:(jint)location;

- (id)setWithInt:(jint)location
          withId:(id)object;

- (id<JavaUtilList>)subListWithInt:(jint)start
                           withInt:(jint)end;

#pragma mark Protected

- (instancetype)init;

- (void)removeRangeWithInt:(jint)start
                   withInt:(jint)end;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractList)

FOUNDATION_EXPORT void JavaUtilAbstractList_init(JavaUtilAbstractList *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractList)

#endif // _JavaUtilAbstractList_H_
