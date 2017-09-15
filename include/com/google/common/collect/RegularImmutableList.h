//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/RegularImmutableList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectRegularImmutableList_INCLUDE_ALL")
#if ComGoogleCommonCollectRegularImmutableList_RESTRICT
#define ComGoogleCommonCollectRegularImmutableList_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRegularImmutableList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableList_RESTRICT

#if !defined (_ComGoogleCommonCollectRegularImmutableList_) && (ComGoogleCommonCollectRegularImmutableList_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableList_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableList_

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectUnmodifiableListIterator;
@class IOSObjectArray;

@interface ComGoogleCommonCollectRegularImmutableList : ComGoogleCommonCollectImmutableList

#pragma mark Public

- (id)getWithInt:(jint)index;

- (jint)indexOfWithId:(id)object;

- (jint)lastIndexOfWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableListIterator *)listIteratorWithInt:(jint)index;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)array;

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)array
                              withInt:(jint)offset
                              withInt:(jint)size;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray *)dst
                               withInt:(jint)dstOff OBJC_METHOD_FAMILY_NONE;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectImmutableList *)subListUncheckedWithInt:(jint)fromIndex
                                                         withInt:(jint)toIndex;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableList)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_withInt_withInt_(ComGoogleCommonCollectRegularImmutableList *self, IOSObjectArray *array, jint offset, jint size);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableList *new_ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_withInt_withInt_(IOSObjectArray *array, jint offset, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_(ComGoogleCommonCollectRegularImmutableList *self, IOSObjectArray *array);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableList *new_ComGoogleCommonCollectRegularImmutableList_initWithNSObjectArray_(IOSObjectArray *array) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableList)

#endif

#pragma pop_macro("ComGoogleCommonCollectRegularImmutableList_INCLUDE_ALL")