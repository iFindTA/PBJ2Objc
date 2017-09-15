//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Scanner.java
//

#ifndef _JavaUtilScanner_H_
#define _JavaUtilScanner_H_

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"
#include "java/util/Iterator.h"

@class JavaIoFile;
@class JavaIoIOException;
@class JavaIoInputStream;
@class JavaMathBigDecimal;
@class JavaMathBigInteger;
@class JavaUtilLocale;
@class JavaUtilRegexPattern;
@protocol JavaLangReadable;
@protocol JavaNioChannelsReadableByteChannel;
@protocol JavaUtilRegexMatchResult;

@interface JavaUtilScanner : NSObject < JavaIoCloseable, JavaUtilIterator >

#pragma mark Public

- (instancetype)initWithJavaIoFile:(JavaIoFile *)src;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)src
                      withNSString:(NSString *)charsetName;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)src;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)src
                             withNSString:(NSString *)charsetName;

- (instancetype)initWithJavaLangReadable:(id<JavaLangReadable>)src;

- (instancetype)initWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)src;

- (instancetype)initWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)src
                                              withNSString:(NSString *)charsetName;

- (instancetype)initWithNSString:(NSString *)src;

- (void)close;

- (JavaUtilRegexPattern *)delimiter;

- (NSString *)findInLineWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (NSString *)findInLineWithNSString:(NSString *)pattern;

- (NSString *)findWithinHorizonWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern
                                                withInt:(jint)horizon;

- (NSString *)findWithinHorizonWithNSString:(NSString *)pattern
                                    withInt:(jint)horizon;

- (jboolean)hasNext;

- (jboolean)hasNextWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (jboolean)hasNextWithNSString:(NSString *)pattern;

- (jboolean)hasNextBigDecimal;

- (jboolean)hasNextBigInteger;

- (jboolean)hasNextBigIntegerWithInt:(jint)radix;

- (jboolean)hasNextBoolean;

- (jboolean)hasNextByte;

- (jboolean)hasNextByteWithInt:(jint)radix;

- (jboolean)hasNextDouble;

- (jboolean)hasNextFloat;

- (jboolean)hasNextInt;

- (jboolean)hasNextIntWithInt:(jint)radix;

- (jboolean)hasNextLine;

- (jboolean)hasNextLong;

- (jboolean)hasNextLongWithInt:(jint)radix;

- (jboolean)hasNextShort;

- (jboolean)hasNextShortWithInt:(jint)radix;

- (JavaIoIOException *)ioException;

- (JavaUtilLocale *)locale;

- (id<JavaUtilRegexMatchResult>)match;

- (NSString *)next;

- (NSString *)nextWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (NSString *)nextWithNSString:(NSString *)pattern;

- (JavaMathBigDecimal *)nextBigDecimal;

- (JavaMathBigInteger *)nextBigInteger;

- (JavaMathBigInteger *)nextBigIntegerWithInt:(jint)radix;

- (jboolean)nextBoolean;

- (jbyte)nextByte;

- (jbyte)nextByteWithInt:(jint)radix;

- (jdouble)nextDouble;

- (jfloat)nextFloat;

- (jint)nextInt;

- (jint)nextIntWithInt:(jint)radix;

- (NSString *)nextLine;

- (jlong)nextLong;

- (jlong)nextLongWithInt:(jint)radix;

- (jshort)nextShort;

- (jshort)nextShortWithInt:(jint)radix;

- (jint)radix;

- (void)remove;

- (JavaUtilScanner *)reset;

- (JavaUtilScanner *)skipWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (JavaUtilScanner *)skipWithNSString:(NSString *)pattern;

- (NSString *)description;

- (JavaUtilScanner *)useDelimiterWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (JavaUtilScanner *)useDelimiterWithNSString:(NSString *)pattern;

- (JavaUtilScanner *)useLocaleWithJavaUtilLocale:(JavaUtilLocale *)l;

- (JavaUtilScanner *)useRadixWithInt:(jint)radix;

@end

J2OBJC_STATIC_INIT(JavaUtilScanner)

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaIoFile_(JavaUtilScanner *self, JavaIoFile *src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaIoFile_(JavaIoFile *src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaIoFile_withNSString_(JavaUtilScanner *self, JavaIoFile *src, NSString *charsetName);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaIoFile_withNSString_(JavaIoFile *src, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithNSString_(JavaUtilScanner *self, NSString *src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithNSString_(NSString *src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaIoInputStream_(JavaUtilScanner *self, JavaIoInputStream *src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaIoInputStream_(JavaIoInputStream *src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaIoInputStream_withNSString_(JavaUtilScanner *self, JavaIoInputStream *src, NSString *charsetName);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaIoInputStream_withNSString_(JavaIoInputStream *src, NSString *charsetName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaLangReadable_(JavaUtilScanner *self, id<JavaLangReadable> src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaLangReadable_(id<JavaLangReadable> src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaNioChannelsReadableByteChannel_(JavaUtilScanner *self, id<JavaNioChannelsReadableByteChannel> src);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaNioChannelsReadableByteChannel_(id<JavaNioChannelsReadableByteChannel> src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilScanner_initWithJavaNioChannelsReadableByteChannel_withNSString_(JavaUtilScanner *self, id<JavaNioChannelsReadableByteChannel> src, NSString *charsetName);

FOUNDATION_EXPORT JavaUtilScanner *new_JavaUtilScanner_initWithJavaNioChannelsReadableByteChannel_withNSString_(id<JavaNioChannelsReadableByteChannel> src, NSString *charsetName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilScanner)

#endif // _JavaUtilScanner_H_
