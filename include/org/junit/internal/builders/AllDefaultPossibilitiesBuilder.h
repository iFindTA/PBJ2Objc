//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/org/junit/internal/builders/AllDefaultPossibilitiesBuilder.java
//

#ifndef _OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder_H_
#define _OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder_H_

#include "J2ObjC_header.h"
#include "org/junit/runners/model/RunnerBuilder.h"

@class IOSClass;
@class OrgJunitInternalBuildersAnnotatedBuilder;
@class OrgJunitInternalBuildersIgnoredBuilder;
@class OrgJunitInternalBuildersJUnit3Builder;
@class OrgJunitInternalBuildersJUnit4Builder;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder : OrgJunitRunnersModelRunnerBuilder

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)canUseSuiteMethod;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

#pragma mark Protected

- (OrgJunitInternalBuildersAnnotatedBuilder *)annotatedBuilder;

- (OrgJunitInternalBuildersIgnoredBuilder *)ignoredBuilder;

- (OrgJunitInternalBuildersJUnit3Builder *)junit3Builder;

- (OrgJunitInternalBuildersJUnit4Builder *)junit4Builder;

- (OrgJunitRunnersModelRunnerBuilder *)suiteMethodBuilder;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder)

FOUNDATION_EXPORT void OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder_initWithBoolean_(OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder *self, jboolean canUseSuiteMethod);

FOUNDATION_EXPORT OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder *new_OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder_initWithBoolean_(jboolean canUseSuiteMethod) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder)

#endif // _OrgJunitInternalBuildersAllDefaultPossibilitiesBuilder_H_
