//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECPublicKeySpec.java
//

#ifndef _JavaSecuritySpecECPublicKeySpec_H_
#define _JavaSecuritySpecECPublicKeySpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/KeySpec.h"

@class JavaSecuritySpecECParameterSpec;
@class JavaSecuritySpecECPoint;

@interface JavaSecuritySpecECPublicKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

- (instancetype)initWithJavaSecuritySpecECPoint:(JavaSecuritySpecECPoint *)w
            withJavaSecuritySpecECParameterSpec:(JavaSecuritySpecECParameterSpec *)params;

- (JavaSecuritySpecECParameterSpec *)getParams;

- (JavaSecuritySpecECPoint *)getW;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECPublicKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecECPublicKeySpec_initWithJavaSecuritySpecECPoint_withJavaSecuritySpecECParameterSpec_(JavaSecuritySpecECPublicKeySpec *self, JavaSecuritySpecECPoint *w, JavaSecuritySpecECParameterSpec *params);

FOUNDATION_EXPORT JavaSecuritySpecECPublicKeySpec *new_JavaSecuritySpecECPublicKeySpec_initWithJavaSecuritySpecECPoint_withJavaSecuritySpecECParameterSpec_(JavaSecuritySpecECPoint *w, JavaSecuritySpecECParameterSpec *params) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECPublicKeySpec)

#endif // _JavaSecuritySpecECPublicKeySpec_H_
