//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/NoMoreInteractions.java
//

#ifndef _OrgMockitoInternalVerificationNoMoreInteractions_H_
#define _OrgMockitoInternalVerificationNoMoreInteractions_H_

#include "J2ObjC_header.h"
#include "org/mockito/internal/verification/api/VerificationInOrderMode.h"
#include "org/mockito/verification/VerificationMode.h"

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder;

@interface OrgMockitoInternalVerificationNoMoreInteractions : NSObject < OrgMockitoVerificationVerificationMode, OrgMockitoInternalVerificationApiVerificationInOrderMode >

#pragma mark Public

- (instancetype)init;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)verifyInOrderWithOrgMockitoInternalVerificationApiVerificationDataInOrder:(id<OrgMockitoInternalVerificationApiVerificationDataInOrder>)data;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationNoMoreInteractions)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationNoMoreInteractions_init(OrgMockitoInternalVerificationNoMoreInteractions *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationNoMoreInteractions *new_OrgMockitoInternalVerificationNoMoreInteractions_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationNoMoreInteractions)

#endif // _OrgMockitoInternalVerificationNoMoreInteractions_H_
