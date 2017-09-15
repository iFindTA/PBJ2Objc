//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URLConnection.java
//

#ifndef _JavaNetURLConnection_H_
#define _JavaNetURLConnection_H_

#include "J2ObjC_header.h"
#include "java/net/ContentHandler.h"

@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetContentHandler;
@class JavaNetURL;
@class JavaSecurityPermission;
@class JavaUtilHashtable;
@protocol JavaNetContentHandlerFactory;
@protocol JavaNetFileNameMap;
@protocol JavaUtilMap;

@interface JavaNetURLConnection : NSObject {
 @public
  JavaNetURL *url_;
  JavaNetContentHandler *defaultHandler_;
  jlong ifModifiedSince_;
  jboolean useCaches_;
  jboolean connected_;
  jboolean doOutput_;
  jboolean doInput_;
  jboolean allowUserInteraction_;
}

#pragma mark Public

- (void)addRequestPropertyWithNSString:(NSString *)field
                          withNSString:(NSString *)newValue;

- (void)connect;

- (jboolean)getAllowUserInteraction;

- (jint)getConnectTimeout;

- (id)getContent;

- (id)getContentWithIOSClassArray:(IOSObjectArray *)types;

- (NSString *)getContentEncoding;

- (jint)getContentLength;

- (jlong)getContentLengthLong;

- (NSString *)getContentType;

- (jlong)getDate;

+ (jboolean)getDefaultAllowUserInteraction;

+ (NSString *)getDefaultRequestPropertyWithNSString:(NSString *)field;

- (jboolean)getDefaultUseCaches;

- (jboolean)getDoInput;

- (jboolean)getDoOutput;

- (jlong)getExpiration;

+ (id<JavaNetFileNameMap>)getFileNameMap;

- (NSString *)getHeaderFieldWithInt:(jint)pos;

- (NSString *)getHeaderFieldWithNSString:(NSString *)key;

- (jlong)getHeaderFieldDateWithNSString:(NSString *)field
                               withLong:(jlong)defaultValue;

- (jint)getHeaderFieldIntWithNSString:(NSString *)field
                              withInt:(jint)defaultValue;

- (NSString *)getHeaderFieldKeyWithInt:(jint)posn;

- (jlong)getHeaderFieldLongWithNSString:(NSString *)field
                               withLong:(jlong)defaultValue;

- (id<JavaUtilMap>)getHeaderFields;

- (jlong)getIfModifiedSince;

- (JavaIoInputStream *)getInputStream;

- (jlong)getLastModified;

- (JavaIoOutputStream *)getOutputStream;

- (JavaSecurityPermission *)getPermission;

- (jint)getReadTimeout;

- (id<JavaUtilMap>)getRequestProperties;

- (NSString *)getRequestPropertyWithNSString:(NSString *)field;

- (JavaNetURL *)getURL;

- (jboolean)getUseCaches;

+ (NSString *)guessContentTypeFromNameWithNSString:(NSString *)url;

+ (NSString *)guessContentTypeFromStreamWithJavaIoInputStream:(JavaIoInputStream *)is;

- (void)setAllowUserInteractionWithBoolean:(jboolean)newValue;

- (void)setConnectTimeoutWithInt:(jint)timeoutMillis;

+ (void)setContentHandlerFactoryWithJavaNetContentHandlerFactory:(id<JavaNetContentHandlerFactory>)contentFactory;

+ (void)setDefaultAllowUserInteractionWithBoolean:(jboolean)allows;

+ (void)setDefaultRequestPropertyWithNSString:(NSString *)field
                                 withNSString:(NSString *)value;

- (void)setDefaultUseCachesWithBoolean:(jboolean)newValue;

- (void)setDoInputWithBoolean:(jboolean)newValue;

- (void)setDoOutputWithBoolean:(jboolean)newValue;

+ (void)setFileNameMapWithJavaNetFileNameMap:(id<JavaNetFileNameMap>)map;

- (void)setIfModifiedSinceWithLong:(jlong)newValue;

- (void)setReadTimeoutWithInt:(jint)timeoutMillis;

- (void)setRequestPropertyWithNSString:(NSString *)field
                          withNSString:(NSString *)newValue;

- (void)setUseCachesWithBoolean:(jboolean)newValue;

- (NSString *)description;

#pragma mark Protected

- (instancetype)initWithJavaNetURL:(JavaNetURL *)url;

@end

J2OBJC_STATIC_INIT(JavaNetURLConnection)

J2OBJC_FIELD_SETTER(JavaNetURLConnection, url_, JavaNetURL *)
J2OBJC_FIELD_SETTER(JavaNetURLConnection, defaultHandler_, JavaNetContentHandler *)

FOUNDATION_EXPORT JavaUtilHashtable *JavaNetURLConnection_contentHandlers_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURLConnection, contentHandlers_, JavaUtilHashtable *)
J2OBJC_STATIC_FIELD_SETTER(JavaNetURLConnection, contentHandlers_, JavaUtilHashtable *)

FOUNDATION_EXPORT void JavaNetURLConnection_initWithJavaNetURL_(JavaNetURLConnection *self, JavaNetURL *url);

FOUNDATION_EXPORT jboolean JavaNetURLConnection_getDefaultAllowUserInteraction();

FOUNDATION_EXPORT NSString *JavaNetURLConnection_getDefaultRequestPropertyWithNSString_(NSString *field);

FOUNDATION_EXPORT id<JavaNetFileNameMap> JavaNetURLConnection_getFileNameMap();

FOUNDATION_EXPORT NSString *JavaNetURLConnection_guessContentTypeFromNameWithNSString_(NSString *url);

FOUNDATION_EXPORT NSString *JavaNetURLConnection_guessContentTypeFromStreamWithJavaIoInputStream_(JavaIoInputStream *is);

FOUNDATION_EXPORT void JavaNetURLConnection_setContentHandlerFactoryWithJavaNetContentHandlerFactory_(id<JavaNetContentHandlerFactory> contentFactory);

FOUNDATION_EXPORT void JavaNetURLConnection_setDefaultAllowUserInteractionWithBoolean_(jboolean allows);

FOUNDATION_EXPORT void JavaNetURLConnection_setDefaultRequestPropertyWithNSString_withNSString_(NSString *field, NSString *value);

FOUNDATION_EXPORT void JavaNetURLConnection_setFileNameMapWithJavaNetFileNameMap_(id<JavaNetFileNameMap> map);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLConnection)

@interface JavaNetURLConnection_DefaultContentHandler : JavaNetContentHandler

#pragma mark Public

- (id)getContentWithJavaNetURLConnection:(JavaNetURLConnection *)u;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURLConnection_DefaultContentHandler)

FOUNDATION_EXPORT void JavaNetURLConnection_DefaultContentHandler_init(JavaNetURLConnection_DefaultContentHandler *self);

FOUNDATION_EXPORT JavaNetURLConnection_DefaultContentHandler *new_JavaNetURLConnection_DefaultContentHandler_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLConnection_DefaultContentHandler)

#endif // _JavaNetURLConnection_H_