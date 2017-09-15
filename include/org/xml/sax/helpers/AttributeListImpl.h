//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/AttributeListImpl.java
//

#ifndef _OrgXmlSaxHelpersAttributeListImpl_H_
#define _OrgXmlSaxHelpersAttributeListImpl_H_

#include "J2ObjC_header.h"
#include "org/xml/sax/AttributeList.h"

@interface OrgXmlSaxHelpersAttributeListImpl : NSObject < OrgXmlSaxAttributeList >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)atts;

- (void)addAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value;

- (void)clear;

- (jint)getLength;

- (NSString *)getNameWithInt:(jint)i;

- (NSString *)getTypeWithInt:(jint)i;

- (NSString *)getTypeWithNSString:(NSString *)name;

- (NSString *)getValueWithInt:(jint)i;

- (NSString *)getValueWithNSString:(NSString *)name;

- (void)removeAttributeWithNSString:(NSString *)name;

- (void)setAttributeListWithOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)atts;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersAttributeListImpl)

FOUNDATION_EXPORT void OrgXmlSaxHelpersAttributeListImpl_init(OrgXmlSaxHelpersAttributeListImpl *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersAttributeListImpl *new_OrgXmlSaxHelpersAttributeListImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgXmlSaxHelpersAttributeListImpl_initWithOrgXmlSaxAttributeList_(OrgXmlSaxHelpersAttributeListImpl *self, id<OrgXmlSaxAttributeList> atts);

FOUNDATION_EXPORT OrgXmlSaxHelpersAttributeListImpl *new_OrgXmlSaxHelpersAttributeListImpl_initWithOrgXmlSaxAttributeList_(id<OrgXmlSaxAttributeList> atts) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersAttributeListImpl)

#endif // _OrgXmlSaxHelpersAttributeListImpl_H_
