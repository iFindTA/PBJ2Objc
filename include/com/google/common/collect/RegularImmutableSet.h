//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/RegularImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectRegularImmutableSet_INCLUDE_ALL")
#if ComGoogleCommonCollectRegularImmutableSet_RESTRICT
#define ComGoogleCommonCollectRegularImmutableSet_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRegularImmutableSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableSet_RESTRICT

#if !defined (_ComGoogleCommonCollectRegularImmutableSet_) && (ComGoogleCommonCollectRegularImmutableSet_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSet_

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

@interface ComGoogleCommonCollectRegularImmutableSet : ComGoogleCommonCollectImmutableSet {
 @public
  IOSObjectArray *table_;
}

#pragma mark Public

- (jboolean)containsWithId:(id)target;

- (NSUInteger)hash;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)elements
                              withInt:(jint)hashCode
                    withNSObjectArray:(IOSObjectArray *)table
                              withInt:(jint)mask;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectRegularImmutableSet, table_, IOSObjectArray *)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableSet_initWithNSObjectArray_withInt_withNSObjectArray_withInt_(ComGoogleCommonCollectRegularImmutableSet *self, IOSObjectArray *elements, jint hashCode, IOSObjectArray *table, jint mask);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSet *new_ComGoogleCommonCollectRegularImmutableSet_initWithNSObjectArray_withInt_withNSObjectArray_withInt_(IOSObjectArray *elements, jint hashCode, IOSObjectArray *table, jint mask) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableSet)

#endif

#pragma pop_macro("ComGoogleCommonCollectRegularImmutableSet_INCLUDE_ALL")