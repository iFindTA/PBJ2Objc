//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/DecimalFormatSymbols.java
//

#ifndef _JavaTextDecimalFormatSymbols_H_
#define _JavaTextDecimalFormatSymbols_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilCurrency;
@class JavaUtilLocale;

@interface JavaTextDecimalFormatSymbols : NSObject < NSCopying, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (id)clone;

- (jboolean)isEqual:(id)object;

+ (IOSObjectArray *)getAvailableLocales;

- (JavaUtilCurrency *)getCurrency;

- (NSString *)getCurrencySymbol;

- (jchar)getDecimalSeparator;

- (jchar)getDigit;

- (NSString *)getExponentSeparator;

- (jchar)getGroupingSeparator;

- (NSString *)getInfinity;

+ (JavaTextDecimalFormatSymbols *)getInstance;

+ (JavaTextDecimalFormatSymbols *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (NSString *)getInternationalCurrencySymbol;

- (jchar)getMinusSign;

- (jchar)getMonetaryDecimalSeparator;

- (NSString *)getNaN;

- (jchar)getPatternSeparator;

- (jchar)getPercent;

- (jchar)getPerMill;

- (jchar)getZeroDigit;

- (NSUInteger)hash;

- (void)setCurrencyWithJavaUtilCurrency:(JavaUtilCurrency *)currency;

- (void)setCurrencySymbolWithNSString:(NSString *)value;

- (void)setDecimalSeparatorWithChar:(jchar)value;

- (void)setDigitWithChar:(jchar)value;

- (void)setExponentSeparatorWithNSString:(NSString *)value;

- (void)setGroupingSeparatorWithChar:(jchar)value;

- (void)setInfinityWithNSString:(NSString *)value;

- (void)setInternationalCurrencySymbolWithNSString:(NSString *)value;

- (void)setMinusSignWithChar:(jchar)value;

- (void)setMonetaryDecimalSeparatorWithChar:(jchar)value;

- (void)setNaNWithNSString:(NSString *)value;

- (void)setPatternSeparatorWithChar:(jchar)value;

- (void)setPercentWithChar:(jchar)value;

- (void)setPerMillWithChar:(jchar)value;

- (void)setZeroDigitWithChar:(jchar)value;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextDecimalFormatSymbols)

FOUNDATION_EXPORT void JavaTextDecimalFormatSymbols_init(JavaTextDecimalFormatSymbols *self);

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *new_JavaTextDecimalFormatSymbols_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaTextDecimalFormatSymbols_initWithJavaUtilLocale_(JavaTextDecimalFormatSymbols *self, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *new_JavaTextDecimalFormatSymbols_initWithJavaUtilLocale_(JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *JavaTextDecimalFormatSymbols_getInstance();

FOUNDATION_EXPORT JavaTextDecimalFormatSymbols *JavaTextDecimalFormatSymbols_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT IOSObjectArray *JavaTextDecimalFormatSymbols_getAvailableLocales();

J2OBJC_TYPE_LITERAL_HEADER(JavaTextDecimalFormatSymbols)

#endif // _JavaTextDecimalFormatSymbols_H_
