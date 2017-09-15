//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URI.java
//

#ifndef _JavaNetURI_H_
#define _JavaNetURI_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"

@class JavaNetURL;
@class LibcoreNetUriCodec;

@interface JavaNetURI : NSObject < JavaLangComparable, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)spec;

- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)schemeSpecificPart
                    withNSString:(NSString *)fragment;

- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)userInfo
                    withNSString:(NSString *)host
                         withInt:(jint)port
                    withNSString:(NSString *)path
                    withNSString:(NSString *)query
                    withNSString:(NSString *)fragment;

- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)host
                    withNSString:(NSString *)path
                    withNSString:(NSString *)fragment;

- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)authority
                    withNSString:(NSString *)path
                    withNSString:(NSString *)query
                    withNSString:(NSString *)fragment;

- (jint)compareToWithId:(JavaNetURI *)uri;

+ (JavaNetURI *)createWithNSString:(NSString *)uri;

- (jboolean)isEqual:(id)o;

- (NSString *)getAuthority;

- (jint)getEffectivePort;

+ (jint)getEffectivePortWithNSString:(NSString *)scheme
                             withInt:(jint)specifiedPort;

- (NSString *)getFragment;

- (NSString *)getHost;

- (NSString *)getPath;

- (jint)getPort;

- (NSString *)getQuery;

- (NSString *)getRawAuthority;

- (NSString *)getRawFragment;

- (NSString *)getRawPath;

- (NSString *)getRawQuery;

- (NSString *)getRawSchemeSpecificPart;

- (NSString *)getRawUserInfo;

- (NSString *)getScheme;

- (NSString *)getSchemeSpecificPart;

- (NSString *)getUserInfo;

- (NSUInteger)hash;

- (jboolean)isAbsolute;

- (jboolean)isOpaque;

- (JavaNetURI *)normalize;

- (JavaNetURI *)parseServerAuthority;

- (JavaNetURI *)relativizeWithJavaNetURI:(JavaNetURI *)relative;

- (JavaNetURI *)resolveWithNSString:(NSString *)relative;

- (JavaNetURI *)resolveWithJavaNetURI:(JavaNetURI *)relative;

- (NSString *)toASCIIString;

- (NSString *)description;

- (JavaNetURL *)toURL;

@end

J2OBJC_STATIC_INIT(JavaNetURI)

FOUNDATION_EXPORT NSString *JavaNetURI_UNRESERVED_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, UNRESERVED_, NSString *)

FOUNDATION_EXPORT NSString *JavaNetURI_PUNCTUATION_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, PUNCTUATION_, NSString *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_USER_INFO_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, USER_INFO_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_PATH_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, PATH_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_AUTHORITY_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, AUTHORITY_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_FILE_AND_QUERY_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, FILE_AND_QUERY_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_ALL_LEGAL_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, ALL_LEGAL_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_(JavaNetURI *self, NSString *spec);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_(NSString *spec) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_withNSString_withNSString_(JavaNetURI *self, NSString *scheme, NSString *schemeSpecificPart, NSString *fragment);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_withNSString_withNSString_(NSString *scheme, NSString *schemeSpecificPart, NSString *fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_(JavaNetURI *self, NSString *scheme, NSString *userInfo, NSString *host, jint port, NSString *path, NSString *query, NSString *fragment);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_(NSString *scheme, NSString *userInfo, NSString *host, jint port, NSString *path, NSString *query, NSString *fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_withNSString_withNSString_withNSString_(JavaNetURI *self, NSString *scheme, NSString *host, NSString *path, NSString *fragment);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_withNSString_withNSString_withNSString_(NSString *scheme, NSString *host, NSString *path, NSString *fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetURI_initWithNSString_withNSString_withNSString_withNSString_withNSString_(JavaNetURI *self, NSString *scheme, NSString *authority, NSString *path, NSString *query, NSString *fragment);

FOUNDATION_EXPORT JavaNetURI *new_JavaNetURI_initWithNSString_withNSString_withNSString_withNSString_withNSString_(NSString *scheme, NSString *authority, NSString *path, NSString *query, NSString *fragment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURI *JavaNetURI_createWithNSString_(NSString *uri);

FOUNDATION_EXPORT jint JavaNetURI_getEffectivePortWithNSString_withInt_(NSString *scheme, jint specifiedPort);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURI)

#endif // _JavaNetURI_H_
