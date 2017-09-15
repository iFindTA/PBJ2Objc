//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/VerificationModeFactory.java
//

#ifndef _OrgMockitoInternalVerificationVerificationModeFactory_H_
#define _OrgMockitoInternalVerificationVerificationModeFactory_H_

#include "J2ObjC_header.h"

@class OrgMockitoInternalVerificationCalls;
@class OrgMockitoInternalVerificationNoMoreInteractions;
@class OrgMockitoInternalVerificationTimes;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoInternalVerificationVerificationModeFactory : NSObject

#pragma mark Public

- (instancetype)init;

+ (id<OrgMockitoVerificationVerificationMode>)atLeastWithInt:(jint)minNumberOfInvocations;

+ (id<OrgMockitoVerificationVerificationMode>)atLeastOnce;

+ (id<OrgMockitoVerificationVerificationMode>)atMostWithInt:(jint)maxNumberOfInvocations;

+ (OrgMockitoInternalVerificationCalls *)callsWithInt:(jint)wantedNumberOfInvocations;

+ (OrgMockitoInternalVerificationNoMoreInteractions *)noMoreInteractions;

+ (id<OrgMockitoVerificationVerificationMode>)only;

+ (OrgMockitoInternalVerificationTimes *)timesWithInt:(jint)wantedNumberOfInvocations;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationVerificationModeFactory)

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoInternalVerificationVerificationModeFactory_atLeastOnce();

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoInternalVerificationVerificationModeFactory_atLeastWithInt_(jint minNumberOfInvocations);

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoInternalVerificationVerificationModeFactory_only();

FOUNDATION_EXPORT OrgMockitoInternalVerificationTimes *OrgMockitoInternalVerificationVerificationModeFactory_timesWithInt_(jint wantedNumberOfInvocations);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCalls *OrgMockitoInternalVerificationVerificationModeFactory_callsWithInt_(jint wantedNumberOfInvocations);

FOUNDATION_EXPORT OrgMockitoInternalVerificationNoMoreInteractions *OrgMockitoInternalVerificationVerificationModeFactory_noMoreInteractions();

FOUNDATION_EXPORT id<OrgMockitoVerificationVerificationMode> OrgMockitoInternalVerificationVerificationModeFactory_atMostWithInt_(jint maxNumberOfInvocations);

FOUNDATION_EXPORT void OrgMockitoInternalVerificationVerificationModeFactory_init(OrgMockitoInternalVerificationVerificationModeFactory *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationVerificationModeFactory *new_OrgMockitoInternalVerificationVerificationModeFactory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationVerificationModeFactory)

#endif // _OrgMockitoInternalVerificationVerificationModeFactory_H_
