//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/BufferIterator.java
//

#ifndef _LibcoreIoBufferIterator_H_
#define _LibcoreIoBufferIterator_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class IOSIntArray;

@interface LibcoreIoBufferIterator : NSObject

#pragma mark Public

- (instancetype)init;

- (jbyte)readByte;

- (void)readByteArrayWithByteArray:(IOSByteArray *)dst
                           withInt:(jint)dstOffset
                           withInt:(jint)byteCount;

- (jint)readInt;

- (void)readIntArrayWithIntArray:(IOSIntArray *)dst
                         withInt:(jint)dstOffset
                         withInt:(jint)intCount;

- (jshort)readShort;

- (void)seekWithInt:(jint)offset;

- (void)skipWithInt:(jint)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoBufferIterator)

FOUNDATION_EXPORT void LibcoreIoBufferIterator_init(LibcoreIoBufferIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoBufferIterator)

#endif // _LibcoreIoBufferIterator_H_
