//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/MulticastSocket.java
//

#ifndef _JavaNetMulticastSocket_H_
#define _JavaNetMulticastSocket_H_

#include "J2ObjC_header.h"
#include "java/net/DatagramSocket.h"

@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;

@interface JavaNetMulticastSocket : JavaNetDatagramSocket

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)port;

- (instancetype)initWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddress;

- (JavaNetInetAddress *)getInterface;

- (jboolean)getLoopbackMode;

- (JavaNetNetworkInterface *)getNetworkInterface;

- (jint)getTimeToLive;

- (jbyte)getTTL;

- (void)joinGroupWithJavaNetInetAddress:(JavaNetInetAddress *)groupAddr;

- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)groupAddress
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (void)leaveGroupWithJavaNetInetAddress:(JavaNetInetAddress *)groupAddr;

- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)groupAddress
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)packet
                             withByte:(jbyte)ttl;

- (void)setInterfaceWithJavaNetInetAddress:(JavaNetInetAddress *)address;

- (void)setLoopbackModeWithBoolean:(jboolean)disable;

- (void)setNetworkInterfaceWithJavaNetNetworkInterface:(JavaNetNetworkInterface *)networkInterface;

- (void)setTimeToLiveWithInt:(jint)ttl;

- (void)setTTLWithByte:(jbyte)ttl;

#pragma mark Package-Private

- (void)createSocketWithInt:(jint)aPort
     withJavaNetInetAddress:(JavaNetInetAddress *)addr;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetMulticastSocket)

FOUNDATION_EXPORT void JavaNetMulticastSocket_init(JavaNetMulticastSocket *self);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetMulticastSocket_initWithInt_(JavaNetMulticastSocket *self, jint port);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_initWithInt_(jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNetMulticastSocket_initWithJavaNetSocketAddress_(JavaNetMulticastSocket *self, JavaNetSocketAddress *localAddress);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_initWithJavaNetSocketAddress_(JavaNetSocketAddress *localAddress) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetMulticastSocket)

#endif // _JavaNetMulticastSocket_H_
