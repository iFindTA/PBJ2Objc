//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/SingletonImmutableList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectSingletonImmutableList_INCLUDE_ALL")
#if ComGoogleCommonCollectSingletonImmutableList_RESTRICT
#define ComGoogleCommonCollectSingletonImmutableList_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSingletonImmutableList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSingletonImmutableList_RESTRICT

#if !defined (_ComGoogleCommonCollectSingletonImmutableList_) && (ComGoogleCommonCollectSingletonImmutableList_INCLUDE_ALL || ComGoogleCommonCollectSingletonImmutableList_INCLUDE)
#define _ComGoogleCommonCollectSingletonImmutableList_

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

@interface ComGoogleCommonCollectSingletonImmutableList : ComGoogleCommonCollectImmutableList {
 @public
  id element_;
}

#pragma mark Public

- (jboolean)containsWithId:(id)object;

- (jboolean)isEqual:(id)object;

- (id)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)object;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)lastIndexOfWithId:(id)object;

- (ComGoogleCommonCollectImmutableList *)reverse;

- (jint)size;

- (ComGoogleCommonCollectImmutableList *)subListWithInt:(jint)fromIndex
                                                withInt:(jint)toIndex;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithId:(id)element;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableList)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableList, element_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableList_initWithId_(ComGoogleCommonCollectSingletonImmutableList *self, id element);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableList *new_ComGoogleCommonCollectSingletonImmutableList_initWithId_(id element) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableList)

#endif

#pragma pop_macro("ComGoogleCommonCollectSingletonImmutableList_INCLUDE_ALL")
