//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/ForwardingNavigableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingNavigableMap_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingNavigableMap_RESTRICT
#define ComGoogleCommonCollectForwardingNavigableMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingNavigableMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingNavigableMap_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingNavigableMap_) && (ComGoogleCommonCollectForwardingNavigableMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingNavigableMap_INCLUDE)
#define _ComGoogleCommonCollectForwardingNavigableMap_

#define ComGoogleCommonCollectForwardingSortedMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingSortedMap_INCLUDE 1
#include "com/google/common/collect/ForwardingSortedMap.h"

#define JavaUtilNavigableMap_RESTRICT 1
#define JavaUtilNavigableMap_INCLUDE 1
#include "java/util/NavigableMap.h"

@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSortedMap;

@interface ComGoogleCommonCollectForwardingNavigableMap : ComGoogleCommonCollectForwardingSortedMap < JavaUtilNavigableMap >

#pragma mark Public

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilNavigableMap>)descendingMap;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id<JavaUtilNavigableMap>)headMapWithId:(id)toKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id<JavaUtilNavigableMap>)subMapWithId:(id)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toKey
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id)fromKey
                              withBoolean:(jboolean)inclusive;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilNavigableMap>)delegate;

- (id<JavaUtilMap_Entry>)standardCeilingEntryWithId:(id)key;

- (id)standardCeilingKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)standardDescendingKeySet;

- (id<JavaUtilMap_Entry>)standardFirstEntry;

- (id)standardFirstKey;

- (id<JavaUtilMap_Entry>)standardFloorEntryWithId:(id)key;

- (id)standardFloorKeyWithId:(id)key;

- (id<JavaUtilSortedMap>)standardHeadMapWithId:(id)toKey;

- (id<JavaUtilMap_Entry>)standardHigherEntryWithId:(id)key;

- (id)standardHigherKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)standardLastEntry;

- (id)standardLastKey;

- (id<JavaUtilMap_Entry>)standardLowerEntryWithId:(id)key;

- (id)standardLowerKeyWithId:(id)key;

- (id<JavaUtilMap_Entry>)standardPollFirstEntry;

- (id<JavaUtilMap_Entry>)standardPollLastEntry;

- (id<JavaUtilSortedMap>)standardSubMapWithId:(id)fromKey
                                       withId:(id)toKey;

- (id<JavaUtilSortedMap>)standardTailMapWithId:(id)fromKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingNavigableMap_init(ComGoogleCommonCollectForwardingNavigableMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableMap)

#endif

#if !defined (_ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap_) && (ComGoogleCommonCollectForwardingNavigableMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap_INCLUDE)
#define _ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_DescendingMap_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectForwardingNavigableMap;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;

@interface ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap : ComGoogleCommonCollectMaps_DescendingMap

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingNavigableMap:(ComGoogleCommonCollectForwardingNavigableMap *)outer$;

#pragma mark Protected

- (id<JavaUtilIterator>)entryIterator;

#pragma mark Package-Private

- (id<JavaUtilNavigableMap>)forward;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap_initWithComGoogleCommonCollectForwardingNavigableMap_(ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap *self, ComGoogleCommonCollectForwardingNavigableMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap *new_ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap_initWithComGoogleCommonCollectForwardingNavigableMap_(ComGoogleCommonCollectForwardingNavigableMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableMap_StandardDescendingMap)

#endif

#if !defined (_ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet_) && (ComGoogleCommonCollectForwardingNavigableMap_INCLUDE_ALL || ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet_INCLUDE)
#define _ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet_

#define ComGoogleCommonCollectMaps_RESTRICT 1
#define ComGoogleCommonCollectMaps_NavigableKeySet_INCLUDE 1
#include "com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectForwardingNavigableMap;

@interface ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet : ComGoogleCommonCollectMaps_NavigableKeySet

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingNavigableMap:(ComGoogleCommonCollectForwardingNavigableMap *)outer$;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet_initWithComGoogleCommonCollectForwardingNavigableMap_(ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet *self, ComGoogleCommonCollectForwardingNavigableMap *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet *new_ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet_initWithComGoogleCommonCollectForwardingNavigableMap_(ComGoogleCommonCollectForwardingNavigableMap *outer$) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableMap_StandardNavigableKeySet)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingNavigableMap_INCLUDE_ALL")
