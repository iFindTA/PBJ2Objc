//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/CharSequence.java
//

#ifndef _JavaLangCharSequence_H_
#define _JavaLangCharSequence_H_

#include "J2ObjC_header.h"

@protocol JavaLangCharSequence < NSObject, JavaObject >

- (jint)length;

- (jchar)charAtWithInt:(jint)index;

- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangCharSequence)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangCharSequence)

#endif // _JavaLangCharSequence_H_
