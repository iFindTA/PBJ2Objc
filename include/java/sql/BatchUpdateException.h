//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/BatchUpdateException.java
//

#ifndef _JavaSqlBatchUpdateException_H_
#define _JavaSqlBatchUpdateException_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/sql/SQLException.h"

@class IOSIntArray;
@class JavaLangThrowable;

@interface JavaSqlBatchUpdateException : JavaSqlSQLException < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithIntArray:(IOSIntArray *)updateCounts;

- (instancetype)initWithIntArray:(IOSIntArray *)updateCounts
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withIntArray:(IOSIntArray *)updateCounts;

- (instancetype)initWithNSString:(NSString *)reason
                    withIntArray:(IOSIntArray *)updateCounts
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode
                    withIntArray:(IOSIntArray *)updateCounts;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode
                    withIntArray:(IOSIntArray *)updateCounts
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                    withIntArray:(IOSIntArray *)updateCounts;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                    withIntArray:(IOSIntArray *)updateCounts
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

- (IOSIntArray *)getUpdateCounts;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlBatchUpdateException)

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_init(JavaSqlBatchUpdateException *self);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithJavaLangThrowable_(JavaSqlBatchUpdateException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithIntArray_withJavaLangThrowable_(IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withIntArray_withJavaLangThrowable_(NSString *reason, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_withJavaLangThrowable_(NSString *reason, NSString *SQLState, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_withJavaLangThrowable_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithIntArray_(JavaSqlBatchUpdateException *self, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithIntArray_(IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withIntArray_(NSString *reason, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withIntArray_(NSString *reason, NSString *SQLState, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_(JavaSqlBatchUpdateException *self, NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts);

FOUNDATION_EXPORT JavaSqlBatchUpdateException *new_JavaSqlBatchUpdateException_initWithNSString_withNSString_withInt_withIntArray_(NSString *reason, NSString *SQLState, jint vendorCode, IOSIntArray *updateCounts) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlBatchUpdateException)

#endif // _JavaSqlBatchUpdateException_H_