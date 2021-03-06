//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/Certificate.java
//

#ifndef _JavaSecurityCertCertificate_H_
#define _JavaSecurityCertCertificate_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSByteArray;
@protocol JavaSecurityPublicKey;

@interface JavaSecurityCertCertificate : NSObject < JavaIoSerializable >

#pragma mark Public

- (jboolean)isEqual:(id)other;

- (IOSByteArray *)getEncoded;

- (id<JavaSecurityPublicKey>)getPublicKey;

- (NSString *)getType;

- (NSUInteger)hash;

- (NSString *)description;

- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key;

- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key
                           withNSString:(NSString *)sigProvider;

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)type;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificate)

FOUNDATION_EXPORT void JavaSecurityCertCertificate_initWithNSString_(JavaSecurityCertCertificate *self, NSString *type);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificate)

@interface JavaSecurityCertCertificate_CertificateRep : NSObject < JavaIoSerializable >

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)type
                   withByteArray:(IOSByteArray *)data;

- (id)readResolve;

@end

J2OBJC_STATIC_INIT(JavaSecurityCertCertificate_CertificateRep)

FOUNDATION_EXPORT void JavaSecurityCertCertificate_CertificateRep_initWithNSString_withByteArray_(JavaSecurityCertCertificate_CertificateRep *self, NSString *type, IOSByteArray *data);

FOUNDATION_EXPORT JavaSecurityCertCertificate_CertificateRep *new_JavaSecurityCertCertificate_CertificateRep_initWithNSString_withByteArray_(NSString *type, IOSByteArray *data) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificate_CertificateRep)

#endif // _JavaSecurityCertCertificate_H_
