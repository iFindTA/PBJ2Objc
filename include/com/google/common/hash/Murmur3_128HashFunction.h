//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/hash/Murmur3_128HashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashMurmur3_128HashFunction_INCLUDE_ALL")
#if ComGoogleCommonHashMurmur3_128HashFunction_RESTRICT
#define ComGoogleCommonHashMurmur3_128HashFunction_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashMurmur3_128HashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashMurmur3_128HashFunction_RESTRICT

#if !defined (_ComGoogleCommonHashMurmur3_128HashFunction_) && (ComGoogleCommonHashMurmur3_128HashFunction_INCLUDE_ALL || ComGoogleCommonHashMurmur3_128HashFunction_INCLUDE)
#define _ComGoogleCommonHashMurmur3_128HashFunction_

#define ComGoogleCommonHashAbstractStreamingHashFunction_RESTRICT 1
#define ComGoogleCommonHashAbstractStreamingHashFunction_INCLUDE 1
#include "com/google/common/hash/AbstractStreamingHashFunction.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonHashHasher;

@interface ComGoogleCommonHashMurmur3_128HashFunction : ComGoogleCommonHashAbstractStreamingHashFunction < JavaIoSerializable >

#pragma mark Public

- (jint)bits;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)seed;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashMurmur3_128HashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashMurmur3_128HashFunction_initWithInt_(ComGoogleCommonHashMurmur3_128HashFunction *self, jint seed);

FOUNDATION_EXPORT ComGoogleCommonHashMurmur3_128HashFunction *new_ComGoogleCommonHashMurmur3_128HashFunction_initWithInt_(jint seed) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashMurmur3_128HashFunction)

#endif

#pragma pop_macro("ComGoogleCommonHashMurmur3_128HashFunction_INCLUDE_ALL")
