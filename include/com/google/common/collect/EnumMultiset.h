//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/EnumMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectEnumMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectEnumMultiset_RESTRICT
#define ComGoogleCommonCollectEnumMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectEnumMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEnumMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectEnumMultiset_) && (ComGoogleCommonCollectEnumMultiset_INCLUDE_ALL || ComGoogleCommonCollectEnumMultiset_INCLUDE)
#define _ComGoogleCommonCollectEnumMultiset_

#define ComGoogleCommonCollectAbstractMapBasedMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapBasedMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMapBasedMultiset.h"

@class IOSClass;
@protocol JavaLangIterable;

@interface ComGoogleCommonCollectEnumMultiset : ComGoogleCommonCollectAbstractMapBasedMultiset

#pragma mark Public

+ (ComGoogleCommonCollectEnumMultiset *)createWithIOSClass:(IOSClass *)type;

+ (ComGoogleCommonCollectEnumMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (ComGoogleCommonCollectEnumMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements
                                                      withIOSClass:(IOSClass *)type;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectEnumMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumMultiset *ComGoogleCommonCollectEnumMultiset_createWithJavaLangIterable_withIOSClass_(id<JavaLangIterable> elements, IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEnumMultiset)

#endif

#pragma pop_macro("ComGoogleCommonCollectEnumMultiset_INCLUDE_ALL")
