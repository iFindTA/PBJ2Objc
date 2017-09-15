//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/cache/CacheBuilderSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL")
#if ComGoogleCommonCacheCacheBuilderSpec_RESTRICT
#define ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL 0
#else
#define ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheCacheBuilderSpec_RESTRICT
#if ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_LongParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_LongParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_LongParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif
#if ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_INCLUDE
#define ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_

@class ComGoogleCommonCacheCacheBuilder;
@class ComGoogleCommonCacheLocalCache_StrengthEnum;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonCacheCacheBuilderSpec : NSObject {
 @public
  JavaLangInteger *initialCapacity_;
  JavaLangLong *maximumSize_;
  JavaLangLong *maximumWeight_;
  JavaLangInteger *concurrencyLevel_;
  ComGoogleCommonCacheLocalCache_StrengthEnum *keyStrength_;
  ComGoogleCommonCacheLocalCache_StrengthEnum *valueStrength_;
  JavaLangBoolean *recordStats_;
  jlong writeExpirationDuration_;
  JavaUtilConcurrentTimeUnitEnum *writeExpirationTimeUnit_;
  jlong accessExpirationDuration_;
  JavaUtilConcurrentTimeUnitEnum *accessExpirationTimeUnit_;
  jlong refreshDuration_;
  JavaUtilConcurrentTimeUnitEnum *refreshTimeUnit_;
}

#pragma mark Public

+ (ComGoogleCommonCacheCacheBuilderSpec *)disableCaching;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

+ (ComGoogleCommonCacheCacheBuilderSpec *)parseWithNSString:(NSString *)cacheBuilderSpecification;

- (NSString *)toParsableString;

- (NSString *)description;

#pragma mark Package-Private

- (ComGoogleCommonCacheCacheBuilder *)toCacheBuilder;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec)

J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, initialCapacity_, JavaLangInteger *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, maximumSize_, JavaLangLong *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, maximumWeight_, JavaLangLong *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, concurrencyLevel_, JavaLangInteger *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, keyStrength_, ComGoogleCommonCacheLocalCache_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, valueStrength_, ComGoogleCommonCacheLocalCache_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, recordStats_, JavaLangBoolean *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, writeExpirationTimeUnit_, JavaUtilConcurrentTimeUnitEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, accessExpirationTimeUnit_, JavaUtilConcurrentTimeUnitEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilderSpec, refreshTimeUnit_, JavaUtilConcurrentTimeUnitEnum *)

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec *ComGoogleCommonCacheCacheBuilderSpec_parseWithNSString_(NSString *cacheBuilderSpecification);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec *ComGoogleCommonCacheCacheBuilderSpec_disableCaching();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_ValueParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_ValueParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_ValueParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

@protocol ComGoogleCommonCacheCacheBuilderSpec_ValueParser < NSObject, JavaObject >

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ValueParser)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ValueParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

@interface ComGoogleCommonCacheCacheBuilderSpec_IntegerParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

#pragma mark Protected

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_IntegerParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_IntegerParser_init(ComGoogleCommonCacheCacheBuilderSpec_IntegerParser *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_IntegerParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_LongParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_LongParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_LongParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

@interface ComGoogleCommonCacheCacheBuilderSpec_LongParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

#pragma mark Protected

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_LongParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_LongParser_init(ComGoogleCommonCacheCacheBuilderSpec_LongParser *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_LongParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

@interface ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser : ComGoogleCommonCacheCacheBuilderSpec_IntegerParser

#pragma mark Protected

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_init(ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser *new_ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_InitialCapacityParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

@interface ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser : ComGoogleCommonCacheCacheBuilderSpec_LongParser

#pragma mark Protected

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_init(ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser *new_ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_MaximumSizeParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

@interface ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser : ComGoogleCommonCacheCacheBuilderSpec_LongParser

#pragma mark Protected

- (void)parseLongWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                 withLong:(jlong)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_init(ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser *new_ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_MaximumWeightParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

@interface ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser : ComGoogleCommonCacheCacheBuilderSpec_IntegerParser

#pragma mark Protected

- (void)parseIntegerWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withInt:(jint)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_init(ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser *new_ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ConcurrencyLevelParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheLocalCache_StrengthEnum;

@interface ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (instancetype)initWithComGoogleCommonCacheLocalCache_StrengthEnum:(ComGoogleCommonCacheLocalCache_StrengthEnum *)strength;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_initWithComGoogleCommonCacheLocalCache_StrengthEnum_(ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser *self, ComGoogleCommonCacheLocalCache_StrengthEnum *strength);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser *new_ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser_initWithComGoogleCommonCacheLocalCache_StrengthEnum_(ComGoogleCommonCacheLocalCache_StrengthEnum *strength) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_KeyStrengthParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheLocalCache_StrengthEnum;

@interface ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (instancetype)initWithComGoogleCommonCacheLocalCache_StrengthEnum:(ComGoogleCommonCacheLocalCache_StrengthEnum *)strength;

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_initWithComGoogleCommonCacheLocalCache_StrengthEnum_(ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser *self, ComGoogleCommonCacheLocalCache_StrengthEnum *strength);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser *new_ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser_initWithComGoogleCommonCacheLocalCache_StrengthEnum_(ComGoogleCommonCacheLocalCache_StrengthEnum *strength) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_ValueStrengthParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_

@class ComGoogleCommonCacheCacheBuilderSpec;

@interface ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_init(ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser *new_ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_RecordStatsParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_DurationParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_DurationParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_DurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonCacheCacheBuilderSpec_DurationParser : NSObject < ComGoogleCommonCacheCacheBuilderSpec_ValueParser >

#pragma mark Public

- (void)parseWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                         withNSString:(NSString *)key
                                         withNSString:(NSString *)value;

#pragma mark Protected

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_DurationParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_DurationParser_init(ComGoogleCommonCacheCacheBuilderSpec_DurationParser *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_DurationParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser

#pragma mark Protected

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_init(ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser *new_ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_AccessDurationParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser

#pragma mark Protected

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_init(ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser *new_ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_WriteDurationParser)

#endif

#if !defined (_ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_) && (ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL || ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_INCLUDE)
#define _ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_

@class ComGoogleCommonCacheCacheBuilderSpec;
@class JavaUtilConcurrentTimeUnitEnum;

@interface ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser : ComGoogleCommonCacheCacheBuilderSpec_DurationParser

#pragma mark Protected

- (void)parseDurationWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec
                                                     withLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_init(ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser *new_ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilderSpec_RefreshDurationParser)

#endif

#pragma pop_macro("ComGoogleCommonCacheCacheBuilderSpec_INCLUDE_ALL")