/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPSuperBinaryAssetPayload : NSObject {
    unsigned int  _blockSize;
    NSNumber * _buildVersion;
    int  _compression;
    unsigned int  _compressionHeaderIndex;
    NSMutableData * _compressionHeaders;
    NSDictionary * _dict;
    NSString * _fileName;
    NSString * _friendlyName;
    NSObject<OS_os_log> * _log;
    NSNumber * _majorVersion;
    NSNumber * _minorVersion;
    NSData * _payload;
    struct UARPPayloadHeader { 
        unsigned int payloadHeaderLength; 
        unsigned int payloadTag; 
        struct UARPVersion { 
            unsigned int major; 
            unsigned int minor; 
            unsigned int release; 
            unsigned int build; 
        } payloadVersion; 
        unsigned int payloadMetadataOffset; 
        unsigned int payloadMetadataLength; 
        unsigned int payloadOffset; 
        unsigned int payloadLength; 
    }  _payloadHeader;
    UARPAssetTag * _payloadTag;
    NSNumber * _releaseVersion;
    NSURL * _superBinaryURL;
    NSString * _tag;
    NSMutableArray * _tlvs;
    struct UARPVersion { 
        unsigned int major; 
        unsigned int minor; 
        unsigned int release; 
        unsigned int build; 
    }  _uarpVersion;
    NSURL * _url;
}

@property (readonly) unsigned long long compressionHeaderIndex;
@property (readonly, copy) NSData *compressionHeaders;
@property (readonly) bool needsCompression;
@property (readonly, copy) NSData *payload;
@property (readonly) UARPAssetTag *payloadTag;
@property (readonly) NSArray *tlvs;

- (void).cxx_destruct;
- (void)addMetaDataTLV:(id)arg1;
- (void)addMetaDataTLVs:(id)arg1;
- (bool)appendPayloadToFile:(id)arg1 bytesWritten:(unsigned long long*)arg2 error:(id*)arg3;
- (unsigned long long)compressionHeaderIndex;
- (id)compressionHeaders;
- (id)description;
- (bool)expandDictionaryWithPayloadsFolder:(id)arg1 metaDataTable:(id)arg2 error:(id*)arg3;
- (bool)expandPayloadToURL:(id)arg1 payloadFilename:(id)arg2 superbinary:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 error:(id*)arg6;
- (bool)expandPayloadToURL:(id)arg1 superbinary:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 error:(id*)arg5;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPayloadHeader:(struct UARPPayloadHeader { unsigned int x1; unsigned int x2; struct UARPVersion { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1;
- (id)initWithTag:(id)arg1 majorVersion:(id)arg2 minorVersion:(id)arg3 releaseVersion:(id)arg4 buildVersion:(id)arg5;
- (bool)needsCompression;
- (bool)parseFromPlistPayloadMetaDataTLVs:(id)arg1 payloadsURL:(id)arg2 error:(id*)arg3;
- (bool)parseFromPlistVersion:(id*)arg1;
- (id)payload;
- (id)payloadTag;
- (id)prepareMetaData;
- (unsigned long long)preparePackedTag;
- (bool)prepareUarpVersion:(struct UARPVersion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeMetadata;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangePayload;
- (bool)setPayloadToContentsOfFile:(id)arg1 friendlyName:(id)arg2 error:(id*)arg3;
- (bool)setPayloadToData:(id)arg1;
- (void)setSuperBinaryURL:(id)arg1;
- (id)tlvs;

@end