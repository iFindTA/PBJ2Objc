//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/reflect/Element.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonReflectElement_INCLUDE_ALL")
#if ComGoogleCommonReflectElement_RESTRICT
#define ComGoogleCommonReflectElement_INCLUDE_ALL 0
#else
#define ComGoogleCommonReflectElement_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectElement_RESTRICT

#if !defined (_ComGoogleCommonReflectElement_) && (ComGoogleCommonReflectElement_INCLUDE_ALL || ComGoogleCommonReflectElement_INCLUDE)
#define _ComGoogleCommonReflectElement_

#define JavaLangReflectAccessibleObject_RESTRICT 1
#define JavaLangReflectAccessibleObject_INCLUDE 1
#include "java/lang/reflect/AccessibleObject.h"

#define JavaLangReflectMember_RESTRICT 1
#define JavaLangReflectMember_INCLUDE 1
#include "java/lang/reflect/Member.h"

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangAnnotationAnnotation;

@interface ComGoogleCommonReflectElement : JavaLangReflectAccessibleObject < JavaLangReflectMember >

#pragma mark Public

- (jboolean)isEqual:(id)obj;

- (id)getAnnotationWithIOSClass:(IOSClass *)annotationClass;

- (IOSObjectArray *)getAnnotations;

- (IOSObjectArray *)getDeclaredAnnotations;

- (IOSClass *)getDeclaringClass;

- (jint)getModifiers;

- (NSString *)getName;

- (ComGoogleCommonReflectTypeToken *)getOwnerType;

- (NSUInteger)hash;

- (jboolean)isAbstract;

- (jboolean)isAccessible;

- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationClass;

- (jboolean)isFinal;

- (jboolean)isNative;

- (jboolean)isPackagePrivate;

- (jboolean)isPrivate;

- (jboolean)isProtected;

- (jboolean)isPublic;

- (jboolean)isStatic;

- (jboolean)isSynchronized;

- (jboolean)isSynthetic;

- (void)setAccessibleWithBoolean:(jboolean)flag;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithJavaLangReflectAccessibleObject:(JavaLangReflectAccessibleObject<JavaLangReflectMember> *)member;

- (jboolean)isTransient;

- (jboolean)isVolatile;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectElement)

FOUNDATION_EXPORT void ComGoogleCommonReflectElement_initWithJavaLangReflectAccessibleObject_(ComGoogleCommonReflectElement *self, JavaLangReflectAccessibleObject<JavaLangReflectMember> *member);

FOUNDATION_EXPORT ComGoogleCommonReflectElement *new_ComGoogleCommonReflectElement_initWithJavaLangReflectAccessibleObject_(JavaLangReflectAccessibleObject<JavaLangReflectMember> *member) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectElement)

#endif

#pragma pop_macro("ComGoogleCommonReflectElement_INCLUDE_ALL")
