//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/ImmutableRangeMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableRangeMap_RESTRICT
#define ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableRangeMap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableRangeMap_) && (ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeMap_

#define ComGoogleCommonCollectRangeMap_RESTRICT 1
#define ComGoogleCommonCollectRangeMap_INCLUDE 1
#include "com/google/common/collect/RangeMap.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableRangeMap_Builder;
@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableRangeMap : NSObject < ComGoogleCommonCollectRangeMap >

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)asMapOfRanges;

+ (ComGoogleCommonCollectImmutableRangeMap_Builder *)builder;

- (void)clear;

+ (ComGoogleCommonCollectImmutableRangeMap *)copyOfWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap OBJC_METHOD_FAMILY_NONE;

- (jboolean)isEqual:(id)o;

- (id)getWithJavaLangComparable:(id<JavaLangComparable>)key;

- (id<JavaUtilMap_Entry>)getEntryWithJavaLangComparable:(id<JavaLangComparable>)key;

- (NSUInteger)hash;

+ (ComGoogleCommonCollectImmutableRangeMap *)of;

+ (ComGoogleCommonCollectImmutableRangeMap *)ofWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                                                        withId:(id)value;

- (void)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                    withId:(id)value;

- (void)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)span;

- (ComGoogleCommonCollectImmutableRangeMap *)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)ranges
                    withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)values;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableRangeMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap *ComGoogleCommonCollectImmutableRangeMap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap *ComGoogleCommonCollectImmutableRangeMap_ofWithComGoogleCommonCollectRange_withId_(ComGoogleCommonCollectRange *range, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap *ComGoogleCommonCollectImmutableRangeMap_copyOfWithComGoogleCommonCollectRangeMap_(id<ComGoogleCommonCollectRangeMap> rangeMap);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap_Builder *ComGoogleCommonCollectImmutableRangeMap_builder();

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableRangeMap_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableRangeMap *self, ComGoogleCommonCollectImmutableList *ranges, ComGoogleCommonCollectImmutableList *values);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap *new_ComGoogleCommonCollectImmutableRangeMap_initWithComGoogleCommonCollectImmutableList_withComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableList *ranges, ComGoogleCommonCollectImmutableList *values) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableRangeMap)

#endif

#if !defined (_ComGoogleCommonCollectImmutableRangeMap_Builder_) && (ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeMap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeMap_Builder_

@class ComGoogleCommonCollectImmutableRangeMap;
@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeMap;

@interface ComGoogleCommonCollectImmutableRangeMap_Builder : NSObject

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableRangeMap *)build;

- (ComGoogleCommonCollectImmutableRangeMap_Builder *)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                                                                 withId:(id)value;

- (ComGoogleCommonCollectImmutableRangeMap_Builder *)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableRangeMap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableRangeMap_Builder_init(ComGoogleCommonCollectImmutableRangeMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap_Builder *new_ComGoogleCommonCollectImmutableRangeMap_Builder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableRangeMap_Builder)

#endif

#pragma pop_macro("ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL")
