//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/CharBuffer.java
//

#ifndef _JavaNioCharBuffer_H_
#define _JavaNioCharBuffer_H_

#include "J2ObjC_header.h"
#include "java/lang/Appendable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Comparable.h"
#include "java/lang/Readable.h"
#include "java/nio/Buffer.h"

@class IOSCharArray;
@class JavaNioByteOrder;

@interface JavaNioCharBuffer : JavaNioBuffer < JavaLangComparable, JavaLangCharSequence, JavaLangAppendable, JavaLangReadable >

#pragma mark Public

+ (JavaNioCharBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

- (JavaNioCharBuffer *)appendWithChar:(jchar)c;

- (JavaNioCharBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

- (JavaNioCharBuffer *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                              withInt:(jint)start
                                              withInt:(jint)end;

- (IOSCharArray *)array;

- (jint)arrayOffset;

- (JavaNioCharBuffer *)asReadOnlyBuffer;

- (jchar)charAtWithInt:(jint)index;

- (JavaNioCharBuffer *)compact;

- (jint)compareToWithId:(JavaNioCharBuffer *)otherBuffer;

- (JavaNioCharBuffer *)duplicate;

- (jboolean)isEqual:(id)other;

- (jchar)get;

- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dst;

- (JavaNioCharBuffer *)getWithCharArray:(IOSCharArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)charCount;

- (jchar)getWithInt:(jint)index;

- (jboolean)hasArray;

- (NSUInteger)hash;

- (jboolean)isDirect;

- (jint)length;

- (JavaNioByteOrder *)order;

- (JavaNioCharBuffer *)putWithChar:(jchar)c;

- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src;

- (JavaNioCharBuffer *)putWithCharArray:(IOSCharArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)charCount;

- (JavaNioCharBuffer *)putWithJavaNioCharBuffer:(JavaNioCharBuffer *)src;

- (JavaNioCharBuffer *)putWithInt:(jint)index
                         withChar:(jchar)c;

- (JavaNioCharBuffer *)putWithNSString:(NSString *)str;

- (JavaNioCharBuffer *)putWithNSString:(NSString *)str
                               withInt:(jint)start
                               withInt:(jint)end;

- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;

- (JavaNioCharBuffer *)slice;

- (JavaNioCharBuffer *)subSequenceFrom:(jint)start
                                    to:(jint)end;

- (NSString *)description;

+ (JavaNioCharBuffer *)wrapWithCharArray:(IOSCharArray *)array;

+ (JavaNioCharBuffer *)wrapWithCharArray:(IOSCharArray *)array
                                 withInt:(jint)start
                                 withInt:(jint)charCount;

+ (JavaNioCharBuffer *)wrapWithJavaLangCharSequence:(id<JavaLangCharSequence>)chseq;

+ (JavaNioCharBuffer *)wrapWithJavaLangCharSequence:(id<JavaLangCharSequence>)cs
                                            withInt:(jint)start
                                            withInt:(jint)end;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

- (IOSCharArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharBuffer)

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithCharArray_(IOSCharArray *array);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithCharArray_withInt_withInt_(IOSCharArray *array, jint start, jint charCount);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithJavaLangCharSequence_(id<JavaLangCharSequence> chseq);

FOUNDATION_EXPORT JavaNioCharBuffer *JavaNioCharBuffer_wrapWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> cs, jint start, jint end);

FOUNDATION_EXPORT void JavaNioCharBuffer_initWithInt_withLong_(JavaNioCharBuffer *self, jint capacity, jlong effectiveDirectAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharBuffer)

#endif // _JavaNioCharBuffer_H_
