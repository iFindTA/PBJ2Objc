//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/AdditionalMatchers.java
//

#ifndef _OrgMockitoAdditionalMatchers_H_
#define _OrgMockitoAdditionalMatchers_H_

#include "J2ObjC_header.h"

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class IOSShortArray;
@protocol JavaLangComparable;

@interface OrgMockitoAdditionalMatchers : NSObject

#pragma mark Public

- (instancetype)init;

+ (jboolean)and__WithBoolean:(jboolean)first
                 withBoolean:(jboolean)second;

+ (jbyte)and__WithByte:(jbyte)first
              withByte:(jbyte)second;

+ (jchar)and__WithChar:(jchar)first
              withChar:(jchar)second;

+ (jdouble)and__WithDouble:(jdouble)first
                withDouble:(jdouble)second;

+ (jfloat)and__WithFloat:(jfloat)first
               withFloat:(jfloat)second;

+ (jint)and__WithInt:(jint)first
             withInt:(jint)second;

+ (jlong)and__WithLong:(jlong)first
              withLong:(jlong)second;

+ (jshort)and__WithShort:(jshort)first
               withShort:(jshort)second;

+ (id)and__WithId:(id)first
           withId:(id)second;

+ (IOSBooleanArray *)aryEqWithBooleanArray:(IOSBooleanArray *)value;

+ (IOSByteArray *)aryEqWithByteArray:(IOSByteArray *)value;

+ (IOSCharArray *)aryEqWithCharArray:(IOSCharArray *)value;

+ (IOSDoubleArray *)aryEqWithDoubleArray:(IOSDoubleArray *)value;

+ (IOSFloatArray *)aryEqWithFloatArray:(IOSFloatArray *)value;

+ (IOSIntArray *)aryEqWithIntArray:(IOSIntArray *)value;

+ (IOSLongArray *)aryEqWithLongArray:(IOSLongArray *)value;

+ (IOSShortArray *)aryEqWithShortArray:(IOSShortArray *)value;

+ (IOSObjectArray *)aryEqWithNSObjectArray:(IOSObjectArray *)value;

+ (id)cmpEqWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jdouble)eqWithDouble:(jdouble)value
             withDouble:(jdouble)delta;

+ (jfloat)eqWithFloat:(jfloat)value
            withFloat:(jfloat)delta;

+ (NSString *)findWithNSString:(NSString *)regex;

+ (jbyte)geqWithByte:(jbyte)value;

+ (id)geqWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jdouble)geqWithDouble:(jdouble)value;

+ (jfloat)geqWithFloat:(jfloat)value;

+ (jint)geqWithInt:(jint)value;

+ (jlong)geqWithLong:(jlong)value;

+ (jshort)geqWithShort:(jshort)value;

+ (jbyte)gtWithByte:(jbyte)value;

+ (id)gtWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jdouble)gtWithDouble:(jdouble)value;

+ (jfloat)gtWithFloat:(jfloat)value;

+ (jint)gtWithInt:(jint)value;

+ (jlong)gtWithLong:(jlong)value;

+ (jshort)gtWithShort:(jshort)value;

+ (jbyte)leqWithByte:(jbyte)value;

+ (id)leqWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jdouble)leqWithDouble:(jdouble)value;

+ (jfloat)leqWithFloat:(jfloat)value;

+ (jint)leqWithInt:(jint)value;

+ (jlong)leqWithLong:(jlong)value;

+ (jshort)leqWithShort:(jshort)value;

+ (jbyte)ltWithByte:(jbyte)value;

+ (id)ltWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (jdouble)ltWithDouble:(jdouble)value;

+ (jfloat)ltWithFloat:(jfloat)value;

+ (jint)ltWithInt:(jint)value;

+ (jlong)ltWithLong:(jlong)value;

+ (jshort)ltWithShort:(jshort)value;

+ (jboolean)not__WithBoolean:(jboolean)first;

+ (jbyte)not__WithByte:(jbyte)first;

+ (jchar)not__WithChar:(jchar)first;

+ (jdouble)not__WithDouble:(jdouble)first;

+ (jfloat)not__WithFloat:(jfloat)first;

+ (jint)not__WithInt:(jint)first;

+ (jlong)not__WithLong:(jlong)first;

+ (jshort)not__WithShort:(jshort)first;

+ (id)not__WithId:(id)first;

+ (jboolean)or__WithBoolean:(jboolean)first
                withBoolean:(jboolean)second;

+ (jbyte)or__WithByte:(jbyte)first
             withByte:(jbyte)second;

+ (jchar)or__WithChar:(jchar)first
             withChar:(jchar)second;

+ (jdouble)or__WithDouble:(jdouble)first
               withDouble:(jdouble)second;

+ (jfloat)or__WithFloat:(jfloat)first
              withFloat:(jfloat)second;

+ (jint)or__WithInt:(jint)first
            withInt:(jint)second;

+ (jlong)or__WithLong:(jlong)first
             withLong:(jlong)second;

+ (jshort)or__WithShort:(jshort)first
              withShort:(jshort)second;

+ (id)or__WithId:(id)first
          withId:(id)second;

@end

J2OBJC_STATIC_INIT(OrgMockitoAdditionalMatchers)

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_geqWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_geqWithByte_(jbyte value);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_geqWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_geqWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_geqWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_geqWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_geqWithShort_(jshort value);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_leqWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_leqWithByte_(jbyte value);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_leqWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_leqWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_leqWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_leqWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_leqWithShort_(jshort value);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_gtWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_gtWithByte_(jbyte value);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_gtWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_gtWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_gtWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_gtWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_gtWithShort_(jshort value);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_ltWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_ltWithByte_(jbyte value);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_ltWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_ltWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_ltWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_ltWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_ltWithShort_(jshort value);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_cmpEqWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT NSString *OrgMockitoAdditionalMatchers_findWithNSString_(NSString *regex);

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoAdditionalMatchers_aryEqWithNSObjectArray_(IOSObjectArray *value);

FOUNDATION_EXPORT IOSShortArray *OrgMockitoAdditionalMatchers_aryEqWithShortArray_(IOSShortArray *value);

FOUNDATION_EXPORT IOSLongArray *OrgMockitoAdditionalMatchers_aryEqWithLongArray_(IOSLongArray *value);

FOUNDATION_EXPORT IOSIntArray *OrgMockitoAdditionalMatchers_aryEqWithIntArray_(IOSIntArray *value);

FOUNDATION_EXPORT IOSFloatArray *OrgMockitoAdditionalMatchers_aryEqWithFloatArray_(IOSFloatArray *value);

FOUNDATION_EXPORT IOSDoubleArray *OrgMockitoAdditionalMatchers_aryEqWithDoubleArray_(IOSDoubleArray *value);

FOUNDATION_EXPORT IOSCharArray *OrgMockitoAdditionalMatchers_aryEqWithCharArray_(IOSCharArray *value);

FOUNDATION_EXPORT IOSByteArray *OrgMockitoAdditionalMatchers_aryEqWithByteArray_(IOSByteArray *value);

FOUNDATION_EXPORT IOSBooleanArray *OrgMockitoAdditionalMatchers_aryEqWithBooleanArray_(IOSBooleanArray *value);

FOUNDATION_EXPORT jboolean OrgMockitoAdditionalMatchers_and__WithBoolean_withBoolean_(jboolean first, jboolean second);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_and__WithByte_withByte_(jbyte first, jbyte second);

FOUNDATION_EXPORT jchar OrgMockitoAdditionalMatchers_and__WithChar_withChar_(jchar first, jchar second);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_and__WithDouble_withDouble_(jdouble first, jdouble second);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_and__WithFloat_withFloat_(jfloat first, jfloat second);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_and__WithInt_withInt_(jint first, jint second);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_and__WithLong_withLong_(jlong first, jlong second);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_and__WithShort_withShort_(jshort first, jshort second);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_and__WithId_withId_(id first, id second);

FOUNDATION_EXPORT jboolean OrgMockitoAdditionalMatchers_or__WithBoolean_withBoolean_(jboolean first, jboolean second);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_or__WithId_withId_(id first, id second);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_or__WithShort_withShort_(jshort first, jshort second);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_or__WithLong_withLong_(jlong first, jlong second);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_or__WithInt_withInt_(jint first, jint second);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_or__WithFloat_withFloat_(jfloat first, jfloat second);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_or__WithDouble_withDouble_(jdouble first, jdouble second);

FOUNDATION_EXPORT jchar OrgMockitoAdditionalMatchers_or__WithChar_withChar_(jchar first, jchar second);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_or__WithByte_withByte_(jbyte first, jbyte second);

FOUNDATION_EXPORT id OrgMockitoAdditionalMatchers_not__WithId_(id first);

FOUNDATION_EXPORT jshort OrgMockitoAdditionalMatchers_not__WithShort_(jshort first);

FOUNDATION_EXPORT jint OrgMockitoAdditionalMatchers_not__WithInt_(jint first);

FOUNDATION_EXPORT jlong OrgMockitoAdditionalMatchers_not__WithLong_(jlong first);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_not__WithFloat_(jfloat first);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_not__WithDouble_(jdouble first);

FOUNDATION_EXPORT jchar OrgMockitoAdditionalMatchers_not__WithChar_(jchar first);

FOUNDATION_EXPORT jboolean OrgMockitoAdditionalMatchers_not__WithBoolean_(jboolean first);

FOUNDATION_EXPORT jbyte OrgMockitoAdditionalMatchers_not__WithByte_(jbyte first);

FOUNDATION_EXPORT jdouble OrgMockitoAdditionalMatchers_eqWithDouble_withDouble_(jdouble value, jdouble delta);

FOUNDATION_EXPORT jfloat OrgMockitoAdditionalMatchers_eqWithFloat_withFloat_(jfloat value, jfloat delta);

FOUNDATION_EXPORT void OrgMockitoAdditionalMatchers_init(OrgMockitoAdditionalMatchers *self);

FOUNDATION_EXPORT OrgMockitoAdditionalMatchers *new_OrgMockitoAdditionalMatchers_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoAdditionalMatchers)

#endif // _OrgMockitoAdditionalMatchers_H_
