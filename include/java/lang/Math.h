//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Math.java
//

#ifndef _JavaLangMath_H_
#define _JavaLangMath_H_

#include "J2ObjC_header.h"

#define JavaLangMath_E 2.718281828459045
#define JavaLangMath_PI 3.141592653589793

@interface JavaLangMath : NSObject

#pragma mark Public

+ (jdouble)absWithDouble:(jdouble)d;

+ (jfloat)absWithFloat:(jfloat)f;

+ (jint)absWithInt:(jint)i;

+ (jlong)absWithLong:(jlong)l;

+ (jdouble)acosWithDouble:(jdouble)d;

+ (jdouble)asinWithDouble:(jdouble)d;

+ (jdouble)atanWithDouble:(jdouble)d;

+ (jdouble)atan2WithDouble:(jdouble)y
                withDouble:(jdouble)x;

+ (jdouble)cbrtWithDouble:(jdouble)d;

+ (jdouble)ceilWithDouble:(jdouble)d;

+ (jdouble)copySignWithDouble:(jdouble)magnitude
                   withDouble:(jdouble)sign OBJC_METHOD_FAMILY_NONE;

+ (jfloat)copySignWithFloat:(jfloat)magnitude
                  withFloat:(jfloat)sign OBJC_METHOD_FAMILY_NONE;

+ (jdouble)cosWithDouble:(jdouble)d;

+ (jdouble)coshWithDouble:(jdouble)d;

+ (jdouble)expWithDouble:(jdouble)d;

+ (jdouble)expm1WithDouble:(jdouble)d;

+ (jdouble)floorWithDouble:(jdouble)d;

+ (jint)getExponentWithDouble:(jdouble)d;

+ (jint)getExponentWithFloat:(jfloat)f;

+ (jdouble)hypotWithDouble:(jdouble)x
                withDouble:(jdouble)y;

+ (jdouble)IEEEremainderWithDouble:(jdouble)x
                        withDouble:(jdouble)y;

+ (jdouble)logWithDouble:(jdouble)d;

+ (jdouble)log10WithDouble:(jdouble)d;

+ (jdouble)log1pWithDouble:(jdouble)d;

+ (jdouble)maxWithDouble:(jdouble)d1
              withDouble:(jdouble)d2;

+ (jfloat)maxWithFloat:(jfloat)f1
             withFloat:(jfloat)f2;

+ (jint)maxWithInt:(jint)i1
           withInt:(jint)i2;

+ (jlong)maxWithLong:(jlong)l1
            withLong:(jlong)l2;

+ (jdouble)minWithDouble:(jdouble)d1
              withDouble:(jdouble)d2;

+ (jfloat)minWithFloat:(jfloat)f1
             withFloat:(jfloat)f2;

+ (jint)minWithInt:(jint)i1
           withInt:(jint)i2;

+ (jlong)minWithLong:(jlong)l1
            withLong:(jlong)l2;

+ (jdouble)nextAfterWithDouble:(jdouble)start
                    withDouble:(jdouble)direction;

+ (jfloat)nextAfterWithFloat:(jfloat)start
                  withDouble:(jdouble)direction;

+ (jdouble)nextUpWithDouble:(jdouble)d;

+ (jfloat)nextUpWithFloat:(jfloat)f;

+ (jdouble)powWithDouble:(jdouble)x
              withDouble:(jdouble)y;

+ (jdouble)random;

+ (jdouble)rintWithDouble:(jdouble)d;

+ (jlong)roundWithDouble:(jdouble)d;

+ (jint)roundWithFloat:(jfloat)f;

+ (jdouble)scalbWithDouble:(jdouble)d
                   withInt:(jint)scaleFactor;

+ (jfloat)scalbWithFloat:(jfloat)d
                 withInt:(jint)scaleFactor;

+ (jdouble)signumWithDouble:(jdouble)d;

+ (jfloat)signumWithFloat:(jfloat)f;

+ (jdouble)sinWithDouble:(jdouble)d;

+ (jdouble)sinhWithDouble:(jdouble)d;

+ (jdouble)sqrtWithDouble:(jdouble)d;

+ (jdouble)tanWithDouble:(jdouble)d;

+ (jdouble)tanhWithDouble:(jdouble)d;

+ (jdouble)toDegreesWithDouble:(jdouble)angrad;

+ (jdouble)toRadiansWithDouble:(jdouble)angdeg;

+ (jdouble)ulpWithDouble:(jdouble)d;

+ (jfloat)ulpWithFloat:(jfloat)f;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangMath)

J2OBJC_STATIC_FIELD_GETTER(JavaLangMath, E, jdouble)

J2OBJC_STATIC_FIELD_GETTER(JavaLangMath, PI, jdouble)

FOUNDATION_EXPORT jdouble JavaLangMath_absWithDouble_(jdouble d);

FOUNDATION_EXPORT jfloat JavaLangMath_absWithFloat_(jfloat f);

FOUNDATION_EXPORT jint JavaLangMath_absWithInt_(jint i);

FOUNDATION_EXPORT jlong JavaLangMath_absWithLong_(jlong l);

FOUNDATION_EXPORT jdouble JavaLangMath_acosWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_asinWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_atanWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_atan2WithDouble_withDouble_(jdouble y, jdouble x);

FOUNDATION_EXPORT jdouble JavaLangMath_cbrtWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_ceilWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_cosWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_coshWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_expWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_expm1WithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_floorWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_hypotWithDouble_withDouble_(jdouble x, jdouble y);

FOUNDATION_EXPORT jdouble JavaLangMath_IEEEremainderWithDouble_withDouble_(jdouble x, jdouble y);

FOUNDATION_EXPORT jdouble JavaLangMath_logWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_log10WithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_log1pWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_maxWithDouble_withDouble_(jdouble d1, jdouble d2);

FOUNDATION_EXPORT jfloat JavaLangMath_maxWithFloat_withFloat_(jfloat f1, jfloat f2);

FOUNDATION_EXPORT jint JavaLangMath_maxWithInt_withInt_(jint i1, jint i2);

FOUNDATION_EXPORT jlong JavaLangMath_maxWithLong_withLong_(jlong l1, jlong l2);

FOUNDATION_EXPORT jdouble JavaLangMath_minWithDouble_withDouble_(jdouble d1, jdouble d2);

FOUNDATION_EXPORT jfloat JavaLangMath_minWithFloat_withFloat_(jfloat f1, jfloat f2);

FOUNDATION_EXPORT jint JavaLangMath_minWithInt_withInt_(jint i1, jint i2);

FOUNDATION_EXPORT jlong JavaLangMath_minWithLong_withLong_(jlong l1, jlong l2);

FOUNDATION_EXPORT jdouble JavaLangMath_powWithDouble_withDouble_(jdouble x, jdouble y);

FOUNDATION_EXPORT jdouble JavaLangMath_rintWithDouble_(jdouble d);

FOUNDATION_EXPORT jlong JavaLangMath_roundWithDouble_(jdouble d);

FOUNDATION_EXPORT jint JavaLangMath_roundWithFloat_(jfloat f);

FOUNDATION_EXPORT jdouble JavaLangMath_signumWithDouble_(jdouble d);

FOUNDATION_EXPORT jfloat JavaLangMath_signumWithFloat_(jfloat f);

FOUNDATION_EXPORT jdouble JavaLangMath_sinWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_sinhWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_sqrtWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_tanWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_tanhWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_random();

FOUNDATION_EXPORT jdouble JavaLangMath_toRadiansWithDouble_(jdouble angdeg);

FOUNDATION_EXPORT jdouble JavaLangMath_toDegreesWithDouble_(jdouble angrad);

FOUNDATION_EXPORT jdouble JavaLangMath_ulpWithDouble_(jdouble d);

FOUNDATION_EXPORT jfloat JavaLangMath_ulpWithFloat_(jfloat f);

FOUNDATION_EXPORT jdouble JavaLangMath_copySignWithDouble_withDouble_(jdouble magnitude, jdouble sign);

FOUNDATION_EXPORT jfloat JavaLangMath_copySignWithFloat_withFloat_(jfloat magnitude, jfloat sign);

FOUNDATION_EXPORT jint JavaLangMath_getExponentWithFloat_(jfloat f);

FOUNDATION_EXPORT jint JavaLangMath_getExponentWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangMath_nextAfterWithDouble_withDouble_(jdouble start, jdouble direction);

FOUNDATION_EXPORT jfloat JavaLangMath_nextAfterWithFloat_withDouble_(jfloat start, jdouble direction);

FOUNDATION_EXPORT jdouble JavaLangMath_nextUpWithDouble_(jdouble d);

FOUNDATION_EXPORT jfloat JavaLangMath_nextUpWithFloat_(jfloat f);

FOUNDATION_EXPORT jdouble JavaLangMath_scalbWithDouble_withInt_(jdouble d, jint scaleFactor);

FOUNDATION_EXPORT jfloat JavaLangMath_scalbWithFloat_withInt_(jfloat d, jint scaleFactor);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangMath)

#endif // _JavaLangMath_H_
