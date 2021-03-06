//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CookieHandler.java
//

#ifndef _JavaNetCookieHandler_H_
#define _JavaNetCookieHandler_H_

#include "J2ObjC_header.h"

@class JavaNetURI;
@protocol JavaUtilMap;

@interface JavaNetCookieHandler : NSObject

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilMap>)getWithJavaNetURI:(JavaNetURI *)uri
                     withJavaUtilMap:(id<JavaUtilMap>)requestHeaders;

+ (JavaNetCookieHandler *)getDefault;

- (void)putWithJavaNetURI:(JavaNetURI *)uri
          withJavaUtilMap:(id<JavaUtilMap>)responseHeaders;

+ (void)setDefaultWithJavaNetCookieHandler:(JavaNetCookieHandler *)cHandler;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieHandler)

FOUNDATION_EXPORT JavaNetCookieHandler *JavaNetCookieHandler_getDefault();

FOUNDATION_EXPORT void JavaNetCookieHandler_setDefaultWithJavaNetCookieHandler_(JavaNetCookieHandler *cHandler);

FOUNDATION_EXPORT void JavaNetCookieHandler_init(JavaNetCookieHandler *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieHandler)

#endif // _JavaNetCookieHandler_H_
