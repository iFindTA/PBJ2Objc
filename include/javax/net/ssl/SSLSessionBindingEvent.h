//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSessionBindingEvent.java
//

#ifndef _JavaxNetSslSSLSessionBindingEvent_H_
#define _JavaxNetSslSSLSessionBindingEvent_H_

#include "J2ObjC_header.h"
#include "java/util/EventObject.h"

@protocol JavaxNetSslSSLSession;

@interface JavaxNetSslSSLSessionBindingEvent : JavaUtilEventObject

#pragma mark Public

- (instancetype)initWithJavaxNetSslSSLSession:(id<JavaxNetSslSSLSession>)session
                                 withNSString:(NSString *)name;

- (NSString *)getName;

- (id<JavaxNetSslSSLSession>)getSession;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionBindingEvent)

FOUNDATION_EXPORT void JavaxNetSslSSLSessionBindingEvent_initWithJavaxNetSslSSLSession_withNSString_(JavaxNetSslSSLSessionBindingEvent *self, id<JavaxNetSslSSLSession> session, NSString *name);

FOUNDATION_EXPORT JavaxNetSslSSLSessionBindingEvent *new_JavaxNetSslSSLSessionBindingEvent_initWithJavaxNetSslSSLSession_withNSString_(id<JavaxNetSslSSLSession> session, NSString *name) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionBindingEvent)

#endif // _JavaxNetSslSSLSessionBindingEvent_H_
