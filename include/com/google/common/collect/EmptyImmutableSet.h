//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/EmptyImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectEmptyImmutableSet_INCLUDE_ALL")
#if ComGoogleCommonCollectEmptyImmutableSet_RESTRICT
#define ComGoogleCommonCollectEmptyImmutableSet_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectEmptyImmutableSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEmptyImmutableSet_RESTRICT

#if !defined (_ComGoogleCommonCollectEmptyImmutableSet_) && (ComGoogleCommonCollectEmptyImmutableSet_INCLUDE_ALL || ComGoogleCommonCollectEmptyImmutableSet_INCLUDE)
#define _ComGoogleCommonCollectEmptyImmutableSet_

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectEmptyImmutableSet : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (ComGoogleCommonCollectImmutableList *)asList;

- (jboolean)containsWithId:(id)target;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)targets;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (NSString *)description;

#pragma mark Package-Private

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

- (id)readResolve;


@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectEmptyImmutableSet)

FOUNDATION_EXPORT ComGoogleCommonCollectEmptyImmutableSet *ComGoogleCommonCollectEmptyImmutableSet_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectEmptyImmutableSet, INSTANCE_, ComGoogleCommonCollectEmptyImmutableSet *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEmptyImmutableSet)

#endif

#pragma pop_macro("ComGoogleCommonCollectEmptyImmutableSet_INCLUDE_ALL")
