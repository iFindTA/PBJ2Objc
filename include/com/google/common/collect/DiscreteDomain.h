//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/DiscreteDomain.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL")
#if ComGoogleCommonCollectDiscreteDomain_RESTRICT
#define ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectDiscreteDomain_RESTRICT

#if !defined (_ComGoogleCommonCollectDiscreteDomain_) && (ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL || ComGoogleCommonCollectDiscreteDomain_INCLUDE)
#define _ComGoogleCommonCollectDiscreteDomain_

@protocol JavaLangComparable;

@interface ComGoogleCommonCollectDiscreteDomain : NSObject

#pragma mark Public

+ (ComGoogleCommonCollectDiscreteDomain *)bigIntegers;

- (jlong)distanceWithJavaLangComparable:(id<JavaLangComparable>)start
                 withJavaLangComparable:(id<JavaLangComparable>)end;

+ (ComGoogleCommonCollectDiscreteDomain *)integers;

+ (ComGoogleCommonCollectDiscreteDomain *)longs;

- (id)maxValue;

- (id)minValue;

- (id)nextWithJavaLangComparable:(id<JavaLangComparable>)value;

- (id)previousWithJavaLangComparable:(id<JavaLangComparable>)value;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDiscreteDomain)

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_integers();

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_longs();

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_bigIntegers();

FOUNDATION_EXPORT void ComGoogleCommonCollectDiscreteDomain_init(ComGoogleCommonCollectDiscreteDomain *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDiscreteDomain)

#endif

#pragma pop_macro("ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL")
