//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/NumberOfInvocationsInOrderChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_H_
#define _OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_H_

#include "J2ObjC_header.h"

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

@interface OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_init(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *self, OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker)

#endif // _OrgMockitoInternalVerificationCheckersNumberOfInvocationsInOrderChecker_H_