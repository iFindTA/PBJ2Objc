//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/NonGreedyNumberOfInvocationsInOrderChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_H_
#define _OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_H_

#include "J2ObjC_header.h"

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMarker;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

@interface OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter
                     withOrgMockitoInternalInvocationInvocationMarker:(OrgMockitoInternalInvocationInvocationMarker *)marker;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_init(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationMarker_(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *self, OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationMarker *marker);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationMarker_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationMarker *marker) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker)

#endif // _OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_H_
