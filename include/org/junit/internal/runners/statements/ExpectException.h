//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/org/junit/internal/runners/statements/ExpectException.java
//

#ifndef _OrgJunitInternalRunnersStatementsExpectException_H_
#define _OrgJunitInternalRunnersStatementsExpectException_H_

#include "J2ObjC_header.h"
#include "org/junit/runners/model/Statement.h"

@class IOSClass;

@interface OrgJunitInternalRunnersStatementsExpectException : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)next
                                         withIOSClass:(IOSClass *)expected;

- (void)evaluate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersStatementsExpectException)

FOUNDATION_EXPORT void OrgJunitInternalRunnersStatementsExpectException_initWithOrgJunitRunnersModelStatement_withIOSClass_(OrgJunitInternalRunnersStatementsExpectException *self, OrgJunitRunnersModelStatement *next, IOSClass *expected);

FOUNDATION_EXPORT OrgJunitInternalRunnersStatementsExpectException *new_OrgJunitInternalRunnersStatementsExpectException_initWithOrgJunitRunnersModelStatement_withIOSClass_(OrgJunitRunnersModelStatement *next, IOSClass *expected) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersStatementsExpectException)

#endif // _OrgJunitInternalRunnersStatementsExpectException_H_
