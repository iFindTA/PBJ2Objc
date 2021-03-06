//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPath.java
//

#ifndef _JavaxXmlXpathXPath_H_
#define _JavaxXmlXpathXPath_H_

#include "J2ObjC_header.h"

@class JavaxXmlNamespaceQName;
@class OrgXmlSaxInputSource;
@protocol JavaxXmlNamespaceNamespaceContext;
@protocol JavaxXmlXpathXPathExpression;
@protocol JavaxXmlXpathXPathFunctionResolver;
@protocol JavaxXmlXpathXPathVariableResolver;

@protocol JavaxXmlXpathXPath < NSObject, JavaObject >

- (void)reset;

- (void)setXPathVariableResolverWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)resolver;

- (id<JavaxXmlXpathXPathVariableResolver>)getXPathVariableResolver;

- (void)setXPathFunctionResolverWithJavaxXmlXpathXPathFunctionResolver:(id<JavaxXmlXpathXPathFunctionResolver>)resolver;

- (id<JavaxXmlXpathXPathFunctionResolver>)getXPathFunctionResolver;

- (void)setNamespaceContextWithJavaxXmlNamespaceNamespaceContext:(id<JavaxXmlNamespaceNamespaceContext>)nsContext;

- (id<JavaxXmlNamespaceNamespaceContext>)getNamespaceContext;

- (id<JavaxXmlXpathXPathExpression>)compileWithNSString:(NSString *)expression;

- (id)evaluateWithNSString:(NSString *)expression
                    withId:(id)item
withJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)returnType;

- (NSString *)evaluateWithNSString:(NSString *)expression
                            withId:(id)item;

- (id)evaluateWithNSString:(NSString *)expression
  withOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source
withJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)returnType;

- (NSString *)evaluateWithNSString:(NSString *)expression
          withOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPath)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPath)

#endif // _JavaxXmlXpathXPath_H_
