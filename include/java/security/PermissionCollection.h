//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/PermissionCollection.java
//

#ifndef _JavaSecurityPermissionCollection_H_
#define _JavaSecurityPermissionCollection_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class JavaSecurityPermission;
@protocol JavaUtilEnumeration;

@interface JavaSecurityPermissionCollection : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (void)addWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (id<JavaUtilEnumeration>)elements;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (jboolean)isReadOnly;

- (void)setReadOnly;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPermissionCollection)

FOUNDATION_EXPORT void JavaSecurityPermissionCollection_init(JavaSecurityPermissionCollection *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPermissionCollection)

#endif // _JavaSecurityPermissionCollection_H_
