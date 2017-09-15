//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/free6om/Documents/open-source/j2objc/j2objc/guava/sources/com/google/common/collect/ForwardingTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectForwardingTable_INCLUDE_ALL")
#if ComGoogleCommonCollectForwardingTable_RESTRICT
#define ComGoogleCommonCollectForwardingTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectForwardingTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingTable_RESTRICT

#if !defined (_ComGoogleCommonCollectForwardingTable_) && (ComGoogleCommonCollectForwardingTable_INCLUDE_ALL || ComGoogleCommonCollectForwardingTable_INCLUDE)
#define _ComGoogleCommonCollectForwardingTable_

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"

@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectForwardingTable : ComGoogleCommonCollectForwardingObject < ComGoogleCommonCollectTable >

#pragma mark Public

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)isEqual:(id)obj;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)init;

- (id<ComGoogleCommonCollectTable>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingTable)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingTable_init(ComGoogleCommonCollectForwardingTable *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingTable)

#endif

#pragma pop_macro("ComGoogleCommonCollectForwardingTable_INCLUDE_ALL")
