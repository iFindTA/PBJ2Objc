//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/RegularImmutableSortedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectRegularImmutableSortedMultiset_RESTRICT
#define ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableSortedMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectRegularImmutableSortedMultiset_) && (ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedMultiset_

#define ComGoogleCommonCollectImmutableSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedMultiset.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRegularImmutableSortedSet;
@class IOSIntArray;
@class IOSLongArray;
@protocol ComGoogleCommonCollectMultiset_Entry;

@interface ComGoogleCommonCollectRegularImmutableSortedMultiset : ComGoogleCommonCollectImmutableSortedMultiset

#pragma mark Public

- (jint)countWithId:(id)element;

- (ComGoogleCommonCollectImmutableSortedSet *)elementSet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (ComGoogleCommonCollectImmutableSortedMultiset *)headMultisetWithId:(id)upperBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (jint)size;

- (ComGoogleCommonCollectImmutableSortedMultiset *)tailMultisetWithId:(id)lowerBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectRegularImmutableSortedSet:(ComGoogleCommonCollectRegularImmutableSortedSet *)elementSet
                                                           withIntArray:(IOSIntArray *)counts
                                                          withLongArray:(IOSLongArray *)cumulativeCounts
                                                                withInt:(jint)offset
                                                                withInt:(jint)length;

- (id<ComGoogleCommonCollectMultiset_Entry>)getEntryWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableSortedMultiset *)getSubMultisetWithInt:(jint)from
                                                                 withInt:(jint)to;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableSortedMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectRegularImmutableSortedMultiset_initWithComGoogleCommonCollectRegularImmutableSortedSet_withIntArray_withLongArray_withInt_withInt_(ComGoogleCommonCollectRegularImmutableSortedMultiset *self, ComGoogleCommonCollectRegularImmutableSortedSet *elementSet, IOSIntArray *counts, IOSLongArray *cumulativeCounts, jint offset, jint length);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSortedMultiset *new_ComGoogleCommonCollectRegularImmutableSortedMultiset_initWithComGoogleCommonCollectRegularImmutableSortedSet_withIntArray_withLongArray_withInt_withInt_(ComGoogleCommonCollectRegularImmutableSortedSet *elementSet, IOSIntArray *counts, IOSLongArray *cumulativeCounts, jint offset, jint length) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableSortedMultiset)

#endif

#pragma pop_macro("ComGoogleCommonCollectRegularImmutableSortedMultiset_INCLUDE_ALL")
