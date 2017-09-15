//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/hash/MessageDigestHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL")
#if ComGoogleCommonHashMessageDigestHashFunction_RESTRICT
#define ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashMessageDigestHashFunction_RESTRICT

#if !defined (_ComGoogleCommonHashMessageDigestHashFunction_) && (ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL || ComGoogleCommonHashMessageDigestHashFunction_INCLUDE)
#define _ComGoogleCommonHashMessageDigestHashFunction_

#define ComGoogleCommonHashAbstractStreamingHashFunction_RESTRICT 1
#define ComGoogleCommonHashAbstractStreamingHashFunction_INCLUDE 1
#include "com/google/common/hash/AbstractStreamingHashFunction.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonHashHasher;

@interface ComGoogleCommonHashMessageDigestHashFunction : ComGoogleCommonHashAbstractStreamingHashFunction < JavaIoSerializable >

#pragma mark Public

- (jint)bits;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)algorithmName
                         withInt:(jint)bytes
                    withNSString:(NSString *)toString;

- (instancetype)initWithNSString:(NSString *)algorithmName
                    withNSString:(NSString *)toString;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashMessageDigestHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withNSString_(ComGoogleCommonHashMessageDigestHashFunction *self, NSString *algorithmName, NSString *toString);

FOUNDATION_EXPORT ComGoogleCommonHashMessageDigestHashFunction *new_ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withNSString_(NSString *algorithmName, NSString *toString) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withInt_withNSString_(ComGoogleCommonHashMessageDigestHashFunction *self, NSString *algorithmName, jint bytes, NSString *toString);

FOUNDATION_EXPORT ComGoogleCommonHashMessageDigestHashFunction *new_ComGoogleCommonHashMessageDigestHashFunction_initWithNSString_withInt_withNSString_(NSString *algorithmName, jint bytes, NSString *toString) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashMessageDigestHashFunction)

#endif

#pragma pop_macro("ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL")