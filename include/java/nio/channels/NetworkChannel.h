//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/NetworkChannel.java
//

#ifndef _JavaNioChannelsNetworkChannel_H_
#define _JavaNioChannelsNetworkChannel_H_

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"
#include "java/lang/AutoCloseable.h"
#include "java/nio/channels/Channel.h"

@class JavaNetSocketAddress;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

@protocol JavaNioChannelsNetworkChannel < JavaLangAutoCloseable, JavaNioChannelsChannel, JavaIoCloseable, NSObject, JavaObject >

- (id<JavaNioChannelsNetworkChannel>)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (JavaNetSocketAddress *)getLocalAddress;

- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

- (id<JavaNioChannelsNetworkChannel>)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                               withId:(id)value;

- (id<JavaUtilSet>)supportedOptions;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNetworkChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNetworkChannel)

#endif // _JavaNioChannelsNetworkChannel_H_
