//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/CollectPreconditions.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectCollectPreconditions_INCLUDE_ALL")
#if ComGoogleCommonCollectCollectPreconditions_RESTRICT
#define ComGoogleCommonCollectCollectPreconditions_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectCollectPreconditions_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectCollectPreconditions_RESTRICT

#if !defined (_ComGoogleCommonCollectCollectPreconditions_) && (ComGoogleCommonCollectCollectPreconditions_INCLUDE_ALL || ComGoogleCommonCollectCollectPreconditions_INCLUDE)
#define _ComGoogleCommonCollectCollectPreconditions_

@interface ComGoogleCommonCollectCollectPreconditions : NSObject

#pragma mark Package-Private

- (instancetype)init;

+ (void)checkEntryNotNullWithId:(id)key
                         withId:(id)value;

+ (jint)checkNonnegativeWithInt:(jint)value
                   withNSString:(NSString *)name;

+ (void)checkRemoveWithBoolean:(jboolean)canRemove;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCollectPreconditions)

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectPreconditions_checkEntryNotNullWithId_withId_(id key, id value);

FOUNDATION_EXPORT jint ComGoogleCommonCollectCollectPreconditions_checkNonnegativeWithInt_withNSString_(jint value, NSString *name);

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectPreconditions_checkRemoveWithBoolean_(jboolean canRemove);

FOUNDATION_EXPORT void ComGoogleCommonCollectCollectPreconditions_init(ComGoogleCommonCollectCollectPreconditions *self);

FOUNDATION_EXPORT ComGoogleCommonCollectCollectPreconditions *new_ComGoogleCommonCollectCollectPreconditions_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCollectPreconditions)

#endif

#pragma pop_macro("ComGoogleCommonCollectCollectPreconditions_INCLUDE_ALL")