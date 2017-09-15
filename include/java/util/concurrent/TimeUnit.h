//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/TimeUnit.java
//

#ifndef _JavaUtilConcurrentTimeUnit_H_
#define _JavaUtilConcurrentTimeUnit_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

@class JavaLangThread;

#define JavaUtilConcurrentTimeUnitEnum_C0 1LL
#define JavaUtilConcurrentTimeUnitEnum_C1 1000LL
#define JavaUtilConcurrentTimeUnitEnum_C2 1000000LL
#define JavaUtilConcurrentTimeUnitEnum_C3 1000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C4 60000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C5 3600000000000LL
#define JavaUtilConcurrentTimeUnitEnum_C6 86400000000000LL
#define JavaUtilConcurrentTimeUnitEnum_MAX 9223372036854775807LL

typedef NS_ENUM(NSUInteger, JavaUtilConcurrentTimeUnit) {
  JavaUtilConcurrentTimeUnit_NANOSECONDS = 0,
  JavaUtilConcurrentTimeUnit_MICROSECONDS = 1,
  JavaUtilConcurrentTimeUnit_MILLISECONDS = 2,
  JavaUtilConcurrentTimeUnit_SECONDS = 3,
  JavaUtilConcurrentTimeUnit_MINUTES = 4,
  JavaUtilConcurrentTimeUnit_HOURS = 5,
  JavaUtilConcurrentTimeUnit_DAYS = 6,
};

@interface JavaUtilConcurrentTimeUnitEnum : JavaLangEnum < NSCopying >

#pragma mark Public

- (jlong)convertWithLong:(jlong)sourceDuration
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)sourceUnit;

- (void)sleepWithLong:(jlong)timeout;

- (void)timedJoinWithJavaLangThread:(JavaLangThread *)thread
                           withLong:(jlong)timeout;

- (void)timedWaitWithId:(id)obj
               withLong:(jlong)timeout;

- (jlong)toDaysWithLong:(jlong)duration;

- (jlong)toHoursWithLong:(jlong)duration;

- (jlong)toMicrosWithLong:(jlong)duration;

- (jlong)toMillisWithLong:(jlong)duration;

- (jlong)toMinutesWithLong:(jlong)duration;

- (jlong)toNanosWithLong:(jlong)duration;

- (jlong)toSecondsWithLong:(jlong)duration;

#pragma mark Package-Private

- (jint)excessNanosWithLong:(jlong)d
                   withLong:(jlong)m;

+ (jlong)xWithLong:(jlong)d
          withLong:(jlong)m
          withLong:(jlong)over;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaUtilConcurrentTimeUnitEnum_values();

+ (JavaUtilConcurrentTimeUnitEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT JavaUtilConcurrentTimeUnitEnum *JavaUtilConcurrentTimeUnitEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentTimeUnitEnum)

FOUNDATION_EXPORT JavaUtilConcurrentTimeUnitEnum *JavaUtilConcurrentTimeUnitEnum_values_[];

#define JavaUtilConcurrentTimeUnitEnum_NANOSECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_NANOSECONDS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, NANOSECONDS)

#define JavaUtilConcurrentTimeUnitEnum_MICROSECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MICROSECONDS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, MICROSECONDS)

#define JavaUtilConcurrentTimeUnitEnum_MILLISECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MILLISECONDS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, MILLISECONDS)

#define JavaUtilConcurrentTimeUnitEnum_SECONDS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_SECONDS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, SECONDS)

#define JavaUtilConcurrentTimeUnitEnum_MINUTES JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_MINUTES]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, MINUTES)

#define JavaUtilConcurrentTimeUnitEnum_HOURS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_HOURS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, HOURS)

#define JavaUtilConcurrentTimeUnitEnum_DAYS JavaUtilConcurrentTimeUnitEnum_values_[JavaUtilConcurrentTimeUnit_DAYS]
J2OBJC_ENUM_CONSTANT_GETTER(JavaUtilConcurrentTimeUnitEnum, DAYS)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C0, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C1, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C2, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C3, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C4, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C5, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, C6, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentTimeUnitEnum, MAX, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentTimeUnitEnum_xWithLong_withLong_withLong_(jlong d, jlong m, jlong over);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentTimeUnitEnum)

#endif // _JavaUtilConcurrentTimeUnit_H_