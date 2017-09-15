//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/BufferedInputStream.java
//

#ifndef _JavaIoBufferedInputStream_H_
#define _JavaIoBufferedInputStream_H_

#include "J2ObjC_header.h"
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

#define JavaIoBufferedInputStream_DEFAULT_BUFFER_SIZE 8192

@interface JavaIoBufferedInputStream : JavaIoFilterInputStream {
 @public
  IOSByteArray *buf_;
  jint count_;
  jint marklimit_;
  jint markpos_;
  jint pos_;
}

#pragma mark Public

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                  withInt:(jint)size;

- (jint)available;

- (void)close;

- (void)markWithInt:(jint)readlimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (void)reset;

- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoBufferedInputStream)

J2OBJC_FIELD_SETTER(JavaIoBufferedInputStream, buf_, IOSByteArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaIoBufferedInputStream, DEFAULT_BUFFER_SIZE, jint)

FOUNDATION_EXPORT void JavaIoBufferedInputStream_initWithJavaIoInputStream_(JavaIoBufferedInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoBufferedInputStream *new_JavaIoBufferedInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoBufferedInputStream_initWithJavaIoInputStream_withInt_(JavaIoBufferedInputStream *self, JavaIoInputStream *inArg, jint size);

FOUNDATION_EXPORT JavaIoBufferedInputStream *new_JavaIoBufferedInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoBufferedInputStream)

#endif // _JavaIoBufferedInputStream_H_
