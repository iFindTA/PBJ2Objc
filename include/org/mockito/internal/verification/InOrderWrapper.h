//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/InOrderWrapper.java
//

#ifndef _OrgMockitoInternalVerificationInOrderWrapper_H_
#define _OrgMockitoInternalVerificationInOrderWrapper_H_

#include "J2ObjC_header.h"
#include "org/mockito/verification/VerificationMode.h"

@class OrgMockitoInternalInOrderImpl;
@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationInOrderMode;

@interface OrgMockitoInternalVerificationInOrderWrapper : NSObject < OrgMockitoVerificationVerificationMode >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalVerificationApiVerificationInOrderMode:(id<OrgMockitoInternalVerificationApiVerificationInOrderMode>)mode
                                               withOrgMockitoInternalInOrderImpl:(OrgMockitoInternalInOrderImpl *)inOrder;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationInOrderWrapper)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationInOrderWrapper_initWithOrgMockitoInternalVerificationApiVerificationInOrderMode_withOrgMockitoInternalInOrderImpl_(OrgMockitoInternalVerificationInOrderWrapper *self, id<OrgMockitoInternalVerificationApiVerificationInOrderMode> mode, OrgMockitoInternalInOrderImpl *inOrder);

FOUNDATION_EXPORT OrgMockitoInternalVerificationInOrderWrapper *new_OrgMockitoInternalVerificationInOrderWrapper_initWithOrgMockitoInternalVerificationApiVerificationInOrderMode_withOrgMockitoInternalInOrderImpl_(id<OrgMockitoInternalVerificationApiVerificationInOrderMode> mode, OrgMockitoInternalInOrderImpl *inOrder) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationInOrderWrapper)

#endif // _OrgMockitoInternalVerificationInOrderWrapper_H_
