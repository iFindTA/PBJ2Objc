//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/VirtualMachineError.java
//

#ifndef _JavaLangVirtualMachineError_H_
#define _JavaLangVirtualMachineError_H_

#include "J2ObjC_header.h"
#include "java/lang/Error.h"

@interface JavaLangVirtualMachineError : JavaLangError

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangVirtualMachineError)

FOUNDATION_EXPORT void JavaLangVirtualMachineError_init(JavaLangVirtualMachineError *self);

FOUNDATION_EXPORT void JavaLangVirtualMachineError_initWithNSString_(JavaLangVirtualMachineError *self, NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangVirtualMachineError)

#endif // _JavaLangVirtualMachineError_H_
