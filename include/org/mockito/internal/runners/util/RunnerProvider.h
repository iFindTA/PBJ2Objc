//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/testing/mockito/build_result/java/org/mockito/internal/runners/util/RunnerProvider.java
//

#ifndef _OrgMockitoInternalRunnersUtilRunnerProvider_H_
#define _OrgMockitoInternalRunnersUtilRunnerProvider_H_

#include "J2ObjC_header.h"

@class IOSClass;
@protocol OrgMockitoInternalRunnersRunnerImpl;

@interface OrgMockitoInternalRunnersUtilRunnerProvider : NSObject

#pragma mark Public

- (instancetype)init;

- (jboolean)isJUnit45OrHigherAvailable;

- (id<OrgMockitoInternalRunnersRunnerImpl>)newInstanceWithNSString:(NSString *)runnerClassName
                                                      withIOSClass:(IOSClass *)constructorParam OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalRunnersUtilRunnerProvider)

FOUNDATION_EXPORT void OrgMockitoInternalRunnersUtilRunnerProvider_init(OrgMockitoInternalRunnersUtilRunnerProvider *self);

FOUNDATION_EXPORT OrgMockitoInternalRunnersUtilRunnerProvider *new_OrgMockitoInternalRunnersUtilRunnerProvider_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersUtilRunnerProvider)

#endif // _OrgMockitoInternalRunnersUtilRunnerProvider_H_
