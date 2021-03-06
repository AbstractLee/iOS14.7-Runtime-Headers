/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUUID : NSObject <AFSecurityDigestibleChunksProviding, ASDNotificationType, BSXPCSecureCoding, CRCoding, CRDataType, CREquatable, HKUUIDProvider, HMBQueryableModelFieldCoder, HMFObject, NSCopying, NSSecureCoding, PQLValuable, SASerializable, _PASDistilledString>

@property (readonly, copy) NSString *UUIDString;
@property (readonly) bool an_isLocalDevice;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)UUIDString;
- (struct __CFString { }*)_cfUUIDString;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_LS_UUIDWithData:(id)arg1 digestType:(long long)arg2;
+ (id)_LS_nullUUID;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_UUIDWithData:(id)arg1;
+ (id)hk_v3UUIDWithNameSpace:(id)arg1 name:(id)arg2;

- (id)hk_UUID;
- (long long)hk_compare:(id)arg1;
- (id)hk_dataForUUIDBytes;
- (id)hk_shortRepresentation;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (void)setAssistantIdentifierSalt:(id)arg1;
+ (void)setIdentifierSalt:(id)arg1;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;

- (id)convertToData;

// Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore

- (long long)compare:(id)arg1;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (id)PK_zero;

- (long long)PK_compare:(id)arg1;
- (id)PK_shortDescription;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (id)ar_UUIDWithCFUUIDRef:(struct __CFUUID { }*)arg1;
+ (id)ar_UUIDWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)ar_UUIDWithData:(id)arg1;
+ (id)ar_UUIDWithIntegerValue:(unsigned long long)arg1;
+ (id)ar_zeroUUID;

- (struct __CFUUID { }*)ar_CFUUIDRef;
- (unsigned long long)ar_integerValue;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon

- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

- (bool)an_isLocalDevice;

// Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon

+ (id)asd_generateLogKey;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)ams_base62String;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (bool)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_UUIDWithOpaqueData:(id)arg1;
+ (id)crk_UUIDWithOpaqueString:(id)arg1;
+ (void)crk_condense32BytesIntoFirst16Bytes:(char *)arg1;
+ (id)crk_zerosUUID;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Coherence.framework/Coherence

+ (id)TTZero;

- (long long)TTCompare:(id)arg1;
- (id)TTShortDescription;
- (id)TTxorWith:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge

- (id)base64EncodedStringNoPadding;
- (id)data;
- (id)initWithBase64EncodedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (id)nilUUID;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_maps_UUIDWithData:(id)arg1;

- (id)_maps_data;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)hmf_UUIDWithNamespace:(id)arg1 data:(id)arg2;
+ (id)hmf_zeroUUID;
+ (id)shortDescription;
+ (id)zeroUUID;

- (bool)hmf_isEqualToUUID:(id)arg1;
- (bool)hmf_isEqualToUUIDString:(id)arg1;
- (id)initWithNamespace:(id)arg1 data:(id)arg2;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbUUIDFromData:(id)arg1;
+ (id)hmbUUIDWithSQLite3Column:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;

- (id)data;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (void)setAssistantIdentifierSalt:(id)arg1;
+ (void)setIdentifierSalt:(id)arg1;
+ (id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;

- (id)convertToData;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_IS_UUIDByXORingUUIDs:(id)arg1;
+ (id)_IS_UUIDWithBytes:(const char *)arg1 size:(unsigned long long)arg2;
+ (id)_IS_UUIDWithData:(id)arg1;
+ (id)_IS_UUIDWithString:(id)arg1;
+ (id)_IS_nullUUID;

- (void)_IS_getUUIDBytes:(char *)arg1 hash64:(unsigned long long*)arg2;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (id)_maps_UUIDWithUUIDString:(id)arg1;
+ (id)_maps_zeroUUID;

- (long long)_maps_compare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (id)msv_UUIDWithData:(id)arg1;
+ (id)uuidWithMSVBase64UUID:(id)arg1;

- (id)MSVBase64UUIDString;
- (id)initWithMSVBase64UUIDString:(id)arg1;
- (id)msv_UUIDData;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

- (id)mt_base62String;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_dataForUUID;
+ (id)_navigation_uuidForData:(id)arg1;

- (id)_navigation_data;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)CR_UUIDFromStdString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
+ (id)CR_repeatedCharUUID:(unsigned char)arg1;
+ (id)CR_zero;
+ (id)TTZero;

- (long long)CR_compare:(id)arg1;
- (id)CR_shortDescription;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })CR_toStdString;
- (long long)TTCompare:(id)arg1;
- (id)TTShortDescription;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

- (id)_pas_revivedString;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)CR_UUIDFromStdString:(const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;
+ (id)CR_repeatedCharUUID:(unsigned char)arg1;
+ (id)CR_zero;
+ (id)TTZero;

- (long long)CR_compare:(id)arg1;
- (id)CR_shortDescription;
- (struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })CR_toStdString;
- (long long)TTCompare:(id)arg1;
- (id)TTShortDescription;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)tu_UUIDv5ForData:(id)arg1 namespaceUUID:(id)arg2;
+ (id)tu_UUIDv5ForString:(id)arg1 namespaceUUID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

- (id)tsp_initWithMessage:(const struct UUID { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (void)tsp_saveToMessage:(struct UUID { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; unsigned long long x6; }*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 bytes:(const void*)arg2 size:(unsigned long long)arg3;
+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 name:(id)arg2;

- (long long)tsu_compare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence

- (id)tsp_initWithMessage:(const struct UUID { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (void)tsp_saveToMessage:(struct UUID { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; unsigned long long x5; unsigned long long x6; }*)arg1;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
