//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1ValueCollection.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1ValueCollection_H_
#define _OrgApacheHarmonySecurityAsn1ASN1ValueCollection_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Constructed.h"

@class OrgApacheHarmonySecurityAsn1ASN1Type;
@protocol JavaUtilCollection;

@interface OrgApacheHarmonySecurityAsn1ASN1ValueCollection : OrgApacheHarmonySecurityAsn1ASN1Constructed {
 @public
  OrgApacheHarmonySecurityAsn1ASN1Type *type_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)tagNumber
withOrgApacheHarmonySecurityAsn1ASN1Type:(OrgApacheHarmonySecurityAsn1ASN1Type *)type;

- (id<JavaUtilCollection>)getValuesWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1ValueCollection)

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1ASN1ValueCollection, type_, OrgApacheHarmonySecurityAsn1ASN1Type *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1ValueCollection_initWithInt_withOrgApacheHarmonySecurityAsn1ASN1Type_(OrgApacheHarmonySecurityAsn1ASN1ValueCollection *self, jint tagNumber, OrgApacheHarmonySecurityAsn1ASN1Type *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1ValueCollection)

#endif // _OrgApacheHarmonySecurityAsn1ASN1ValueCollection_H_
