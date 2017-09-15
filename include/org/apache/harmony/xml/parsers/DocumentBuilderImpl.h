//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/parsers/DocumentBuilderImpl.java
//

#ifndef _OrgApacheHarmonyXmlParsersDocumentBuilderImpl_H_
#define _OrgApacheHarmonyXmlParsersDocumentBuilderImpl_H_

#include "J2ObjC_header.h"
#include "javax/xml/parsers/DocumentBuilder.h"

@class OrgXmlSaxInputSource;
@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDocument;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;

@interface OrgApacheHarmonyXmlParsersDocumentBuilderImpl : JavaxXmlParsersDocumentBuilder

#pragma mark Public

- (id<OrgW3cDomDOMImplementation>)getDOMImplementation;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (id<OrgW3cDomDocument>)newDocument OBJC_METHOD_FAMILY_NONE;

- (id<OrgW3cDomDocument>)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

- (void)reset;

- (void)setCoalescingWithBoolean:(jboolean)value;

- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)resolver;

- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;

- (void)setIgnoreCommentsWithBoolean:(jboolean)value;

- (void)setIgnoreElementContentWhitespaceWithBoolean:(jboolean)value;

- (void)setNamespaceAwareWithBoolean:(jboolean)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(OrgApacheHarmonyXmlParsersDocumentBuilderImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlParsersDocumentBuilderImpl_init(OrgApacheHarmonyXmlParsersDocumentBuilderImpl *self);

FOUNDATION_EXPORT OrgApacheHarmonyXmlParsersDocumentBuilderImpl *new_OrgApacheHarmonyXmlParsersDocumentBuilderImpl_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlParsersDocumentBuilderImpl)

#endif // _OrgApacheHarmonyXmlParsersDocumentBuilderImpl_H_
