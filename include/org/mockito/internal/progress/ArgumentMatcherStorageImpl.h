//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/progress/ArgumentMatcherStorageImpl.java
//

#ifndef _OrgMockitoInternalProgressArgumentMatcherStorageImpl_H_
#define _OrgMockitoInternalProgressArgumentMatcherStorageImpl_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/progress/ArgumentMatcherStorage.h"

@class OrgMockitoInternalProgressHandyReturnValues;
@protocol JavaUtilList;
@protocol OrgHamcrestMatcher;

#define OrgMockitoInternalProgressArgumentMatcherStorageImpl_TWO_SUB_MATCHERS 2
#define OrgMockitoInternalProgressArgumentMatcherStorageImpl_ONE_SUB_MATCHER 1

@interface OrgMockitoInternalProgressArgumentMatcherStorageImpl : NSObject < OrgMockitoInternalProgressArgumentMatcherStorage >

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilList>)pullLocalizedMatchers;

- (OrgMockitoInternalProgressHandyReturnValues *)reportAnd;

- (OrgMockitoInternalProgressHandyReturnValues *)reportMatcherWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgMockitoInternalProgressHandyReturnValues *)reportNot;

- (OrgMockitoInternalProgressHandyReturnValues *)reportOr;

- (void)reset;

- (void)validateState;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalProgressArgumentMatcherStorageImpl)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalProgressArgumentMatcherStorageImpl, TWO_SUB_MATCHERS, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalProgressArgumentMatcherStorageImpl, ONE_SUB_MATCHER, jint)

FOUNDATION_EXPORT void OrgMockitoInternalProgressArgumentMatcherStorageImpl_init(OrgMockitoInternalProgressArgumentMatcherStorageImpl *self);

FOUNDATION_EXPORT OrgMockitoInternalProgressArgumentMatcherStorageImpl *new_OrgMockitoInternalProgressArgumentMatcherStorageImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressArgumentMatcherStorageImpl)

#endif // _OrgMockitoInternalProgressArgumentMatcherStorageImpl_H_
