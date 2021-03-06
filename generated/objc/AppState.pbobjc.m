// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: app_state.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

#import "AppState.pbobjc.h"
#import "CommonModel.pbobjc.h"
#import "AppModel.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(CustomerReminder);
GPBObjCClassDeclaration(DataMapValue);

#pragma mark - AppStateRoot

@implementation AppStateRoot

// No extensions in the file and none of the imports (direct or indirect)
// defined extensions, so no need to generate +extensionRegistry.

@end

#pragma mark - AppStateRoot_FileDescriptor

static GPBFileDescriptor *AppStateRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"com.elarian.hera.proto"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - AppState

@implementation AppState

@dynamic hasData_p, data_p;
@dynamic remindersArray, remindersArray_Count;

typedef struct AppState__storage_ {
  uint32_t _has_storage_[1];
  DataMapValue *data_p;
  NSMutableArray *remindersArray;
} AppState__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "data_p",
        .dataTypeSpecific.clazz = GPBObjCClass(DataMapValue),
        .number = AppState_FieldNumber_Data_p,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(AppState__storage_, data_p),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "remindersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(CustomerReminder),
        .number = AppState_FieldNumber_RemindersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(AppState__storage_, remindersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[AppState class]
                                     rootClass:[AppStateRoot class]
                                          file:AppStateRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(AppState__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
