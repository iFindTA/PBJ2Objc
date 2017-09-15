//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/SortedLists.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectSortedLists_INCLUDE_ALL")
#if ComGoogleCommonCollectSortedLists_RESTRICT
#define ComGoogleCommonCollectSortedLists_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectSortedLists_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSortedLists_RESTRICT

#if !defined (_ComGoogleCommonCollectSortedLists_) && (ComGoogleCommonCollectSortedLists_INCLUDE_ALL || ComGoogleCommonCollectSortedLists_INCLUDE)
#define _ComGoogleCommonCollectSortedLists_

@class ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum;
@class ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangComparable;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectSortedLists : NSObject

#pragma mark Public

+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)list
                              withId:(id)key
              withJavaUtilComparator:(id<JavaUtilComparator>)comparator
withComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum:(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum:(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *)absentBehavior;

+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)list
              withJavaLangComparable:(id<JavaLangComparable>)e
withComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum:(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum:(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *)absentBehavior;

+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)list
     withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction
                              withId:(id)key
              withJavaUtilComparator:(id<JavaUtilComparator>)keyComparator
withComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum:(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum:(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *)absentBehavior;

+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)list
     withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)keyFunction
              withJavaLangComparable:(id<JavaLangComparable>)key
withComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum:(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum:(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *)absentBehavior;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedLists)

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withJavaLangComparable_withComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_withComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_(id<JavaUtilList> list, id<JavaLangComparable> e, ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withComGoogleCommonBaseFunction_withJavaLangComparable_withComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_withComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_(id<JavaUtilList> list, id<ComGoogleCommonBaseFunction> keyFunction, id<JavaLangComparable> key, ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withComGoogleCommonBaseFunction_withId_withJavaUtilComparator_withComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_withComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_(id<JavaUtilList> list, id<ComGoogleCommonBaseFunction> keyFunction, id key, id<JavaUtilComparator> keyComparator, ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withId_withJavaUtilComparator_withComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_withComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_(id<JavaUtilList> list, id key, id<JavaUtilComparator> comparator, ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *absentBehavior);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists)

#endif

#if !defined (_ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_) && (ComGoogleCommonCollectSortedLists_INCLUDE_ALL || ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_INCLUDE)
#define _ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

@protocol JavaUtilComparator;
@protocol JavaUtilList;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectSortedLists_KeyPresentBehavior) {
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_ANY_PRESENT = 0,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_LAST_PRESENT = 1,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_FIRST_PRESENT = 2,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_FIRST_AFTER = 3,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_LAST_BEFORE = 4,
};

@interface ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

- (jint)resultIndexWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                   withId:(id)key
                         withJavaUtilList:(id<JavaUtilList>)list
                                  withInt:(jint)foundIndex;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_values();

+ (ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum *ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_values_[];

#define ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_ANY_PRESENT ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_values_[ComGoogleCommonCollectSortedLists_KeyPresentBehavior_ANY_PRESENT]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum, ANY_PRESENT)

#define ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_LAST_PRESENT ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_values_[ComGoogleCommonCollectSortedLists_KeyPresentBehavior_LAST_PRESENT]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum, LAST_PRESENT)

#define ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_FIRST_PRESENT ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_values_[ComGoogleCommonCollectSortedLists_KeyPresentBehavior_FIRST_PRESENT]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum, FIRST_PRESENT)

#define ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_FIRST_AFTER ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_values_[ComGoogleCommonCollectSortedLists_KeyPresentBehavior_FIRST_AFTER]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum, FIRST_AFTER)

#define ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_LAST_BEFORE ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum_values_[ComGoogleCommonCollectSortedLists_KeyPresentBehavior_LAST_BEFORE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum, LAST_BEFORE)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists_KeyPresentBehaviorEnum)

#endif

#if !defined (_ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_) && (ComGoogleCommonCollectSortedLists_INCLUDE_ALL || ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_INCLUDE)
#define _ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior) {
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_NEXT_LOWER = 0,
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_NEXT_HIGHER = 1,
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_INVERTED_INSERTION_INDEX = 2,
};

@interface ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

- (jint)resultIndexWithInt:(jint)higherIndex;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_values();

+ (ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum *ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_values_[];

#define ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_NEXT_LOWER ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_values_[ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_NEXT_LOWER]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum, NEXT_LOWER)

#define ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_NEXT_HIGHER ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_values_[ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_NEXT_HIGHER]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum, NEXT_HIGHER)

#define ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_INVERTED_INSERTION_INDEX ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum_values_[ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_INVERTED_INSERTION_INDEX]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum, INVERTED_INSERTION_INDEX)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists_KeyAbsentBehaviorEnum)

#endif

#pragma pop_macro("ComGoogleCommonCollectSortedLists_INCLUDE_ALL")
