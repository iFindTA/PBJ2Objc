//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/IllegalFormatCodePointException.java
//

#ifndef _JavaUtilIllegalFormatCodePointException_H_
#define _JavaUtilIllegalFormatCodePointException_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/IllegalFormatException.h"

@interface JavaUtilIllegalFormatCodePointException : JavaUtilIllegalFormatException < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithInt:(jint)c;

- (jint)getCodePoint;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatCodePointException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatCodePointException_initWithInt_(JavaUtilIllegalFormatCodePointException *self, jint c);

FOUNDATION_EXPORT JavaUtilIllegalFormatCodePointException *new_JavaUtilIllegalFormatCodePointException_initWithInt_(jint c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatCodePointException)

#endif // _JavaUtilIllegalFormatCodePointException_H_
