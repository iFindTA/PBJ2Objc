//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/ArgumentMatcher.java
//

#ifndef _OrgMockitoArgumentMatcher_H_
#define _OrgMockitoArgumentMatcher_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoArgumentMatcher : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)init;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)argument;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoArgumentMatcher)

FOUNDATION_EXPORT void OrgMockitoArgumentMatcher_init(OrgMockitoArgumentMatcher *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoArgumentMatcher)

#endif // _OrgMockitoArgumentMatcher_H_
