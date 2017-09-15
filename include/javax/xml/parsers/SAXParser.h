//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/parsers/SAXParser.java
//

#ifndef _JavaxXmlParsersSAXParser_H_
#define _JavaxXmlParsersSAXParser_H_

#include "J2ObjC_header.h"

@class JavaIoFile;
@class JavaIoInputStream;
@class JavaxXmlValidationSchema;
@class OrgXmlSaxHandlerBase;
@class OrgXmlSaxHelpersDefaultHandler;
@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxParser;
@protocol OrgXmlSaxXMLReader;

@interface JavaxXmlParsersSAXParser : NSObject

#pragma mark Public

- (id<OrgXmlSaxParser>)getParser;

- (id)getPropertyWithNSString:(NSString *)name;

- (JavaxXmlValidationSchema *)getSchema;

- (id<OrgXmlSaxXMLReader>)getXMLReader;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (jboolean)isXIncludeAware;

- (void)parseWithJavaIoFile:(JavaIoFile *)f
withOrgXmlSaxHelpersDefaultHandler:(OrgXmlSaxHelpersDefaultHandler *)dh;

- (void)parseWithJavaIoFile:(JavaIoFile *)f
   withOrgXmlSaxHandlerBase:(OrgXmlSaxHandlerBase *)hb;

- (void)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)is
   withOrgXmlSaxHelpersDefaultHandler:(OrgXmlSaxHelpersDefaultHandler *)dh;

- (void)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)is
             withOrgXmlSaxHandlerBase:(OrgXmlSaxHandlerBase *)hb;

- (void)parseWithJavaIoInputStream:(JavaIoInputStream *)is
withOrgXmlSaxHelpersDefaultHandler:(OrgXmlSaxHelpersDefaultHandler *)dh;

- (void)parseWithJavaIoInputStream:(JavaIoInputStream *)is
withOrgXmlSaxHelpersDefaultHandler:(OrgXmlSaxHelpersDefaultHandler *)dh
                      withNSString:(NSString *)systemId;

- (void)parseWithJavaIoInputStream:(JavaIoInputStream *)is
          withOrgXmlSaxHandlerBase:(OrgXmlSaxHandlerBase *)hb;

- (void)parseWithJavaIoInputStream:(JavaIoInputStream *)is
          withOrgXmlSaxHandlerBase:(OrgXmlSaxHandlerBase *)hb
                      withNSString:(NSString *)systemId;

- (void)parseWithNSString:(NSString *)uri
withOrgXmlSaxHelpersDefaultHandler:(OrgXmlSaxHelpersDefaultHandler *)dh;

- (void)parseWithNSString:(NSString *)uri
 withOrgXmlSaxHandlerBase:(OrgXmlSaxHandlerBase *)hb;

- (void)reset;

- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlParsersSAXParser)

FOUNDATION_EXPORT void JavaxXmlParsersSAXParser_init(JavaxXmlParsersSAXParser *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersSAXParser)

#endif // _JavaxXmlParsersSAXParser_H_
