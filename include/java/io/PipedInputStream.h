//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/PipedInputStream.java
//

#ifndef _JavaIoPipedInputStream_H_
#define _JavaIoPipedInputStream_H_

#include "J2ObjC_header.h"
#include "java/io/InputStream.h"

@class IOSByteArray;
@class JavaIoPipedOutputStream;

#define JavaIoPipedInputStream_PIPE_SIZE 1024

@interface JavaIoPipedInputStream : JavaIoInputStream {
 @public
  IOSByteArray *buffer_;
  jint in_;
  jint out_;
  jboolean isConnected_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)pipeSize;

- (instancetype)initWithJavaIoPipedOutputStream:(JavaIoPipedOutputStream *)outArg;

- (instancetype)initWithJavaIoPipedOutputStream:(JavaIoPipedOutputStream *)outArg
                                        withInt:(jint)pipeSize;

- (jint)available;

- (void)close;

- (void)connectWithJavaIoPipedOutputStream:(JavaIoPipedOutputStream *)src;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)bytes
                  withInt:(jint)offset
                  withInt:(jint)byteCount;

#pragma mark Protected

- (void)receiveWithInt:(jint)oneByte;

#pragma mark Package-Private

- (void)done;

- (void)establishConnection;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPipedInputStream)

J2OBJC_FIELD_SETTER(JavaIoPipedInputStream, buffer_, IOSByteArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaIoPipedInputStream, PIPE_SIZE, jint)

FOUNDATION_EXPORT void JavaIoPipedInputStream_init(JavaIoPipedInputStream *self);

FOUNDATION_EXPORT JavaIoPipedInputStream *new_JavaIoPipedInputStream_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPipedInputStream_initWithJavaIoPipedOutputStream_(JavaIoPipedInputStream *self, JavaIoPipedOutputStream *outArg);

FOUNDATION_EXPORT JavaIoPipedInputStream *new_JavaIoPipedInputStream_initWithJavaIoPipedOutputStream_(JavaIoPipedOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPipedInputStream_initWithInt_(JavaIoPipedInputStream *self, jint pipeSize);

FOUNDATION_EXPORT JavaIoPipedInputStream *new_JavaIoPipedInputStream_initWithInt_(jint pipeSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoPipedInputStream_initWithJavaIoPipedOutputStream_withInt_(JavaIoPipedInputStream *self, JavaIoPipedOutputStream *outArg, jint pipeSize);

FOUNDATION_EXPORT JavaIoPipedInputStream *new_JavaIoPipedInputStream_initWithJavaIoPipedOutputStream_withInt_(JavaIoPipedOutputStream *outArg, jint pipeSize) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPipedInputStream)

#endif // _JavaIoPipedInputStream_H_
