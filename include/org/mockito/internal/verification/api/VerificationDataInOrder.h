//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/api/VerificationDataInOrder.java
//

#ifndef _OrgMockitoInternalVerificationApiVerificationDataInOrder_H_
#define _OrgMockitoInternalVerificationApiVerificationDataInOrder_H_

#include "J2ObjC_header.h"

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder < NSObject, JavaObject >

- (id<JavaUtilList>)getAllInvocations;

- (OrgMockitoInternalInvocationInvocationMatcher *)getWanted;

- (id<OrgMockitoInternalVerificationApiInOrderContext>)getOrderingContext;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationApiVerificationDataInOrder)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationApiVerificationDataInOrder)

#endif // _OrgMockitoInternalVerificationApiVerificationDataInOrder_H_
