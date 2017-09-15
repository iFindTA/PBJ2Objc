//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/HttpCookie.java
//

#ifndef _JavaNetHttpCookie_H_
#define _JavaNetHttpCookie_H_

#include "J2ObjC_header.h"

@class JavaNetURI;
@protocol JavaUtilList;

@interface JavaNetHttpCookie : NSObject < NSCopying >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

- (id)clone;

+ (jboolean)domainMatchesWithNSString:(NSString *)domainPattern
                         withNSString:(NSString *)host;

- (jboolean)isEqual:(id)object;

- (NSString *)getComment;

- (NSString *)getCommentURL;

- (jboolean)getDiscard;

- (NSString *)getDomain;

- (jlong)getMaxAge;

- (NSString *)getName;

- (NSString *)getPath;

- (NSString *)getPortlist;

- (jboolean)getSecure;

- (NSString *)getValue;

- (jint)getVersion;

- (jboolean)hasExpired;

- (NSUInteger)hash;

+ (id<JavaUtilList>)parseWithNSString:(NSString *)header;

- (void)setCommentWithNSString:(NSString *)comment;

- (void)setCommentURLWithNSString:(NSString *)commentURL;

- (void)setDiscardWithBoolean:(jboolean)discard;

- (void)setDomainWithNSString:(NSString *)pattern;

- (void)setMaxAgeWithLong:(jlong)deltaSeconds;

- (void)setPathWithNSString:(NSString *)path;

- (void)setPortlistWithNSString:(NSString *)portList;

- (void)setSecureWithBoolean:(jboolean)secure;

- (void)setValueWithNSString:(NSString *)value;

- (void)setVersionWithInt:(jint)newVersion;

- (NSString *)description;

#pragma mark Package-Private

+ (jboolean)pathMatchesWithJavaNetHttpCookie:(JavaNetHttpCookie *)cookie
                              withJavaNetURI:(JavaNetURI *)uri;

+ (jboolean)portMatchesWithJavaNetHttpCookie:(JavaNetHttpCookie *)cookie
                              withJavaNetURI:(JavaNetURI *)uri;

+ (jboolean)secureMatchesWithJavaNetHttpCookie:(JavaNetHttpCookie *)cookie
                                withJavaNetURI:(JavaNetURI *)uri;

@end

J2OBJC_STATIC_INIT(JavaNetHttpCookie)

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_domainMatchesWithNSString_withNSString_(NSString *domainPattern, NSString *host);

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_pathMatchesWithJavaNetHttpCookie_withJavaNetURI_(JavaNetHttpCookie *cookie, JavaNetURI *uri);

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_secureMatchesWithJavaNetHttpCookie_withJavaNetURI_(JavaNetHttpCookie *cookie, JavaNetURI *uri);

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_portMatchesWithJavaNetHttpCookie_withJavaNetURI_(JavaNetHttpCookie *cookie, JavaNetURI *uri);

FOUNDATION_EXPORT id<JavaUtilList> JavaNetHttpCookie_parseWithNSString_(NSString *header);

FOUNDATION_EXPORT void JavaNetHttpCookie_initWithNSString_withNSString_(JavaNetHttpCookie *self, NSString *name, NSString *value);

FOUNDATION_EXPORT JavaNetHttpCookie *new_JavaNetHttpCookie_initWithNSString_withNSString_(NSString *name, NSString *value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpCookie)

@interface JavaNetHttpCookie_CookieParser : NSObject {
 @public
  jboolean hasExpires_;
  jboolean hasMaxAge_;
  jboolean hasVersion_;
}

#pragma mark Public

- (id<JavaUtilList>)parse;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)input;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetHttpCookie_CookieParser)

FOUNDATION_EXPORT void JavaNetHttpCookie_CookieParser_initWithNSString_(JavaNetHttpCookie_CookieParser *self, NSString *input);

FOUNDATION_EXPORT JavaNetHttpCookie_CookieParser *new_JavaNetHttpCookie_CookieParser_initWithNSString_(NSString *input) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpCookie_CookieParser)

#endif // _JavaNetHttpCookie_H_
