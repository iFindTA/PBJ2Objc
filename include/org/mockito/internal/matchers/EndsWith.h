//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/EndsWith.java
//

#ifndef _OrgMockitoInternalMatchersEndsWith_H_
#define _OrgMockitoInternalMatchersEndsWith_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersEndsWith : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)suffix;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersEndsWith)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersEndsWith_initWithNSString_(OrgMockitoInternalMatchersEndsWith *self, NSString *suffix);

FOUNDATION_EXPORT OrgMockitoInternalMatchersEndsWith *new_OrgMockitoInternalMatchersEndsWith_initWithNSString_(NSString *suffix) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersEndsWith)

#endif // _OrgMockitoInternalMatchersEndsWith_H_
