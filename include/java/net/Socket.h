//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Socket.java
//

#ifndef _JavaNetSocket_H_
#define _JavaNetSocket_H_

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"

@class JavaIoFileDescriptor;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetInetAddress;
@class JavaNetProxy;
@class JavaNetSocketAddress;
@class JavaNetSocketImpl;
@class JavaNioChannelsSocketChannel;
@protocol JavaNetSocketImplFactory;

@interface JavaNetSocket : NSObject < JavaIoCloseable > {
 @public
  JavaNetSocketImpl *impl_;
  jboolean isCreated_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)dstAddress
                                   withInt:(jint)dstPort;

- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)addr
                                   withInt:(jint)port
                               withBoolean:(jboolean)streaming;

- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)dstAddress
                                   withInt:(jint)dstPort
                    withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                                   withInt:(jint)localPort;

- (instancetype)initWithJavaNetProxy:(JavaNetProxy *)proxy;

- (instancetype)initWithNSString:(NSString *)dstName
                         withInt:(jint)dstPort;

- (instancetype)initWithNSString:(NSString *)hostName
                         withInt:(jint)port
                     withBoolean:(jboolean)streaming;

- (instancetype)initWithNSString:(NSString *)dstName
                         withInt:(jint)dstPort
          withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                         withInt:(jint)localPort;

- (void)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr;

- (void)close;

- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remoteAddr;

- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remoteAddr
                                withInt:(jint)timeout;

- (JavaNioChannelsSocketChannel *)getChannel;

- (JavaIoFileDescriptor *)getFileDescriptor$;

- (JavaNetInetAddress *)getInetAddress;

- (JavaIoInputStream *)getInputStream;

- (jboolean)getKeepAlive;

- (JavaNetInetAddress *)getLocalAddress;

- (jint)getLocalPort;

- (JavaNetSocketAddress *)getLocalSocketAddress;

- (jboolean)getOOBInline;

- (JavaIoOutputStream *)getOutputStream;

- (jint)getPort;

- (jint)getReceiveBufferSize;

- (JavaNetSocketAddress *)getRemoteSocketAddress;

- (jboolean)getReuseAddress;

- (jint)getSendBufferSize;

- (jint)getSoLinger;

- (jint)getSoTimeout;

- (jboolean)getTcpNoDelay;

- (jint)getTrafficClass;

- (jboolean)isBound;

- (jboolean)isClosed;

- (jboolean)isConnected;

- (jboolean)isInputShutdown;

- (jboolean)isOutputShutdown;

- (void)onBindWithJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                             withInt:(jint)localPort;

- (void)onClose;

- (void)onConnectWithJavaNetInetAddress:(JavaNetInetAddress *)remoteAddress
                                withInt:(jint)remotePort;

- (void)sendUrgentDataWithInt:(jint)value;

- (void)setKeepAliveWithBoolean:(jboolean)keepAlive;

- (void)setOOBInlineWithBoolean:(jboolean)oobinline;

- (void)setPerformancePreferencesWithInt:(jint)connectionTime
                                 withInt:(jint)latency
                                 withInt:(jint)bandwidth;

- (void)setReceiveBufferSizeWithInt:(jint)size;

- (void)setReuseAddressWithBoolean:(jboolean)reuse;

- (void)setSendBufferSizeWithInt:(jint)size;

+ (void)setSocketImplFactoryWithJavaNetSocketImplFactory:(id<JavaNetSocketImplFactory>)fac;

- (void)setSoLingerWithBoolean:(jboolean)on
                       withInt:(jint)timeout;

- (void)setSoTimeoutWithInt:(jint)timeout;

- (void)setTcpNoDelayWithBoolean:(jboolean)on;

- (void)setTrafficClassWithInt:(jint)value;

- (void)shutdownInput;

- (void)shutdownOutput;

- (NSString *)description;

#pragma mark Protected

- (instancetype)initWithJavaNetSocketImpl:(JavaNetSocketImpl *)impl;

#pragma mark Package-Private

- (void)accepted;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocket)

J2OBJC_FIELD_SETTER(JavaNetSocket, impl_, JavaNetSocketImpl *)

FOUNDATION_EXPORT void JavaNetSocket_init(JavaNetSocket *self);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetProxy_(JavaNetSocket *self, JavaNetProxy *proxy);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetProxy_(JavaNetProxy *proxy) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithNSString_withInt_(JavaNetSocket *self, NSString *dstName, jint dstPort);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithNSString_withInt_(NSString *dstName, jint dstPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithNSString_withInt_withJavaNetInetAddress_withInt_(JavaNetSocket *self, NSString *dstName, jint dstPort, JavaNetInetAddress *localAddress, jint localPort);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithNSString_withInt_withJavaNetInetAddress_withInt_(NSString *dstName, jint dstPort, JavaNetInetAddress *localAddress, jint localPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithNSString_withInt_withBoolean_(JavaNetSocket *self, NSString *hostName, jint port, jboolean streaming);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithNSString_withInt_withBoolean_(NSString *hostName, jint port, jboolean streaming) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetInetAddress_withInt_(JavaNetSocket *self, JavaNetInetAddress *dstAddress, jint dstPort);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetInetAddress_withInt_(JavaNetInetAddress *dstAddress, jint dstPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetInetAddress_withInt_withJavaNetInetAddress_withInt_(JavaNetSocket *self, JavaNetInetAddress *dstAddress, jint dstPort, JavaNetInetAddress *localAddress, jint localPort);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetInetAddress_withInt_withJavaNetInetAddress_withInt_(JavaNetInetAddress *dstAddress, jint dstPort, JavaNetInetAddress *localAddress, jint localPort) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetInetAddress_withInt_withBoolean_(JavaNetSocket *self, JavaNetInetAddress *addr, jint port, jboolean streaming);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetInetAddress_withInt_withBoolean_(JavaNetInetAddress *addr, jint port, jboolean streaming) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_initWithJavaNetSocketImpl_(JavaNetSocket *self, JavaNetSocketImpl *impl);

FOUNDATION_EXPORT JavaNetSocket *new_JavaNetSocket_initWithJavaNetSocketImpl_(JavaNetSocketImpl *impl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetSocket_setSocketImplFactoryWithJavaNetSocketImplFactory_(id<JavaNetSocketImplFactory> fac);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocket)

#endif // _JavaNetSocket_H_
