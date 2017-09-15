//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/org/hamcrest/TypeSafeDiagnosingMatcher.java
//

#ifndef _OrgHamcrestTypeSafeDiagnosingMatcher_H_
#define _OrgHamcrestTypeSafeDiagnosingMatcher_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@class IOSClass;
@class OrgHamcrestInternalReflectiveTypeFinder;
@protocol OrgHamcrestDescription;

@interface OrgHamcrestTypeSafeDiagnosingMatcher : OrgHamcrestBaseMatcher

#pragma mark Public

- (void)describeMismatchWithId:(id)item
    withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

- (jboolean)matchesWithId:(id)item;

#pragma mark Protected

- (instancetype)init;

- (instancetype)initWithIOSClass:(IOSClass *)expectedType;

- (instancetype)initWithOrgHamcrestInternalReflectiveTypeFinder:(OrgHamcrestInternalReflectiveTypeFinder *)typeFinder;

- (jboolean)matchesSafelyWithId:(id)item
     withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

@end

J2OBJC_STATIC_INIT(OrgHamcrestTypeSafeDiagnosingMatcher)

FOUNDATION_EXPORT void OrgHamcrestTypeSafeDiagnosingMatcher_initWithIOSClass_(OrgHamcrestTypeSafeDiagnosingMatcher *self, IOSClass *expectedType);

FOUNDATION_EXPORT void OrgHamcrestTypeSafeDiagnosingMatcher_initWithOrgHamcrestInternalReflectiveTypeFinder_(OrgHamcrestTypeSafeDiagnosingMatcher *self, OrgHamcrestInternalReflectiveTypeFinder *typeFinder);

FOUNDATION_EXPORT void OrgHamcrestTypeSafeDiagnosingMatcher_init(OrgHamcrestTypeSafeDiagnosingMatcher *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestTypeSafeDiagnosingMatcher)

#endif // _OrgHamcrestTypeSafeDiagnosingMatcher_H_
