//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/AddressCache.java
//

#ifndef _JavaNetAddressCache_H_
#define _JavaNetAddressCache_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;

@interface JavaNetAddressCache : NSObject

#pragma mark Public

- (void)clear;

- (id)getWithNSString:(NSString *)hostname;

- (void)putWithNSString:(NSString *)hostname
withJavaNetInetAddressArray:(IOSObjectArray *)addresses;

- (void)putUnknownHostWithNSString:(NSString *)hostname
                      withNSString:(NSString *)detailMessage;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetAddressCache)

FOUNDATION_EXPORT void JavaNetAddressCache_init(JavaNetAddressCache *self);

FOUNDATION_EXPORT JavaNetAddressCache *new_JavaNetAddressCache_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetAddressCache)

@interface JavaNetAddressCache_AddressCacheEntry : NSObject {
 @public
  id value_;
  jlong expiryNanos_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetAddressCache_AddressCacheEntry)

J2OBJC_FIELD_SETTER(JavaNetAddressCache_AddressCacheEntry, value_, id)

FOUNDATION_EXPORT void JavaNetAddressCache_AddressCacheEntry_initWithId_(JavaNetAddressCache_AddressCacheEntry *self, id value);

FOUNDATION_EXPORT JavaNetAddressCache_AddressCacheEntry *new_JavaNetAddressCache_AddressCacheEntry_initWithId_(id value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNetAddressCache_AddressCacheEntry)

#endif // _JavaNetAddressCache_H_