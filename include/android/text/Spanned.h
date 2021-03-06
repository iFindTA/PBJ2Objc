//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/Spanned.java
//

#ifndef _AndroidTextSpanned_H_
#define _AndroidTextSpanned_H_

#include "J2ObjC_header.h"
#include "java/lang/CharSequence.h"

@class IOSClass;
@class IOSObjectArray;

#define AndroidTextSpanned_SPAN_POINT_MARK_MASK 51
#define AndroidTextSpanned_SPAN_MARK_MARK 17
#define AndroidTextSpanned_SPAN_MARK_POINT 18
#define AndroidTextSpanned_SPAN_POINT_MARK 33
#define AndroidTextSpanned_SPAN_POINT_POINT 34
#define AndroidTextSpanned_SPAN_PARAGRAPH 51
#define AndroidTextSpanned_SPAN_INCLUSIVE_EXCLUSIVE 17
#define AndroidTextSpanned_SPAN_INCLUSIVE_INCLUSIVE 18
#define AndroidTextSpanned_SPAN_EXCLUSIVE_EXCLUSIVE 33
#define AndroidTextSpanned_SPAN_EXCLUSIVE_INCLUSIVE 34
#define AndroidTextSpanned_SPAN_COMPOSING 256
#define AndroidTextSpanned_SPAN_INTERMEDIATE 512
#define AndroidTextSpanned_SPAN_USER_SHIFT 24
#define AndroidTextSpanned_SPAN_USER -16777216
#define AndroidTextSpanned_SPAN_PRIORITY_SHIFT 16
#define AndroidTextSpanned_SPAN_PRIORITY 16711680

@protocol AndroidTextSpanned < JavaLangCharSequence, NSObject, JavaObject >

- (IOSObjectArray *)getSpansWithInt:(jint)start
                            withInt:(jint)end
                       withIOSClass:(IOSClass *)type;

- (jint)getSpanStartWithId:(id)tag;

- (jint)getSpanEndWithId:(id)tag;

- (jint)getSpanFlagsWithId:(id)tag;

- (jint)nextSpanTransitionWithInt:(jint)start
                          withInt:(jint)limit
                     withIOSClass:(IOSClass *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpanned)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_POINT_MARK_MASK, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_MARK_MARK, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_MARK_POINT, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_POINT_MARK, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_POINT_POINT, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_PARAGRAPH, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_INCLUSIVE_EXCLUSIVE, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_INCLUSIVE_INCLUSIVE, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_EXCLUSIVE_EXCLUSIVE, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_EXCLUSIVE_INCLUSIVE, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_COMPOSING, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_INTERMEDIATE, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_USER_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_USER, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_PRIORITY_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpanned, SPAN_PRIORITY, jint)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpanned)

#endif // _AndroidTextSpanned_H_
