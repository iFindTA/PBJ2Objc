//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1SetOf.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1SetOf_H_
#define _OrgApacheHarmonySecurityAsn1ASN1SetOf_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1ValueCollection.h"

@class OrgApacheHarmonySecurityAsn1ASN1Type;
@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

@interface OrgApacheHarmonySecurityAsn1ASN1SetOf : OrgApacheHarmonySecurityAsn1ASN1ValueCollection

#pragma mark Public

- (instancetype)initWithOrgApacheHarmonySecurityAsn1ASN1Type:(OrgApacheHarmonySecurityAsn1ASN1Type *)type;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1SetOf)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1SetOf_initWithOrgApacheHarmonySecurityAsn1ASN1Type_(OrgApacheHarmonySecurityAsn1ASN1SetOf *self, OrgApacheHarmonySecurityAsn1ASN1Type *type);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1ASN1SetOf *new_OrgApacheHarmonySecurityAsn1ASN1SetOf_initWithOrgApacheHarmonySecurityAsn1ASN1Type_(OrgApacheHarmonySecurityAsn1ASN1Type *type) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1SetOf)

#endif // _OrgApacheHarmonySecurityAsn1ASN1SetOf_H_
