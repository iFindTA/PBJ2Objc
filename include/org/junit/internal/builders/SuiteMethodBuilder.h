//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/org/junit/internal/builders/SuiteMethodBuilder.java
//

#ifndef _OrgJunitInternalBuildersSuiteMethodBuilder_H_
#define _OrgJunitInternalBuildersSuiteMethodBuilder_H_

#include "J2ObjC_header.h"
#include "org/junit/runners/model/RunnerBuilder.h"

@class IOSClass;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalBuildersSuiteMethodBuilder : OrgJunitRunnersModelRunnerBuilder

#pragma mark Public

- (instancetype)init;

- (jboolean)hasSuiteMethodWithIOSClass:(IOSClass *)testClass;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)each;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalBuildersSuiteMethodBuilder)

FOUNDATION_EXPORT void OrgJunitInternalBuildersSuiteMethodBuilder_init(OrgJunitInternalBuildersSuiteMethodBuilder *self);

FOUNDATION_EXPORT OrgJunitInternalBuildersSuiteMethodBuilder *new_OrgJunitInternalBuildersSuiteMethodBuilder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalBuildersSuiteMethodBuilder)

#endif // _OrgJunitInternalBuildersSuiteMethodBuilder_H_
