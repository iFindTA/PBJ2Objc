//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/junit/build_result/java/org/junit/experimental/theories/ParameterSignature.java
//

#ifndef _OrgJunitExperimentalTheoriesParameterSignature_H_
#define _OrgJunitExperimentalTheoriesParameterSignature_H_

#include "J2ObjC_header.h"

@class IOSClass;
@class JavaLangReflectConstructor;
@class JavaLangReflectMethod;
@class JavaUtilArrayList;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaUtilList;

@interface OrgJunitExperimentalTheoriesParameterSignature : NSObject

#pragma mark Public

- (jboolean)canAcceptArrayTypeWithIOSClass:(IOSClass *)type;

- (jboolean)canAcceptTypeWithIOSClass:(IOSClass *)candidate;

- (id)findDeepAnnotationWithIOSClass:(IOSClass *)annotationType;

- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (id<JavaUtilList>)getAnnotations;

- (IOSClass *)getType;

- (jboolean)hasAnnotationWithIOSClass:(IOSClass *)type;

+ (id<JavaUtilList>)signaturesWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)constructor;

+ (JavaUtilArrayList *)signaturesWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesParameterSignature)

FOUNDATION_EXPORT JavaUtilArrayList *OrgJunitExperimentalTheoriesParameterSignature_signaturesWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

FOUNDATION_EXPORT id<JavaUtilList> OrgJunitExperimentalTheoriesParameterSignature_signaturesWithJavaLangReflectConstructor_(JavaLangReflectConstructor *constructor);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesParameterSignature)

#endif // _OrgJunitExperimentalTheoriesParameterSignature_H_
