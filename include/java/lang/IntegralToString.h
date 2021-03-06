//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IntegralToString.java
//

#ifndef _JavaLangIntegralToString_H_
#define _JavaLangIntegralToString_H_

#include "J2ObjC_header.h"

@class IOSByteArray;
@class JavaLangAbstractStringBuilder;
@class JavaLangStringBuilder;

@interface JavaLangIntegralToString : NSObject

#pragma mark Public

+ (JavaLangStringBuilder *)appendByteAsHexWithJavaLangStringBuilder:(JavaLangStringBuilder *)sb
                                                           withByte:(jbyte)b
                                                        withBoolean:(jboolean)upperCase;

+ (void)appendIntWithJavaLangAbstractStringBuilder:(JavaLangAbstractStringBuilder *)sb
                                           withInt:(jint)i;

+ (void)appendLongWithJavaLangAbstractStringBuilder:(JavaLangAbstractStringBuilder *)sb
                                           withLong:(jlong)l;

+ (NSString *)bytesToHexStringWithByteArray:(IOSByteArray *)bytes
                                withBoolean:(jboolean)upperCase;

+ (NSString *)byteToHexStringWithByte:(jbyte)b
                          withBoolean:(jboolean)upperCase;

+ (NSString *)intToBinaryStringWithInt:(jint)i;

+ (NSString *)intToHexStringWithInt:(jint)i
                        withBoolean:(jboolean)upperCase
                            withInt:(jint)minWidth;

+ (NSString *)intToOctalStringWithInt:(jint)i;

+ (NSString *)intToStringWithInt:(jint)i;

+ (NSString *)intToStringWithInt:(jint)i
                         withInt:(jint)radix;

+ (NSString *)longToBinaryStringWithLong:(jlong)v;

+ (NSString *)longToHexStringWithLong:(jlong)v;

+ (NSString *)longToOctalStringWithLong:(jlong)v;

+ (NSString *)longToStringWithLong:(jlong)l;

+ (NSString *)longToStringWithLong:(jlong)v
                           withInt:(jint)radix;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIntegralToString)

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToStringWithInt_withInt_(jint i, jint radix);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToStringWithInt_(jint i);

FOUNDATION_EXPORT void JavaLangIntegralToString_appendIntWithJavaLangAbstractStringBuilder_withInt_(JavaLangAbstractStringBuilder *sb, jint i);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToStringWithLong_withInt_(jlong v, jint radix);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToStringWithLong_(jlong l);

FOUNDATION_EXPORT void JavaLangIntegralToString_appendLongWithJavaLangAbstractStringBuilder_withLong_(JavaLangAbstractStringBuilder *sb, jlong l);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToBinaryStringWithInt_(jint i);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToBinaryStringWithLong_(jlong v);

FOUNDATION_EXPORT JavaLangStringBuilder *JavaLangIntegralToString_appendByteAsHexWithJavaLangStringBuilder_withByte_withBoolean_(JavaLangStringBuilder *sb, jbyte b, jboolean upperCase);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_byteToHexStringWithByte_withBoolean_(jbyte b, jboolean upperCase);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_bytesToHexStringWithByteArray_withBoolean_(IOSByteArray *bytes, jboolean upperCase);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToHexStringWithInt_withBoolean_withInt_(jint i, jboolean upperCase, jint minWidth);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToHexStringWithLong_(jlong v);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_intToOctalStringWithInt_(jint i);

FOUNDATION_EXPORT NSString *JavaLangIntegralToString_longToOctalStringWithLong_(jlong v);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIntegralToString)

#endif // _JavaLangIntegralToString_H_
