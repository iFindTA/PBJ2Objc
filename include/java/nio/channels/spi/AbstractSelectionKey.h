//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/spi/AbstractSelectionKey.java
//

#ifndef _JavaNioChannelsSpiAbstractSelectionKey_H_
#define _JavaNioChannelsSpiAbstractSelectionKey_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/SelectionKey.h"

@interface JavaNioChannelsSpiAbstractSelectionKey : JavaNioChannelsSelectionKey {
 @public
  jboolean isValid_;
}

#pragma mark Public

- (void)cancel;

- (jboolean)isValid;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelectionKey)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractSelectionKey_init(JavaNioChannelsSpiAbstractSelectionKey *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelectionKey)

#endif // _JavaNioChannelsSpiAbstractSelectionKey_H_
