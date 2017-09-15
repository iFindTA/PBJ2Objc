//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/ForwardingSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingSetMultimap_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingSetMultimap_RESTRICT
#define ComGoogleCommonCollectForwardingSetMultimap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingSetMultimap_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingSetMultimap_) && (ComGoogleCommonCollectForwardingSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectForwardingSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectForwardingSetMultimap_

#define ComGoogleCommonCollectForwardingMultimap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMultimap_INCLUDE 1
#include "com/google/common/collect/ForwardingMultimap.h"

#define ComGoogleCommonCollectSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectSetMultimap_INCLUDE 1
#include "com/google/common/collect/SetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectForwardingSetMultimap : ComGoogleCommonCollectForwardingMultimap < ComGoogleCommonCollectSetMultimap >

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilSet>)entries;

- (id<JavaUtilSet>)getWithId:(id)key;

- (id<JavaUtilSet>)removeAllWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

#pragma mark Protected

- (id<ComGoogleCommonCollectSetMultimap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSetMultimap_init(ComGoogleCommonCollectForwardingSetMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSetMultimap)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingSetMultimap_INCLUDE_ALL")
