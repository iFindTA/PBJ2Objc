//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/escape/ArrayBasedEscaperMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonEscapeArrayBasedEscaperMap_INCLUDE_ALL")
#if ComGoogleCommonEscapeArrayBasedEscaperMap_RESTRICT
#define ComGoogleCommonEscapeArrayBasedEscaperMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonEscapeArrayBasedEscaperMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEscapeArrayBasedEscaperMap_RESTRICT

#if !defined (_ComGoogleCommonEscapeArrayBasedEscaperMap_) && (ComGoogleCommonEscapeArrayBasedEscaperMap_INCLUDE_ALL || ComGoogleCommonEscapeArrayBasedEscaperMap_INCLUDE)
#define _ComGoogleCommonEscapeArrayBasedEscaperMap_

@class IOSObjectArray;
@protocol JavaUtilMap;

@interface ComGoogleCommonEscapeArrayBasedEscaperMap : NSObject

#pragma mark Public

+ (ComGoogleCommonEscapeArrayBasedEscaperMap *)createWithJavaUtilMap:(id<JavaUtilMap>)replacements;

#pragma mark Package-Private

+ (IOSObjectArray *)createReplacementArrayWithJavaUtilMap:(id<JavaUtilMap>)map;

- (IOSObjectArray *)getReplacementArray;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonEscapeArrayBasedEscaperMap)

FOUNDATION_EXPORT ComGoogleCommonEscapeArrayBasedEscaperMap *ComGoogleCommonEscapeArrayBasedEscaperMap_createWithJavaUtilMap_(id<JavaUtilMap> replacements);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonEscapeArrayBasedEscaperMap_createReplacementArrayWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeArrayBasedEscaperMap)

#endif

#pragma pop_macro("ComGoogleCommonEscapeArrayBasedEscaperMap_INCLUDE_ALL")
