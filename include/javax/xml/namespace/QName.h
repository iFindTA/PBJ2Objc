//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/namespace/QName.java
//

#ifndef _JavaxXmlNamespaceQName_H_
#define _JavaxXmlNamespaceQName_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@interface JavaxXmlNamespaceQName : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)localPart;

- (instancetype)initWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localPart;

- (instancetype)initWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localPart
                    withNSString:(NSString *)prefix;

- (jboolean)isEqual:(id)objectToTest;

- (NSString *)getLocalPart;

- (NSString *)getNamespaceURI;

- (NSString *)getPrefix;

- (NSUInteger)hash;

- (NSString *)description;

+ (JavaxXmlNamespaceQName *)valueOfWithNSString:(NSString *)qNameAsString;

@end

J2OBJC_STATIC_INIT(JavaxXmlNamespaceQName)

FOUNDATION_EXPORT void JavaxXmlNamespaceQName_initWithNSString_withNSString_(JavaxXmlNamespaceQName *self, NSString *namespaceURI, NSString *localPart);

FOUNDATION_EXPORT JavaxXmlNamespaceQName *new_JavaxXmlNamespaceQName_initWithNSString_withNSString_(NSString *namespaceURI, NSString *localPart) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlNamespaceQName_initWithNSString_withNSString_withNSString_(JavaxXmlNamespaceQName *self, NSString *namespaceURI, NSString *localPart, NSString *prefix);

FOUNDATION_EXPORT JavaxXmlNamespaceQName *new_JavaxXmlNamespaceQName_initWithNSString_withNSString_withNSString_(NSString *namespaceURI, NSString *localPart, NSString *prefix) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxXmlNamespaceQName_initWithNSString_(JavaxXmlNamespaceQName *self, NSString *localPart);

FOUNDATION_EXPORT JavaxXmlNamespaceQName *new_JavaxXmlNamespaceQName_initWithNSString_(NSString *localPart) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlNamespaceQName *JavaxXmlNamespaceQName_valueOfWithNSString_(NSString *qNameAsString);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlNamespaceQName)

#endif // _JavaxXmlNamespaceQName_H_
