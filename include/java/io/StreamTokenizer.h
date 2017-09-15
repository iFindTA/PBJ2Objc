//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/StreamTokenizer.java
//

#ifndef _JavaIoStreamTokenizer_H_
#define _JavaIoStreamTokenizer_H_

#include "J2ObjC_header.h"

@class JavaIoInputStream;
@class JavaIoReader;

#define JavaIoStreamTokenizer_TT_EOF -1
#define JavaIoStreamTokenizer_TT_EOL 10
#define JavaIoStreamTokenizer_TT_NUMBER -2
#define JavaIoStreamTokenizer_TT_WORD -3

@interface JavaIoStreamTokenizer : NSObject {
 @public
  jdouble nval_;
  NSString *sval_;
  jint ttype_;
}

#pragma mark Public

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is;

- (instancetype)initWithJavaIoReader:(JavaIoReader *)r;

- (void)commentCharWithInt:(jint)ch;

- (void)eolIsSignificantWithBoolean:(jboolean)flag;

- (jint)lineno;

- (void)lowerCaseModeWithBoolean:(jboolean)flag;

- (jint)nextToken;

- (void)ordinaryCharWithInt:(jint)ch;

- (void)ordinaryCharsWithInt:(jint)low
                     withInt:(jint)hi;

- (void)parseNumbers;

- (void)pushBack;

- (void)quoteCharWithInt:(jint)ch;

- (void)resetSyntax;

- (void)slashSlashCommentsWithBoolean:(jboolean)flag;

- (void)slashStarCommentsWithBoolean:(jboolean)flag;

- (NSString *)description;

- (void)whitespaceCharsWithInt:(jint)low
                       withInt:(jint)hi;

- (void)wordCharsWithInt:(jint)low
                 withInt:(jint)hi;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStreamTokenizer)

J2OBJC_FIELD_SETTER(JavaIoStreamTokenizer, sval_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_EOF, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_EOL, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_NUMBER, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaIoStreamTokenizer, TT_WORD, jint)

FOUNDATION_EXPORT void JavaIoStreamTokenizer_initWithJavaIoInputStream_(JavaIoStreamTokenizer *self, JavaIoInputStream *is);

FOUNDATION_EXPORT JavaIoStreamTokenizer *new_JavaIoStreamTokenizer_initWithJavaIoInputStream_(JavaIoInputStream *is) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoStreamTokenizer_initWithJavaIoReader_(JavaIoStreamTokenizer *self, JavaIoReader *r);

FOUNDATION_EXPORT JavaIoStreamTokenizer *new_JavaIoStreamTokenizer_initWithJavaIoReader_(JavaIoReader *r) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStreamTokenizer)

#endif // _JavaIoStreamTokenizer_H_
