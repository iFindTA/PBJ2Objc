//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/org/junit/internal/runners/MethodValidator.java
//

#ifndef _OrgJunitInternalRunnersMethodValidator_H_
#define _OrgJunitInternalRunnersMethodValidator_H_

#include "J2ObjC_header.h"

@class OrgJunitInternalRunnersTestClass;
@protocol JavaUtilList;

@interface OrgJunitInternalRunnersMethodValidator : NSObject

#pragma mark Public

- (instancetype)initWithOrgJunitInternalRunnersTestClass:(OrgJunitInternalRunnersTestClass *)testClass;

- (void)assertValid;

- (void)validateInstanceMethods;

- (id<JavaUtilList>)validateMethodsForDefaultRunner;

- (void)validateNoArgConstructor;

- (void)validateStaticMethods;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersMethodValidator)

FOUNDATION_EXPORT void OrgJunitInternalRunnersMethodValidator_initWithOrgJunitInternalRunnersTestClass_(OrgJunitInternalRunnersMethodValidator *self, OrgJunitInternalRunnersTestClass *testClass);

FOUNDATION_EXPORT OrgJunitInternalRunnersMethodValidator *new_OrgJunitInternalRunnersMethodValidator_initWithOrgJunitInternalRunnersTestClass_(OrgJunitInternalRunnersTestClass *testClass) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersMethodValidator)

#endif // _OrgJunitInternalRunnersMethodValidator_H_
