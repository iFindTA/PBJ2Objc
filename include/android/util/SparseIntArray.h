//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/SparseIntArray.java
//

#ifndef _AndroidUtilSparseIntArray_H_
#define _AndroidUtilSparseIntArray_H_

#include "J2ObjC_header.h"

@interface AndroidUtilSparseIntArray : NSObject < NSCopying >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)initialCapacity;

- (void)appendWithInt:(jint)key
              withInt:(jint)value;

- (void)clear;

- (AndroidUtilSparseIntArray *)clone;

- (void)delete__WithInt:(jint)key;

- (jint)getWithInt:(jint)key;

- (jint)getWithInt:(jint)key
           withInt:(jint)valueIfKeyNotFound;

- (jint)indexOfKeyWithInt:(jint)key;

- (jint)indexOfValueWithInt:(jint)value;

- (jint)keyAtWithInt:(jint)index;

- (void)putWithInt:(jint)key
           withInt:(jint)value;

- (void)removeAtWithInt:(jint)index;

- (jint)size;

- (NSString *)description;

- (jint)valueAtWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilSparseIntArray)

FOUNDATION_EXPORT void AndroidUtilSparseIntArray_init(AndroidUtilSparseIntArray *self);

FOUNDATION_EXPORT AndroidUtilSparseIntArray *new_AndroidUtilSparseIntArray_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidUtilSparseIntArray_initWithInt_(AndroidUtilSparseIntArray *self, jint initialCapacity);

FOUNDATION_EXPORT AndroidUtilSparseIntArray *new_AndroidUtilSparseIntArray_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilSparseIntArray)

#endif // _AndroidUtilSparseIntArray_H_