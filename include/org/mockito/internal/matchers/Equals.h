//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Equals.java
//

#ifndef _OrgMockitoInternalMatchersEquals_H_
#define _OrgMockitoInternalMatchersEquals_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"
#include "org/mockito/internal/matchers/ContainsExtraTypeInformation.h"

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestSelfDescribing;

@interface OrgMockitoInternalMatchersEquals : OrgMockitoArgumentMatcher < OrgMockitoInternalMatchersContainsExtraTypeInformation, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithId:(id)wanted;

- (NSString *)describeWithId:(id)object;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)matchesWithId:(id)actual;

- (jboolean)typeMatchesWithId:(id)object;

- (id<OrgHamcrestSelfDescribing>)withExtraTypeInfo;

#pragma mark Protected

- (id)getWanted;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersEquals)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersEquals_initWithId_(OrgMockitoInternalMatchersEquals *self, id wanted);

FOUNDATION_EXPORT OrgMockitoInternalMatchersEquals *new_OrgMockitoInternalMatchersEquals_initWithId_(id wanted) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersEquals)

#endif // _OrgMockitoInternalMatchersEquals_H_
