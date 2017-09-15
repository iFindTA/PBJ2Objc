//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLRecoverableException.java
//

#ifndef _JavaSqlSQLRecoverableException_H_
#define _JavaSqlSQLRecoverableException_H_

#include "J2ObjC_header.h"
#include "java/sql/SQLException.h"

@class JavaLangThrowable;

@interface JavaSqlSQLRecoverableException : JavaSqlSQLException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)reason;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLRecoverableException)

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_init(JavaSqlSQLRecoverableException *self);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_(JavaSqlSQLRecoverableException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withNSString_(JavaSqlSQLRecoverableException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_(JavaSqlSQLRecoverableException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithJavaLangThrowable_(JavaSqlSQLRecoverableException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLRecoverableException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLRecoverableException *self, NSString *reason, NSString *sqlState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *sqlState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLRecoverableException *self, NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLRecoverableException *new_JavaSqlSQLRecoverableException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *sqlState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLRecoverableException)

#endif // _JavaSqlSQLRecoverableException_H_
