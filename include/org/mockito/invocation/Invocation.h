//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/invocation/Invocation.java
//

#ifndef _OrgMockitoInvocationInvocation_H_
#define _OrgMockitoInvocationInvocation_H_

#include "J2ObjC_header.h"
#include "org/mockito/invocation/DescribedInvocation.h"
#include "org/mockito/invocation/InvocationOnMock.h"

@class IOSObjectArray;
@protocol OrgMockitoInvocationLocation;
@protocol OrgMockitoInvocationStubInfo;

@protocol OrgMockitoInvocationInvocation < OrgMockitoInvocationInvocationOnMock, OrgMockitoInvocationDescribedInvocation, NSObject, JavaObject >

- (jboolean)isVerified;

- (jint)getSequenceNumber;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (IOSObjectArray *)getRawArguments;

- (void)markVerified;

- (id<OrgMockitoInvocationStubInfo>)stubInfo;

- (void)markStubbedWithOrgMockitoInvocationStubInfo:(id<OrgMockitoInvocationStubInfo>)stubInfo;

- (jboolean)isIgnoredForVerification;

- (void)ignoreForVerification;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationInvocation)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationInvocation)

#endif // _OrgMockitoInvocationInvocation_H_
