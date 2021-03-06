//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSocketFactory.java
//

#ifndef _JavaxNetSslSSLSocketFactory_H_
#define _JavaxNetSslSSLSocketFactory_H_

#include "J2ObjC_header.h"
#include "javax/net/SocketFactory.h"

@class IOSObjectArray;
@class JavaNetSocket;

@interface JavaxNetSslSSLSocketFactory : JavaxNetSocketFactory

#pragma mark Public

- (instancetype)init;

- (JavaNetSocket *)createSocketWithJavaNetSocket:(JavaNetSocket *)s
                                    withNSString:(NSString *)host
                                         withInt:(jint)port
                                     withBoolean:(jboolean)autoClose;

+ (JavaxNetSocketFactory *)getDefault;

- (IOSObjectArray *)getDefaultCipherSuites;

- (IOSObjectArray *)getSupportedCipherSuites;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSocketFactory)

FOUNDATION_EXPORT JavaxNetSocketFactory *JavaxNetSslSSLSocketFactory_getDefault();

FOUNDATION_EXPORT void JavaxNetSslSSLSocketFactory_init(JavaxNetSslSSLSocketFactory *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSocketFactory)

#endif // _JavaxNetSslSSLSocketFactory_H_
