//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/GatheringByteChannel.java
//

#ifndef _JavaNioChannelsGatheringByteChannel_H_
#define _JavaNioChannelsGatheringByteChannel_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/WritableByteChannel.h"

@class IOSObjectArray;

@protocol JavaNioChannelsGatheringByteChannel < JavaNioChannelsWritableByteChannel, NSObject, JavaObject >

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)buffers;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)buffers
                                 withInt:(jint)offset
                                 withInt:(jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsGatheringByteChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsGatheringByteChannel)

#endif // _JavaNioChannelsGatheringByteChannel_H_
