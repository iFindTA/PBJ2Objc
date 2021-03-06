//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpanWatcher.java
//

#ifndef _AndroidTextSpanWatcher_H_
#define _AndroidTextSpanWatcher_H_

#include "J2ObjC_header.h"
#include "android/text/NoCopySpan.h"

@protocol AndroidTextSpannable;

@protocol AndroidTextSpanWatcher < AndroidTextNoCopySpan, NSObject, JavaObject >

- (void)onSpanAddedWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                     withId:(id)what
                                    withInt:(jint)start
                                    withInt:(jint)end;

- (void)onSpanRemovedWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                       withId:(id)what
                                      withInt:(jint)start
                                      withInt:(jint)end;

- (void)onSpanChangedWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                       withId:(id)what
                                      withInt:(jint)ostart
                                      withInt:(jint)oend
                                      withInt:(jint)nstart
                                      withInt:(jint)nend;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpanWatcher)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpanWatcher)

#endif // _AndroidTextSpanWatcher_H_
