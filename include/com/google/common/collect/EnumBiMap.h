//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/EnumBiMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectEnumBiMap_INCLUDE_ALL")
#if ComGoogleCommonCollectEnumBiMap_RESTRICT
#define ComGoogleCommonCollectEnumBiMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectEnumBiMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEnumBiMap_RESTRICT

#if !defined (_ComGoogleCommonCollectEnumBiMap_) && (ComGoogleCommonCollectEnumBiMap_INCLUDE_ALL || ComGoogleCommonCollectEnumBiMap_INCLUDE)
#define _ComGoogleCommonCollectEnumBiMap_

#define ComGoogleCommonCollectAbstractBiMap_RESTRICT 1
#define ComGoogleCommonCollectAbstractBiMap_INCLUDE 1
#include "com/google/common/collect/AbstractBiMap.h"

@class IOSClass;
@class JavaLangEnum;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectEnumBiMap : ComGoogleCommonCollectAbstractBiMap

#pragma mark Public

+ (ComGoogleCommonCollectEnumBiMap *)createWithIOSClass:(IOSClass *)keyType
                                           withIOSClass:(IOSClass *)valueType;

+ (ComGoogleCommonCollectEnumBiMap *)createWithJavaUtilMap:(id<JavaUtilMap>)map;

- (IOSClass *)keyType;

- (IOSClass *)valueType;

#pragma mark Package-Private

- (id)checkKeyWithId:(JavaLangEnum *)key;

- (id)checkValueWithId:(JavaLangEnum *)value;

+ (IOSClass *)inferKeyTypeWithJavaUtilMap:(id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectEnumBiMap)

FOUNDATION_EXPORT ComGoogleCommonCollectEnumBiMap *ComGoogleCommonCollectEnumBiMap_createWithIOSClass_withIOSClass_(IOSClass *keyType, IOSClass *valueType);

FOUNDATION_EXPORT ComGoogleCommonCollectEnumBiMap *ComGoogleCommonCollectEnumBiMap_createWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT IOSClass *ComGoogleCommonCollectEnumBiMap_inferKeyTypeWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEnumBiMap)

#endif

#pragma pop_macro("ComGoogleCommonCollectEnumBiMap_INCLUDE_ALL")
