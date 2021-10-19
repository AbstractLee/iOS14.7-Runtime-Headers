/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
 */

@interface VLTileDataProvider : NSObject <VLLocalizationDataProvider> {
    GEOApplicationAuditToken * _auditToken;
    <VLLocalizationDataProviderDelegate> * _delegate;
    geo_isolater * _isolation;
    unsigned int  _lastFormatVersion;
    GEOTileData * _lastLoadedData;
    struct { 
        int level; 
        int x; 
        int y; 
        int uncertainty; 
    }  _lastLoadedKey;
    struct list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey>> { 
        struct __list_node_base<VLLocalizationDataKey, void *> { 
            struct __list_node_base<VLLocalizationDataKey, void *> {} *__prev_; 
            struct __list_node_base<VLLocalizationDataKey, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<VLLocalizationDataKey, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _loadingKeys;
    unsigned int  _maxSupportedFormatVersion;
    GEOTileKeyMap * _pendingMetadataTiles;
    struct list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey>> { 
        struct __list_node_base<VLLocalizationDataKey, void *> { 
            struct __list_node_base<VLLocalizationDataKey, void *> {} *__prev_; 
            struct __list_node_base<VLLocalizationDataKey, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<VLLocalizationDataKey, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _recentFailures;
    struct list<VLLocalizationDataKey, std::__1::allocator<VLLocalizationDataKey>> { 
        struct __list_node_base<VLLocalizationDataKey, void *> { 
            struct __list_node_base<VLLocalizationDataKey, void *> {} *__prev_; 
            struct __list_node_base<VLLocalizationDataKey, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<VLLocalizationDataKey, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _recentUnsupportedTiles;
    NSArray * _supportedFormatVersions;
    GEOTileLoader * _tileLoader;
    NSString * _tileLoaderClientID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VLLocalizationDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_commonInitWithTileLoader:(id)arg1 auditToken:(id)arg2 supportedFormatVersions:(id)arg3;
- (void)_disburseMetadataTileForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 36; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 tileData:(id)arg2 error:(id)arg3;
- (void)_fetchDataTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 36; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 originalKey:(const struct { int x1; int x2; int x3; int x4; }*)arg2 additionalInfo:(const struct _GEOVisualLocalizationTrackAdditionalInfo { unsigned long long x1; unsigned int x2; unsigned int x3 : 6; }*)arg3;
- (void)_fetchMetadataForCoordinate:(const struct { double x1; double x2; }*)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchMetadataForDataKey:(const struct { int x1; int x2; int x3; int x4; }*)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchMetadataTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 36; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)determineAvailabilityForCoordinate:(const struct { double x1; double x2; }*)arg1 purpose:(long long)arg2 callbackQueue:(id)arg3 callback:(id /* block */)arg4;
- (id)fileURLForKey:(const struct { int x1; int x2; int x3; int x4; }*)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithAuditToken:(id)arg1 supportedFormatVersions:(id)arg2;
- (void)setDelegate:(id)arg1;

@end