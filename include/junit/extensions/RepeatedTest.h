//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/junit/extensions/RepeatedTest.java
//

#ifndef _JunitExtensionsRepeatedTest_H_
#define _JunitExtensionsRepeatedTest_H_

#include "J2ObjC_header.h"
#include "junit/extensions/TestDecorator.h"

@class JunitFrameworkTestResult;
@protocol JunitFrameworkTest;

@interface JunitExtensionsRepeatedTest : JunitExtensionsTestDecorator

#pragma mark Public

- (instancetype)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                                   withInt:(jint)repeat;

- (jint)countTestCases;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitExtensionsRepeatedTest)

FOUNDATION_EXPORT void JunitExtensionsRepeatedTest_initWithJunitFrameworkTest_withInt_(JunitExtensionsRepeatedTest *self, id<JunitFrameworkTest> test, jint repeat);

FOUNDATION_EXPORT JunitExtensionsRepeatedTest *new_JunitExtensionsRepeatedTest_initWithJunitFrameworkTest_withInt_(id<JunitFrameworkTest> test, jint repeat) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JunitExtensionsRepeatedTest)

#endif // _JunitExtensionsRepeatedTest_H_
