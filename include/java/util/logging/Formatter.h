//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/Formatter.java
//

#ifndef _JavaUtilLoggingFormatter_H_
#define _JavaUtilLoggingFormatter_H_

#include "J2ObjC_header.h"

@class JavaUtilLoggingHandler;
@class JavaUtilLoggingLogRecord;

@interface JavaUtilLoggingFormatter : NSObject

#pragma mark Public

- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)r;

- (NSString *)formatMessageWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)r;

- (NSString *)getHeadWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)h;

- (NSString *)getTailWithJavaUtilLoggingHandler:(JavaUtilLoggingHandler *)h;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingFormatter)

FOUNDATION_EXPORT void JavaUtilLoggingFormatter_init(JavaUtilLoggingFormatter *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingFormatter)

#endif // _JavaUtilLoggingFormatter_H_
