//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/hash/Murmur3_32HashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL")
#if ComGoogleCommonHashMurmur3_32HashFunction_RESTRICT
#define ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashMurmur3_32HashFunction_RESTRICT

#if !defined (_ComGoogleCommonHashMurmur3_32HashFunction_) && (ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL || ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE)
#define _ComGoogleCommonHashMurmur3_32HashFunction_

#define ComGoogleCommonHashAbstractStreamingHashFunction_RESTRICT 1
#define ComGoogleCommonHashAbstractStreamingHashFunction_INCLUDE 1
#include "com/google/common/hash/AbstractStreamingHashFunction.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonHashHashCode;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonHashMurmur3_32HashFunction : ComGoogleCommonHashAbstractStreamingHashFunction < JavaIoSerializable >

#pragma mark Public

- (jint)bits;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (ComGoogleCommonHashHashCode *)hashIntWithInt:(jint)input;

- (ComGoogleCommonHashHashCode *)hashLongWithLong:(jlong)input;

- (ComGoogleCommonHashHashCode *)hashUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)seed;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashMurmur3_32HashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashMurmur3_32HashFunction_initWithInt_(ComGoogleCommonHashMurmur3_32HashFunction *self, jint seed);

FOUNDATION_EXPORT ComGoogleCommonHashMurmur3_32HashFunction *new_ComGoogleCommonHashMurmur3_32HashFunction_initWithInt_(jint seed) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashMurmur3_32HashFunction)

#endif

#pragma pop_macro("ComGoogleCommonHashMurmur3_32HashFunction_INCLUDE_ALL")