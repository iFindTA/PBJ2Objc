//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/FluentIterable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectFluentIterable_INCLUDE_ALL")
#if ComGoogleCommonCollectFluentIterable_RESTRICT
#define ComGoogleCommonCollectFluentIterable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectFluentIterable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectFluentIterable_RESTRICT

#if !defined (_ComGoogleCommonCollectFluentIterable_) && (ComGoogleCommonCollectFluentIterable_INCLUDE_ALL || ComGoogleCommonCollectFluentIterable_INCLUDE)
#define _ComGoogleCommonCollectFluentIterable_

#define JavaLangIterable_RESTRICT 1
#define JavaLangIterable_INCLUDE 1
#include "java/lang/Iterable.h"

@class ComGoogleCommonBaseJoiner;
@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableListMultimap;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class IOSClass;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectFluentIterable : NSObject < JavaLangIterable >

#pragma mark Public

- (jboolean)allMatchWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (jboolean)anyMatchWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (ComGoogleCommonCollectFluentIterable *)appendWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectFluentIterable *)appendWithJavaLangIterable:(id<JavaLangIterable>)other;

- (jboolean)containsWithId:(id)element;

- (id)copyIntoWithJavaUtilCollection:(id<JavaUtilCollection>)collection OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectFluentIterable *)cycle;

- (ComGoogleCommonCollectFluentIterable *)filterWithIOSClass:(IOSClass *)type;

- (ComGoogleCommonCollectFluentIterable *)filterWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

- (ComGoogleCommonBaseOptional *)first;

- (ComGoogleCommonBaseOptional *)firstMatchWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (ComGoogleCommonCollectFluentIterable *)fromWithComGoogleCommonCollectFluentIterable:(ComGoogleCommonCollectFluentIterable *)iterable;

+ (ComGoogleCommonCollectFluentIterable *)fromWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id)getWithInt:(jint)position;

- (ComGoogleCommonCollectImmutableListMultimap *)indexWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction;

- (jboolean)isEmpty;

- (NSString *)joinWithComGoogleCommonBaseJoiner:(ComGoogleCommonBaseJoiner *)joiner;

- (ComGoogleCommonBaseOptional *)last;

- (ComGoogleCommonCollectFluentIterable *)limitWithInt:(jint)size;

+ (ComGoogleCommonCollectFluentIterable *)ofWithNSObjectArray:(IOSObjectArray *)elements;

- (jint)size;

- (ComGoogleCommonCollectFluentIterable *)skipWithInt:(jint)numberToSkip;

- (IOSObjectArray *)toArrayWithIOSClass:(IOSClass *)type;

- (ComGoogleCommonCollectImmutableList *)toList;

- (ComGoogleCommonCollectImmutableMap *)toMapWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)valueFunction;

- (ComGoogleCommonCollectImmutableSet *)toSet;

- (ComGoogleCommonCollectImmutableList *)toSortedListWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSortedSet *)toSortedSetWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (NSString *)description;

- (ComGoogleCommonCollectFluentIterable *)transformWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonCollectFluentIterable *)transformAndConcatWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonCollectImmutableMap *)uniqueIndexWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction;

#pragma mark Protected

- (instancetype)init;

#pragma mark Package-Private

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)iterable;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectFluentIterable)

FOUNDATION_EXPORT void ComGoogleCommonCollectFluentIterable_init(ComGoogleCommonCollectFluentIterable *self);

FOUNDATION_EXPORT void ComGoogleCommonCollectFluentIterable_initWithJavaLangIterable_(ComGoogleCommonCollectFluentIterable *self, id<JavaLangIterable> iterable);

FOUNDATION_EXPORT ComGoogleCommonCollectFluentIterable *ComGoogleCommonCollectFluentIterable_fromWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT ComGoogleCommonCollectFluentIterable *ComGoogleCommonCollectFluentIterable_fromWithComGoogleCommonCollectFluentIterable_(ComGoogleCommonCollectFluentIterable *iterable);

FOUNDATION_EXPORT ComGoogleCommonCollectFluentIterable *ComGoogleCommonCollectFluentIterable_ofWithNSObjectArray_(IOSObjectArray *elements);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectFluentIterable)

#endif

#pragma pop_macro("ComGoogleCommonCollectFluentIterable_INCLUDE_ALL")
