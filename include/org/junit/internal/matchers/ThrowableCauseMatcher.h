//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/org/junit/internal/matchers/ThrowableCauseMatcher.java
//

#ifndef _OrgJunitInternalMatchersThrowableCauseMatcher_H_
#define _OrgJunitInternalMatchersThrowableCauseMatcher_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/TypeSafeMatcher.h"

@class JavaLangThrowable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgJunitInternalMatchersThrowableCauseMatcher : OrgHamcrestTypeSafeMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)hasCauseWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

#pragma mark Protected

- (void)describeMismatchSafelyWithId:(JavaLangThrowable *)item
          withOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesSafelyWithId:(JavaLangThrowable *)item;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalMatchersThrowableCauseMatcher)

FOUNDATION_EXPORT void OrgJunitInternalMatchersThrowableCauseMatcher_initWithOrgHamcrestMatcher_(OrgJunitInternalMatchersThrowableCauseMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalMatchersThrowableCauseMatcher *new_OrgJunitInternalMatchersThrowableCauseMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgJunitInternalMatchersThrowableCauseMatcher_hasCauseWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalMatchersThrowableCauseMatcher)

#endif // _OrgJunitInternalMatchersThrowableCauseMatcher_H_