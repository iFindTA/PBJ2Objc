//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/AbstractMap.java
//

#ifndef _JavaUtilAbstractMap_H_
#define _JavaUtilAbstractMap_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/Map.h"

@protocol JavaUtilCollection;
@protocol JavaUtilSet;

@interface JavaUtilAbstractMap : NSObject < JavaUtilMap > {
 @public
  id<JavaUtilSet> keySet_;
  id<JavaUtilCollection> valuesCollection_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id)object;

- (id)getWithId:(id)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)key;

- (jint)size;

- (NSString *)description;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)init;

- (id)clone;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractMap)

J2OBJC_FIELD_SETTER(JavaUtilAbstractMap, keySet_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(JavaUtilAbstractMap, valuesCollection_, id<JavaUtilCollection>)

FOUNDATION_EXPORT void JavaUtilAbstractMap_init(JavaUtilAbstractMap *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractMap)

@interface JavaUtilAbstractMap_SimpleImmutableEntry : NSObject < JavaUtilMap_Entry, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)copyFrom;

- (instancetype)initWithId:(id)theKey
                    withId:(id)theValue;

- (jboolean)isEqual:(id)object;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id)object;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractMap_SimpleImmutableEntry)

FOUNDATION_EXPORT void JavaUtilAbstractMap_SimpleImmutableEntry_initWithId_withId_(JavaUtilAbstractMap_SimpleImmutableEntry *self, id theKey, id theValue);

FOUNDATION_EXPORT JavaUtilAbstractMap_SimpleImmutableEntry *new_JavaUtilAbstractMap_SimpleImmutableEntry_initWithId_withId_(id theKey, id theValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilAbstractMap_SimpleImmutableEntry_initWithJavaUtilMap_Entry_(JavaUtilAbstractMap_SimpleImmutableEntry *self, id<JavaUtilMap_Entry> copyFrom);

FOUNDATION_EXPORT JavaUtilAbstractMap_SimpleImmutableEntry *new_JavaUtilAbstractMap_SimpleImmutableEntry_initWithJavaUtilMap_Entry_(id<JavaUtilMap_Entry> copyFrom) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractMap_SimpleImmutableEntry)

@interface JavaUtilAbstractMap_SimpleEntry : NSObject < JavaUtilMap_Entry, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)copyFrom;

- (instancetype)initWithId:(id)theKey
                    withId:(id)theValue;

- (jboolean)isEqual:(id)object;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id)object;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractMap_SimpleEntry)

FOUNDATION_EXPORT void JavaUtilAbstractMap_SimpleEntry_initWithId_withId_(JavaUtilAbstractMap_SimpleEntry *self, id theKey, id theValue);

FOUNDATION_EXPORT JavaUtilAbstractMap_SimpleEntry *new_JavaUtilAbstractMap_SimpleEntry_initWithId_withId_(id theKey, id theValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilAbstractMap_SimpleEntry_initWithJavaUtilMap_Entry_(JavaUtilAbstractMap_SimpleEntry *self, id<JavaUtilMap_Entry> copyFrom);

FOUNDATION_EXPORT JavaUtilAbstractMap_SimpleEntry *new_JavaUtilAbstractMap_SimpleEntry_initWithJavaUtilMap_Entry_(id<JavaUtilMap_Entry> copyFrom) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractMap_SimpleEntry)

#endif // _JavaUtilAbstractMap_H_
