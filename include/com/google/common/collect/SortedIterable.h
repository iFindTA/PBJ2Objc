//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/SortedIterable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectSortedIterable_INCLUDE_ALL")
#if ComGoogleCommonCollectSortedIterable_RESTRICT
#define ComGoogleCommonCollectSortedIterable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSortedIterable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSortedIterable_RESTRICT

#if !defined (_ComGoogleCommonCollectSortedIterable_) && (ComGoogleCommonCollectSortedIterable_INCLUDE_ALL || ComGoogleCommonCollectSortedIterable_INCLUDE)
#define _ComGoogleCommonCollectSortedIterable_

#define JavaLangIterable_RESTRICT 1
#define JavaLangIterable_INCLUDE 1
#include "java/lang/Iterable.h"

@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

@protocol ComGoogleCommonCollectSortedIterable < JavaLangIterable, NSObject, JavaObject >

- (id<JavaUtilComparator>)comparator;

- (id<JavaUtilIterator>)iterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedIterable)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedIterable)

#endif

#pragma pop_macro("ComGoogleCommonCollectSortedIterable_INCLUDE_ALL")
