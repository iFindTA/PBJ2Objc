//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/Normalizer.java
//

#ifndef _JavaTextNormalizer_H_
#define _JavaTextNormalizer_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

@class JavaTextNormalizer_FormEnum;
@protocol JavaLangCharSequence;

@interface JavaTextNormalizer : NSObject

#pragma mark Public

+ (jboolean)isNormalizedWithJavaLangCharSequence:(id<JavaLangCharSequence>)src
                 withJavaTextNormalizer_FormEnum:(JavaTextNormalizer_FormEnum *)form;

+ (NSString *)normalizeWithJavaLangCharSequence:(id<JavaLangCharSequence>)src
                withJavaTextNormalizer_FormEnum:(JavaTextNormalizer_FormEnum *)form;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextNormalizer)

FOUNDATION_EXPORT jboolean JavaTextNormalizer_isNormalizedWithJavaLangCharSequence_withJavaTextNormalizer_FormEnum_(id<JavaLangCharSequence> src, JavaTextNormalizer_FormEnum *form);

FOUNDATION_EXPORT NSString *JavaTextNormalizer_normalizeWithJavaLangCharSequence_withJavaTextNormalizer_FormEnum_(id<JavaLangCharSequence> src, JavaTextNormalizer_FormEnum *form);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextNormalizer)

typedef NS_ENUM(NSUInteger, JavaTextNormalizer_Form) {
  JavaTextNormalizer_Form_NFD = 0,
  JavaTextNormalizer_Form_NFC = 1,
  JavaTextNormalizer_Form_NFKD = 2,
  JavaTextNormalizer_Form_NFKC = 3,
};

@interface JavaTextNormalizer_FormEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaTextNormalizer_FormEnum_values();

+ (JavaTextNormalizer_FormEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT JavaTextNormalizer_FormEnum *JavaTextNormalizer_FormEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaTextNormalizer_FormEnum)

FOUNDATION_EXPORT JavaTextNormalizer_FormEnum *JavaTextNormalizer_FormEnum_values_[];

#define JavaTextNormalizer_FormEnum_NFD JavaTextNormalizer_FormEnum_values_[JavaTextNormalizer_Form_NFD]
J2OBJC_ENUM_CONSTANT_GETTER(JavaTextNormalizer_FormEnum, NFD)

#define JavaTextNormalizer_FormEnum_NFC JavaTextNormalizer_FormEnum_values_[JavaTextNormalizer_Form_NFC]
J2OBJC_ENUM_CONSTANT_GETTER(JavaTextNormalizer_FormEnum, NFC)

#define JavaTextNormalizer_FormEnum_NFKD JavaTextNormalizer_FormEnum_values_[JavaTextNormalizer_Form_NFKD]
J2OBJC_ENUM_CONSTANT_GETTER(JavaTextNormalizer_FormEnum, NFKD)

#define JavaTextNormalizer_FormEnum_NFKC JavaTextNormalizer_FormEnum_values_[JavaTextNormalizer_Form_NFKC]
J2OBJC_ENUM_CONSTANT_GETTER(JavaTextNormalizer_FormEnum, NFKC)

J2OBJC_TYPE_LITERAL_HEADER(JavaTextNormalizer_FormEnum)

#endif // _JavaTextNormalizer_H_
