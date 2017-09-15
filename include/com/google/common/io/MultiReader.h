//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/io/MultiReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoMultiReader_INCLUDE_ALL")
#if ComGoogleCommonIoMultiReader_RESTRICT
#define ComGoogleCommonIoMultiReader_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoMultiReader_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoMultiReader_RESTRICT

#if !defined (_ComGoogleCommonIoMultiReader_) && (ComGoogleCommonIoMultiReader_INCLUDE_ALL || ComGoogleCommonIoMultiReader_INCLUDE)
#define _ComGoogleCommonIoMultiReader_

#define JavaIoReader_RESTRICT 1
#define JavaIoReader_INCLUDE 1
#include "java/io/Reader.h"

@class IOSCharArray;
@protocol JavaUtilIterator;

@interface ComGoogleCommonIoMultiReader : JavaIoReader

#pragma mark Public

- (void)close;

- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

- (jboolean)ready;

- (jlong)skipWithLong:(jlong)n;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)readers;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoMultiReader)

FOUNDATION_EXPORT void ComGoogleCommonIoMultiReader_initWithJavaUtilIterator_(ComGoogleCommonIoMultiReader *self, id<JavaUtilIterator> readers);

FOUNDATION_EXPORT ComGoogleCommonIoMultiReader *new_ComGoogleCommonIoMultiReader_initWithJavaUtilIterator_(id<JavaUtilIterator> readers) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoMultiReader)

#endif

#pragma pop_macro("ComGoogleCommonIoMultiReader_INCLUDE_ALL")
