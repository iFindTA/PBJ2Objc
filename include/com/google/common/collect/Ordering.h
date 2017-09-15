//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/Ordering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectOrdering_INCLUDE_ALL")
#if ComGoogleCommonCollectOrdering_RESTRICT
#define ComGoogleCommonCollectOrdering_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectOrdering_RESTRICT
#if ComGoogleCommonCollectOrdering_ArbitraryOrdering_INCLUDE
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#endif

#if !defined (_ComGoogleCommonCollectOrdering_) && (ComGoogleCommonCollectOrdering_INCLUDE_ALL || ComGoogleCommonCollectOrdering_INCLUDE)
#define _ComGoogleCommonCollectOrdering_

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"

@class ComGoogleCommonCollectImmutableList;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

#define ComGoogleCommonCollectOrdering_LEFT_IS_GREATER 1
#define ComGoogleCommonCollectOrdering_RIGHT_IS_GREATER -1

@interface ComGoogleCommonCollectOrdering : NSObject < JavaUtilComparator >

#pragma mark Public

+ (ComGoogleCommonCollectOrdering *)allEqual;

+ (ComGoogleCommonCollectOrdering *)arbitrary;

- (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)sortedList
                              withId:(id)key;

- (jint)compareWithId:(id)left
               withId:(id)right;

- (ComGoogleCommonCollectOrdering *)compoundWithJavaUtilComparator:(id<JavaUtilComparator>)secondaryComparator;

+ (ComGoogleCommonCollectOrdering *)compoundWithJavaLangIterable:(id<JavaLangIterable>)comparators;

+ (ComGoogleCommonCollectOrdering *)explicit__WithJavaUtilList:(id<JavaUtilList>)valuesInOrder;

+ (ComGoogleCommonCollectOrdering *)explicit__WithId:(id)leastValue
                                   withNSObjectArray:(IOSObjectArray *)remainingValuesInOrder;

+ (ComGoogleCommonCollectOrdering *)fromWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectOrdering *)fromWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering;

- (id<JavaUtilList>)greatestOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                           withInt:(jint)k;

- (id<JavaUtilList>)greatestOfWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                           withInt:(jint)k;

- (ComGoogleCommonCollectImmutableList *)immutableSortedCopyWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (jboolean)isOrderedWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (jboolean)isStrictlyOrderedWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id<JavaUtilList>)leastOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                        withInt:(jint)k;

- (id<JavaUtilList>)leastOfWithJavaUtilIterator:(id<JavaUtilIterator>)elements
                                        withInt:(jint)k;

- (ComGoogleCommonCollectOrdering *)lexicographical;

- (id)maxWithId:(id)a
         withId:(id)b;

- (id)maxWithId:(id)a
         withId:(id)b
         withId:(id)c
withNSObjectArray:(IOSObjectArray *)rest;

- (id)maxWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id)maxWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

- (id)minWithId:(id)a
         withId:(id)b;

- (id)minWithId:(id)a
         withId:(id)b
         withId:(id)c
withNSObjectArray:(IOSObjectArray *)rest;

- (id)minWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id)minWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (ComGoogleCommonCollectOrdering *)natural;

- (ComGoogleCommonCollectOrdering *)nullsFirst;

- (ComGoogleCommonCollectOrdering *)nullsLast;

- (ComGoogleCommonCollectOrdering *)onResultOfWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonCollectOrdering *)reverse;

- (id<JavaUtilList>)sortedCopyWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (ComGoogleCommonCollectOrdering *)usingToString;

#pragma mark Protected

- (instancetype)init;

#pragma mark Package-Private

- (ComGoogleCommonCollectOrdering *)onKeys;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectOrdering, LEFT_IS_GREATER, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectOrdering, RIGHT_IS_GREATER, jint)

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_natural();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_fromWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_fromWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *ordering);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_explicit__WithJavaUtilList_(id<JavaUtilList> valuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_explicit__WithId_withNSObjectArray_(id leastValue, IOSObjectArray *remainingValuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_allEqual();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_usingToString();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_arbitrary();

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_init(ComGoogleCommonCollectOrdering *self);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_compoundWithJavaLangIterable_(id<JavaLangIterable> comparators);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering)

#endif

#if !defined (_ComGoogleCommonCollectOrdering_ArbitraryOrdering_) && (ComGoogleCommonCollectOrdering_INCLUDE_ALL || ComGoogleCommonCollectOrdering_ArbitraryOrdering_INCLUDE)
#define _ComGoogleCommonCollectOrdering_ArbitraryOrdering_

@interface ComGoogleCommonCollectOrdering_ArbitraryOrdering : ComGoogleCommonCollectOrdering

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

- (jint)identityHashCodeWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_ArbitraryOrdering)

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_ArbitraryOrdering_init(ComGoogleCommonCollectOrdering_ArbitraryOrdering *self);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_ArbitraryOrdering *new_ComGoogleCommonCollectOrdering_ArbitraryOrdering_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_ArbitraryOrdering)

#endif

#if !defined (_ComGoogleCommonCollectOrdering_IncomparableValueException_) && (ComGoogleCommonCollectOrdering_INCLUDE_ALL || ComGoogleCommonCollectOrdering_IncomparableValueException_INCLUDE)
#define _ComGoogleCommonCollectOrdering_IncomparableValueException_

#define JavaLangClassCastException_RESTRICT 1
#define JavaLangClassCastException_INCLUDE 1
#include "java/lang/ClassCastException.h"

@interface ComGoogleCommonCollectOrdering_IncomparableValueException : JavaLangClassCastException {
 @public
  id value_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_IncomparableValueException)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectOrdering_IncomparableValueException, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_IncomparableValueException_initWithId_(ComGoogleCommonCollectOrdering_IncomparableValueException *self, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_IncomparableValueException *new_ComGoogleCommonCollectOrdering_IncomparableValueException_initWithId_(id value) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_IncomparableValueException)

#endif

#pragma pop_macro("ComGoogleCommonCollectOrdering_INCLUDE_ALL")