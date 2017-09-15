//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/org/junit/experimental/ParallelComputer.java
//

#ifndef _OrgJunitExperimentalParallelComputer_H_
#define _OrgJunitExperimentalParallelComputer_H_

#include "J2ObjC_header.h"
#include "org/junit/runner/Computer.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;

@interface OrgJunitExperimentalParallelComputer : OrgJunitRunnerComputer

#pragma mark Public

- (instancetype)initWithBoolean:(jboolean)classes
                    withBoolean:(jboolean)methods;

+ (OrgJunitRunnerComputer *)classes;

- (OrgJunitRunnerRunner *)getSuiteWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                      withIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerComputer *)methods;

#pragma mark Protected

- (OrgJunitRunnerRunner *)getRunnerWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                            withIOSClass:(IOSClass *)testClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalParallelComputer)

FOUNDATION_EXPORT void OrgJunitExperimentalParallelComputer_initWithBoolean_withBoolean_(OrgJunitExperimentalParallelComputer *self, jboolean classes, jboolean methods);

FOUNDATION_EXPORT OrgJunitExperimentalParallelComputer *new_OrgJunitExperimentalParallelComputer_initWithBoolean_withBoolean_(jboolean classes, jboolean methods) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitExperimentalParallelComputer_classes();

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitExperimentalParallelComputer_methods();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalParallelComputer)

#endif // _OrgJunitExperimentalParallelComputer_H_
