//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/junit/framework/Assert.java
//

#ifndef _JunitFrameworkAssert_H_
#define _JunitFrameworkAssert_H_

#include "J2ObjC_header.h"

@interface JunitFrameworkAssert : NSObject

#pragma mark Public

+ (void)assertEqualsWithBoolean:(jboolean)expected
                    withBoolean:(jboolean)actual;

+ (void)assertEqualsWithByte:(jbyte)expected
                    withByte:(jbyte)actual;

+ (void)assertEqualsWithChar:(jchar)expected
                    withChar:(jchar)actual;

+ (void)assertEqualsWithDouble:(jdouble)expected
                    withDouble:(jdouble)actual
                    withDouble:(jdouble)delta;

+ (void)assertEqualsWithFloat:(jfloat)expected
                    withFloat:(jfloat)actual
                    withFloat:(jfloat)delta;

+ (void)assertEqualsWithInt:(jint)expected
                    withInt:(jint)actual;

+ (void)assertEqualsWithLong:(jlong)expected
                    withLong:(jlong)actual;

+ (void)assertEqualsWithId:(id)expected
                    withId:(id)actual;

+ (void)assertEqualsWithShort:(jshort)expected
                    withShort:(jshort)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                     withBoolean:(jboolean)expected
                     withBoolean:(jboolean)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                        withByte:(jbyte)expected
                        withByte:(jbyte)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                        withChar:(jchar)expected
                        withChar:(jchar)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                      withDouble:(jdouble)expected
                      withDouble:(jdouble)actual
                      withDouble:(jdouble)delta;

+ (void)assertEqualsWithNSString:(NSString *)message
                       withFloat:(jfloat)expected
                       withFloat:(jfloat)actual
                       withFloat:(jfloat)delta;

+ (void)assertEqualsWithNSString:(NSString *)message
                         withInt:(jint)expected
                         withInt:(jint)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                        withLong:(jlong)expected
                        withLong:(jlong)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                          withId:(id)expected
                          withId:(id)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                       withShort:(jshort)expected
                       withShort:(jshort)actual;

+ (void)assertEqualsWithNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

+ (void)assertEqualsWithNSString:(NSString *)message
                    withNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

+ (void)assertFalseWithBoolean:(jboolean)condition;

+ (void)assertFalseWithNSString:(NSString *)message
                    withBoolean:(jboolean)condition;

+ (void)assertNotNullWithId:(id)object;

+ (void)assertNotNullWithNSString:(NSString *)message
                           withId:(id)object;

+ (void)assertNotSameWithId:(id)expected
                     withId:(id)actual;

+ (void)assertNotSameWithNSString:(NSString *)message
                           withId:(id)expected
                           withId:(id)actual;

+ (void)assertNullWithId:(id)object;

+ (void)assertNullWithNSString:(NSString *)message
                        withId:(id)object;

+ (void)assertSameWithId:(id)expected
                  withId:(id)actual;

+ (void)assertSameWithNSString:(NSString *)message
                        withId:(id)expected
                        withId:(id)actual;

+ (void)assertTrueWithBoolean:(jboolean)condition;

+ (void)assertTrueWithNSString:(NSString *)message
                   withBoolean:(jboolean)condition;

+ (void)fail;

+ (void)failWithNSString:(NSString *)message;

+ (void)failNotEqualsWithNSString:(NSString *)message
                           withId:(id)expected
                           withId:(id)actual;

+ (void)failNotSameWithNSString:(NSString *)message
                         withId:(id)expected
                         withId:(id)actual;

+ (void)failSameWithNSString:(NSString *)message;

+ (NSString *)formatWithNSString:(NSString *)message
                          withId:(id)expected
                          withId:(id)actual;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkAssert)

FOUNDATION_EXPORT void JunitFrameworkAssert_init(JunitFrameworkAssert *self);

FOUNDATION_EXPORT JunitFrameworkAssert *new_JunitFrameworkAssert_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JunitFrameworkAssert_assertTrueWithNSString_withBoolean_(NSString *message, jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertTrueWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertFalseWithNSString_withBoolean_(NSString *message, jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertFalseWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkAssert_failWithNSString_(NSString *message);

FOUNDATION_EXPORT void JunitFrameworkAssert_fail();

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withNSString_(NSString *expected, NSString *actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withDouble_withDouble_withDouble_(NSString *message, jdouble expected, jdouble actual, jdouble delta);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithDouble_withDouble_withDouble_(jdouble expected, jdouble actual, jdouble delta);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withFloat_withFloat_withFloat_(NSString *message, jfloat expected, jfloat actual, jfloat delta);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithFloat_withFloat_withFloat_(jfloat expected, jfloat actual, jfloat delta);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withLong_withLong_(NSString *message, jlong expected, jlong actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithLong_withLong_(jlong expected, jlong actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withBoolean_withBoolean_(NSString *message, jboolean expected, jboolean actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithBoolean_withBoolean_(jboolean expected, jboolean actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withByte_withByte_(NSString *message, jbyte expected, jbyte actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithByte_withByte_(jbyte expected, jbyte actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withChar_withChar_(NSString *message, jchar expected, jchar actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithChar_withChar_(jchar expected, jchar actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withShort_withShort_(NSString *message, jshort expected, jshort actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithShort_withShort_(jshort expected, jshort actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withInt_withInt_(NSString *message, jint expected, jint actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithInt_withInt_(jint expected, jint actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNotNullWithId_(id object);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNotNullWithNSString_withId_(NSString *message, id object);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNullWithId_(id object);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNullWithNSString_withId_(NSString *message, id object);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertSameWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNotSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNotSameWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_failSameWithNSString_(NSString *message);

FOUNDATION_EXPORT void JunitFrameworkAssert_failNotSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_failNotEqualsWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT NSString *JunitFrameworkAssert_formatWithNSString_withId_withId_(NSString *message, id expected, id actual);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkAssert)

#endif // _JunitFrameworkAssert_H_
