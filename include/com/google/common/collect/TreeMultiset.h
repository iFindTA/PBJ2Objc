//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/TreeMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectTreeMultiset_RESTRICT
#define ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTreeMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectTreeMultiset_) && (ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL || ComGoogleCommonCollectTreeMultiset_INCLUDE)
#define _ComGoogleCommonCollectTreeMultiset_

#define ComGoogleCommonCollectAbstractSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractSortedMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractSortedMultiset.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectGeneralRange;
@class ComGoogleCommonCollectTreeMultiset_AvlNode;
@class ComGoogleCommonCollectTreeMultiset_Reference;
@protocol ComGoogleCommonCollectSortedMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectTreeMultiset : ComGoogleCommonCollectAbstractSortedMultiset < JavaIoSerializable >

#pragma mark Public

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jint)countWithId:(id)element;

+ (ComGoogleCommonCollectTreeMultiset *)create;

+ (ComGoogleCommonCollectTreeMultiset *)createWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectTreeMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id)upperBound
                       withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

- (jint)size;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id)lowerBound
                       withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (instancetype)initWithComGoogleCommonCollectTreeMultiset_Reference:(ComGoogleCommonCollectTreeMultiset_Reference *)rootReference
                              withComGoogleCommonCollectGeneralRange:(ComGoogleCommonCollectGeneralRange *)range
                      withComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)endLink;

- (id<JavaUtilIterator>)descendingEntryIterator;

- (jint)distinctElements;

+ (jint)distinctElementsWithComGoogleCommonCollectTreeMultiset_AvlNode:(ComGoogleCommonCollectTreeMultiset_AvlNode *)node;

- (id<JavaUtilIterator>)entryIterator;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeMultiset)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_create();

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_createWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *ComGoogleCommonCollectTreeMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeMultiset_initWithComGoogleCommonCollectTreeMultiset_Reference_withComGoogleCommonCollectGeneralRange_withComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset *self, ComGoogleCommonCollectTreeMultiset_Reference *rootReference, ComGoogleCommonCollectGeneralRange *range, ComGoogleCommonCollectTreeMultiset_AvlNode *endLink);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *new_ComGoogleCommonCollectTreeMultiset_initWithComGoogleCommonCollectTreeMultiset_Reference_withComGoogleCommonCollectGeneralRange_withComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_Reference *rootReference, ComGoogleCommonCollectGeneralRange *range, ComGoogleCommonCollectTreeMultiset_AvlNode *endLink) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeMultiset_initWithJavaUtilComparator_(ComGoogleCommonCollectTreeMultiset *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultiset *new_ComGoogleCommonCollectTreeMultiset_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jint ComGoogleCommonCollectTreeMultiset_distinctElementsWithComGoogleCommonCollectTreeMultiset_AvlNode_(ComGoogleCommonCollectTreeMultiset_AvlNode *node);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeMultiset)

#endif

#pragma pop_macro("ComGoogleCommonCollectTreeMultiset_INCLUDE_ALL")
