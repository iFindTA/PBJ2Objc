//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/io/CharSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoCharSource_INCLUDE_ALL")
#if ComGoogleCommonIoCharSource_RESTRICT
#define ComGoogleCommonIoCharSource_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoCharSource_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCharSource_RESTRICT

#if !defined (_ComGoogleCommonIoCharSource_) && (ComGoogleCommonIoCharSource_INCLUDE_ALL || ComGoogleCommonIoCharSource_INCLUDE)
#define _ComGoogleCommonIoCharSource_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonIoCharSink;
@class IOSObjectArray;
@class JavaIoBufferedReader;
@class JavaIoReader;
@protocol ComGoogleCommonIoLineProcessor;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonIoCharSource : NSObject

#pragma mark Public

+ (ComGoogleCommonIoCharSource *)concatWithComGoogleCommonIoCharSourceArray:(IOSObjectArray *)sources;

+ (ComGoogleCommonIoCharSource *)concatWithJavaLangIterable:(id<JavaLangIterable>)sources;

+ (ComGoogleCommonIoCharSource *)concatWithJavaUtilIterator:(id<JavaUtilIterator>)sources;

- (jlong)copyToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable OBJC_METHOD_FAMILY_NONE;

- (jlong)copyToWithComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)sink OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonIoCharSource *)empty;

- (jboolean)isEmpty;

- (JavaIoBufferedReader *)openBufferedStream;

- (JavaIoReader *)openStream;

- (NSString *)read;

- (NSString *)readFirstLine;

- (ComGoogleCommonCollectImmutableList *)readLines;

- (id)readLinesWithComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)processor;

+ (ComGoogleCommonIoCharSource *)wrapWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharSource)

FOUNDATION_EXPORT void ComGoogleCommonIoCharSource_init(ComGoogleCommonIoCharSource *self);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_concatWithJavaLangIterable_(id<JavaLangIterable> sources);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_concatWithJavaUtilIterator_(id<JavaUtilIterator> sources);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_concatWithComGoogleCommonIoCharSourceArray_(IOSObjectArray *sources);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_wrapWithJavaLangCharSequence_(id<JavaLangCharSequence> charSequence);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoCharSource_empty();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharSource)

#endif

#pragma pop_macro("ComGoogleCommonIoCharSource_INCLUDE_ALL")
