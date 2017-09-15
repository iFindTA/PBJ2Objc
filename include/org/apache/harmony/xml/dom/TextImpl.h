//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/TextImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomTextImpl_H_
#define _OrgApacheHarmonyXmlDomTextImpl_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/CharacterDataImpl.h"
#include "org/w3c/dom/Text.h"

@class OrgApacheHarmonyXmlDomDocumentImpl;

@interface OrgApacheHarmonyXmlDomTextImpl : OrgApacheHarmonyXmlDomCharacterDataImpl < OrgW3cDomText >

#pragma mark Public

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)data;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getWholeText;

- (jboolean)isElementContentWhitespace;

- (OrgApacheHarmonyXmlDomTextImpl *)minimize;

- (id<OrgW3cDomText>)replaceWholeTextWithNSString:(NSString *)content;

- (id<OrgW3cDomText>)splitTextWithInt:(jint)offset;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomTextImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomTextImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomTextImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *data);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomTextImpl *new_OrgApacheHarmonyXmlDomTextImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *data) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomTextImpl)

#endif // _OrgApacheHarmonyXmlDomTextImpl_H_