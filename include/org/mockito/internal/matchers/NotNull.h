//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/NotNull.java
//

#ifndef _OrgMockitoInternalMatchersNotNull_H_
#define _OrgMockitoInternalMatchersNotNull_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersNotNull : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersNotNull)

FOUNDATION_EXPORT OrgMockitoInternalMatchersNotNull *OrgMockitoInternalMatchersNotNull_NOT_NULL_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersNotNull, NOT_NULL_, OrgMockitoInternalMatchersNotNull *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersNotNull)

#endif // _OrgMockitoInternalMatchersNotNull_H_
