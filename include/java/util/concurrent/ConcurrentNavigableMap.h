//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ConcurrentNavigableMap.java
//

#ifndef _JavaUtilConcurrentConcurrentNavigableMap_H_
#define _JavaUtilConcurrentConcurrentNavigableMap_H_

#include "J2ObjC_header.h"
#include "java/util/NavigableMap.h"
#include "java/util/concurrent/ConcurrentMap.h"

@protocol JavaUtilNavigableSet;

@protocol JavaUtilConcurrentConcurrentNavigableMap < JavaUtilConcurrentConcurrentMap, JavaUtilNavigableMap, NSObject, JavaObject >

- (id<JavaUtilConcurrentConcurrentNavigableMap>)subMapWithId:(id)fromKey
                                                 withBoolean:(jboolean)fromInclusive
                                                      withId:(id)toKey
                                                 withBoolean:(jboolean)toInclusive;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)headMapWithId:(id)toKey
                                                  withBoolean:(jboolean)inclusive;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)tailMapWithId:(id)fromKey
                                                  withBoolean:(jboolean)inclusive;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)subMapWithId:(id)fromKey
                                                      withId:(id)toKey;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)headMapWithId:(id)toKey;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)tailMapWithId:(id)fromKey;

- (id<JavaUtilConcurrentConcurrentNavigableMap>)descendingMap;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilNavigableSet>)keySet;

- (id<JavaUtilNavigableSet>)descendingKeySet;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentNavigableMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentNavigableMap)

#endif // _JavaUtilConcurrentConcurrentNavigableMap_H_
