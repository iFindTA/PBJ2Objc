//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/ModifiedUtf8.java
//

#ifndef _JavaNioCharsetModifiedUtf8_H_
#define _JavaNioCharsetModifiedUtf8_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class IOSCharArray;

@interface JavaNioCharsetModifiedUtf8 : NSObject

#pragma mark Public

+ (jlong)countBytesWithNSString:(NSString *)s
                    withBoolean:(jboolean)shortLength;

+ (NSString *)decodeWithByteArray:(IOSByteArray *)inArg
                    withCharArray:(IOSCharArray *)outArg
                          withInt:(jint)offset
                          withInt:(jint)utfSize;

+ (void)encodeWithByteArray:(IOSByteArray *)dst
                    withInt:(jint)offset
               withNSString:(NSString *)s;

+ (IOSByteArray *)encodeWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetModifiedUtf8)

FOUNDATION_EXPORT NSString *JavaNioCharsetModifiedUtf8_decodeWithByteArray_withCharArray_withInt_withInt_(IOSByteArray *inArg, IOSCharArray *outArg, jint offset, jint utfSize);

FOUNDATION_EXPORT jlong JavaNioCharsetModifiedUtf8_countBytesWithNSString_withBoolean_(NSString *s, jboolean shortLength);

FOUNDATION_EXPORT void JavaNioCharsetModifiedUtf8_encodeWithByteArray_withInt_withNSString_(IOSByteArray *dst, jint offset, NSString *s);

FOUNDATION_EXPORT IOSByteArray *JavaNioCharsetModifiedUtf8_encodeWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetModifiedUtf8)

#endif // _JavaNioCharsetModifiedUtf8_H_
