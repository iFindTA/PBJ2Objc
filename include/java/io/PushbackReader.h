//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/PushbackReader.java
//

#ifndef _JavaIoPushbackReader_H_
#define _JavaIoPushbackReader_H_

#include "J2ObjC_header.h"
#include "java/io/FilterReader.h"

@class IOSCharArray;
@class JavaIoReader;

@interface JavaIoPushbackReader : JavaIoFilterReader {
 @public
  IOSCharArray *buf_;
  jint pos_;
}

#pragma mark Public

- (instancetype)initWithJavaIoReader:(JavaIoReader *)inArg;

- (instancetype)initWithJavaIoReader:(JavaIoReader *)inArg
                             withInt:(jint)size;

- (void)close;

- (void)markWithInt:(jint)readAheadLimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

- (jboolean)ready;

- (void)reset;

- (jlong)skipWithLong:(jlong)charCount;

- (void)unreadWithCharArray:(IOSCharArray *)buffer;

- (void)unreadWithCharArray:(IOSCharArray *)buffer
                    withInt:(jint)offset
                    withInt:(jint)length;

- (void)unreadWithInt:(jint)oneChar;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPushbackReader)

J2OBJC_FIELD_SETTER(JavaIoPushbackReader, buf_, IOSCharArray *)

FOUNDATION_EXPORT void JavaIoPushbackReader_initWithJavaIoReader_(JavaIoPushbackReader *self, JavaIoReader *inArg);

FOUNDATION_EXPORT JavaIoPushbackReader *new_JavaIoPushbackReader_initWithJavaIoReader_(JavaIoReader *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPushbackReader_initWithJavaIoReader_withInt_(JavaIoPushbackReader *self, JavaIoReader *inArg, jint size);

FOUNDATION_EXPORT JavaIoPushbackReader *new_JavaIoPushbackReader_initWithJavaIoReader_withInt_(JavaIoReader *inArg, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPushbackReader)

#endif // _JavaIoPushbackReader_H_
