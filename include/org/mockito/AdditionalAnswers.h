//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/AdditionalAnswers.java
//

#ifndef _OrgMockitoAdditionalAnswers_H_
#define _OrgMockitoAdditionalAnswers_H_

#include "J2ObjC_header.h"

@protocol JavaUtilCollection;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoAdditionalAnswers : NSObject

#pragma mark Public

- (instancetype)init;

+ (id<OrgMockitoStubbingAnswer>)delegatesToWithId:(id)delegate;

+ (id<OrgMockitoStubbingAnswer>)returnsArgAtWithInt:(jint)position;

+ (id<OrgMockitoStubbingAnswer>)returnsElementsOfWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

+ (id<OrgMockitoStubbingAnswer>)returnsFirstArg;

+ (id<OrgMockitoStubbingAnswer>)returnsLastArg;

+ (id<OrgMockitoStubbingAnswer>)returnsSecondArg;

@end

J2OBJC_STATIC_INIT(OrgMockitoAdditionalAnswers)

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsFirstArg();

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsSecondArg();

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsLastArg();

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsArgAtWithInt_(jint position);

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_delegatesToWithId_(id delegate);

FOUNDATION_EXPORT id<OrgMockitoStubbingAnswer> OrgMockitoAdditionalAnswers_returnsElementsOfWithJavaUtilCollection_(id<JavaUtilCollection> elements);

FOUNDATION_EXPORT void OrgMockitoAdditionalAnswers_init(OrgMockitoAdditionalAnswers *self);

FOUNDATION_EXPORT OrgMockitoAdditionalAnswers *new_OrgMockitoAdditionalAnswers_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoAdditionalAnswers)

#endif // _OrgMockitoAdditionalAnswers_H_
