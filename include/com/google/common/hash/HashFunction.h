//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/hash/HashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonHashHashFunction_INCLUDE_ALL")
#if ComGoogleCommonHashHashFunction_RESTRICT
#define ComGoogleCommonHashHashFunction_INCLUDE_ALL 0
#else
#define ComGoogleCommonHashHashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashHashFunction_RESTRICT

#if !defined (_ComGoogleCommonHashHashFunction_) && (ComGoogleCommonHashHashFunction_INCLUDE_ALL || ComGoogleCommonHashHashFunction_INCLUDE)
#define _ComGoogleCommonHashHashFunction_

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol ComGoogleCommonHashHasher;
@protocol JavaLangCharSequence;

@protocol ComGoogleCommonHashHashFunction < NSObject, JavaObject >

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (id<ComGoogleCommonHashHasher>)newHasherWithInt:(jint)expectedInputSize OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonHashHashCode *)hashIntWithInt:(jint)input;

- (ComGoogleCommonHashHashCode *)hashLongWithLong:(jlong)input;

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input;

- (ComGoogleCommonHashHashCode *)hashBytesWithByteArray:(IOSByteArray *)input
                                                withInt:(jint)off
                                                withInt:(jint)len;

- (ComGoogleCommonHashHashCode *)hashUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

- (ComGoogleCommonHashHashCode *)hashStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)input
                                          withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (ComGoogleCommonHashHashCode *)hashObjectWithId:(id)instance
                    withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel>)funnel;

- (jint)bits;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashHashFunction)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashFunction)

#endif

#pragma pop_macro("ComGoogleCommonHashHashFunction_INCLUDE_ALL")