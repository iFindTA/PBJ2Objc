//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/ForwardingList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingList_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingList_RESTRICT
#define ComGoogleCommonCollectForwardingList_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingList_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingList_) && (ComGoogleCommonCollectForwardingList_INCLUDE_ALL || ComGoogleCommonCollectForwardingList_INCLUDE)
#define _ComGoogleCommonCollectForwardingList_

#define ComGoogleCommonCollectForwardingCollection_RESTRICT 1
#define ComGoogleCommonCollectForwardingCollection_INCLUDE 1
#include "com/google/common/collect/ForwardingCollection.h"

#define JavaUtilList_RESTRICT 1
#define JavaUtilList_INCLUDE 1
#include "java/util/List.h"

@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;

@interface ComGoogleCommonCollectForwardingList : ComGoogleCommonCollectForwardingCollection < JavaUtilList >

#pragma mark Public

- (void)addWithInt:(jint)index
            withId:(id)element;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (jboolean)isEqual:(id)object;

- (id)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)element;

- (jint)lastIndexOfWithId:(id)element;

- (id<JavaUtilListIterator>)listIterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (id)removeWithInt:(jint)index;

- (id)setWithInt:(jint)index
          withId:(id)element;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilList>)delegate;

- (jboolean)standardAddWithId:(id)element;

- (jboolean)standardAddAllWithInt:(jint)index
             withJavaLangIterable:(id<JavaLangIterable>)elements;

- (jboolean)standardEqualsWithId:(id)object;

- (jint)standardHashCode;

- (jint)standardIndexOfWithId:(id)element;

- (id<JavaUtilIterator>)standardIterator;

- (jint)standardLastIndexOfWithId:(id)element;

- (id<JavaUtilListIterator>)standardListIterator;

- (id<JavaUtilListIterator>)standardListIteratorWithInt:(jint)start;

- (id<JavaUtilList>)standardSubListWithInt:(jint)fromIndex
                                   withInt:(jint)toIndex;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingList)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingList_init(ComGoogleCommonCollectForwardingList *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingList)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingList_INCLUDE_ALL")
