//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/ImmutableSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableSetMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableSetMultimap_RESTRICT
#define ComGoogleCommonCollectImmutableSetMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableSetMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableSetMultimap_) && (ComGoogleCommonCollectImmutableSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectImmutableSetMultimap_

#define ComGoogleCommonCollectImmutableMultimap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultimap_INCLUDE 1
#include "com/google/common/collect/ImmutableMultimap.h"

#define ComGoogleCommonCollectSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectSetMultimap_INCLUDE 1
#include "com/google/common/collect/SetMultimap.h"

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSetMultimap_Builder;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectImmutableSetMultimap : ComGoogleCommonCollectImmutableMultimap < ComGoogleCommonCollectSetMultimap >

#pragma mark Public

+ (ComGoogleCommonCollectImmutableSetMultimap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableSetMultimap *)copyOfWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSet *)entries;

- (ComGoogleCommonCollectImmutableSet *)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSetMultimap *)inverse;

+ (ComGoogleCommonCollectImmutableSetMultimap *)of;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3
                                                  withId:(id)k4
                                                  withId:(id)v4;

+ (ComGoogleCommonCollectImmutableSetMultimap *)ofWithId:(id)k1
                                                  withId:(id)v1
                                                  withId:(id)k2
                                                  withId:(id)v2
                                                  withId:(id)k3
                                                  withId:(id)v3
                                                  withId:(id)k4
                                                  withId:(id)v4
                                                  withId:(id)k5
                                                  withId:(id)v5;

- (ComGoogleCommonCollectImmutableSet *)removeAllWithId:(id)key;

- (ComGoogleCommonCollectImmutableSet *)replaceValuesWithId:(id)key
                                       withJavaLangIterable:(id<JavaLangIterable>)values;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map
                                                   withInt:(jint)size
                                    withJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (id<JavaUtilComparator>)valueComparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSetMultimap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap_Builder *ComGoogleCommonCollectImmutableSetMultimap_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *ComGoogleCommonCollectImmutableSetMultimap_copyOfWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSetMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_withJavaUtilComparator_(ComGoogleCommonCollectImmutableSetMultimap *self, ComGoogleCommonCollectImmutableMap *map, jint size, id<JavaUtilComparator> valueComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap *new_ComGoogleCommonCollectImmutableSetMultimap_initWithComGoogleCommonCollectImmutableMap_withInt_withJavaUtilComparator_(ComGoogleCommonCollectImmutableMap *map, jint size, id<JavaUtilComparator> valueComparator) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSetMultimap)

#endif

#if !defined (_ComGoogleCommonCollectImmutableSetMultimap_Builder_) && (ComGoogleCommonCollectImmutableSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectImmutableSetMultimap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableSetMultimap_Builder_

#define ComGoogleCommonCollectImmutableMultimap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMultimap_Builder_INCLUDE 1
#include "com/google/common/collect/ImmutableMultimap.h"

@class ComGoogleCommonCollectImmutableSetMultimap;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableSetMultimap_Builder : ComGoogleCommonCollectImmutableMultimap_Builder

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableSetMultimap *)build;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)orderKeysByWithJavaUtilComparator:(id<JavaUtilComparator>)keyComparator;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)orderValuesByWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putWithId:(id)key
                                                           withId:(id)value;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithId:(id)key
                                                withJavaLangIterable:(id<JavaLangIterable>)values;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithId:(id)key
                                                   withNSObjectArray:(IOSObjectArray *)values;

- (ComGoogleCommonCollectImmutableSetMultimap_Builder *)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSetMultimap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSetMultimap_Builder_init(ComGoogleCommonCollectImmutableSetMultimap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSetMultimap_Builder *new_ComGoogleCommonCollectImmutableSetMultimap_Builder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSetMultimap_Builder)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableSetMultimap_INCLUDE_ALL")
