//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/InputStream.java
//

#ifndef _JavaIoInputStream_H_
#define _JavaIoInputStream_H_

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"

@class IOSByteArray;

@interface JavaIoInputStream : NSObject < JavaIoCloseable >

#pragma mark Public

- (instancetype)init;

- (jint)available;

- (void)close;

- (void)markWithInt:(jint)readlimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (void)reset;

- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInputStream)

FOUNDATION_EXPORT void JavaIoInputStream_init(JavaIoInputStream *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInputStream)

#endif // _JavaIoInputStream_H_
