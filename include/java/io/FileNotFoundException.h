//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileNotFoundException.java
//

#ifndef _JavaIoFileNotFoundException_H_
#define _JavaIoFileNotFoundException_H_

#include "J2ObjC_header.h"
#include "java/io/IOException.h"

@interface JavaIoFileNotFoundException : JavaIoIOException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileNotFoundException)

FOUNDATION_EXPORT void JavaIoFileNotFoundException_init(JavaIoFileNotFoundException *self);

FOUNDATION_EXPORT JavaIoFileNotFoundException *new_JavaIoFileNotFoundException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoFileNotFoundException_initWithNSString_(JavaIoFileNotFoundException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoFileNotFoundException *new_JavaIoFileNotFoundException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileNotFoundException)

#endif // _JavaIoFileNotFoundException_H_
