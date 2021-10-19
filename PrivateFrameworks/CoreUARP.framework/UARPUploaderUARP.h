/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
 */

@interface UARPUploaderUARP : UARPUploader {
    NSMutableSet * _accessories;
    struct uarpControllerAppleObj { 
        struct uarpControllerAppleCallbacksObj { 
            int (*fPreparePersonalizationAsset)(); 
            int (*fPersonalizeAsset)(); 
        } callbacks; 
    }  _appleController;
    struct uarpControllerCallbacksObj { 
        int (*fRequestBuffer)(); 
        int (*fReturnBuffer)(); 
        int (*fRequestTransmitMsgBuffer)(); 
        int (*fReturnTransmitMsgBuffer)(); 
        int (*fSendMessage)(); 
        int (*fAssetProcessingComplete)(); 
        int (*fUpdateInformationTLV)(); 
        int (*fRequestBytesFromAsset)(); 
        int (*fApplyStagedAssetsStatus)(); 
        int (*fAssetAvailableAck)(); 
        int (*fAssetDataTransferAck)(); 
        int (*fAssetRescindAck)(); 
        int (*fSyncAck)(); 
        int (*fVersionDiscoveryResponse)(); 
        int (*fVendorSpecific)(); 
        int (*fDynamicAssetOffer)(); 
        int (*fUnsolicitedDynamicAssetOffer)(); 
        int (*fAssetDataResponse)(); 
        int (*fAssetTransferred)(); 
        int (*fAssetProcessingAck)(); 
        int (*fSetTxWatchdog)(); 
        int (*fCancelTxWatchdog)(); 
    }  _coreCallbacks;
    struct uarpControllerObj { 
        void *pDelegate; 
        void *pVendorExtension; 
        int nextRemoteAccessoryID; 
        int nextAssetID; 
        struct uarpPlatformOptionsObj { 
            unsigned int maxTxPayloadLength; 
            unsigned int maxRxPayloadLength; 
            unsigned int payloadWindowLength; 
            unsigned short protocolVersion; 
        } options; 
        struct uarpControllerCallbacksObj { 
            int (*fRequestBuffer)(); 
            int (*fReturnBuffer)(); 
            int (*fRequestTransmitMsgBuffer)(); 
            int (*fReturnTransmitMsgBuffer)(); 
            int (*fSendMessage)(); 
            int (*fAssetProcessingComplete)(); 
            int (*fUpdateInformationTLV)(); 
            int (*fRequestBytesFromAsset)(); 
            int (*fApplyStagedAssetsStatus)(); 
            int (*fAssetAvailableAck)(); 
            int (*fAssetDataTransferAck)(); 
            int (*fAssetRescindAck)(); 
            int (*fSyncAck)(); 
            int (*fVersionDiscoveryResponse)(); 
            int (*fVendorSpecific)(); 
            int (*fDynamicAssetOffer)(); 
            int (*fUnsolicitedDynamicAssetOffer)(); 
            int (*fAssetDataResponse)(); 
            int (*fAssetTransferred)(); 
            int (*fAssetProcessingAck)(); 
            int (*fSetTxWatchdog)(); 
            int (*fCancelTxWatchdog)(); 
        } callbacks; 
        struct uarpRemoteAccessoryObj {} *pAccessoryList; 
        struct uarpControllerAssetObj {} *pAssetList; 
        struct uarpControllerAssetObj {} *pRxAssetList; 
    }  _coreController;
    NSObject<OS_os_log> * _log;
    struct uarpPlatformOptionsObj { 
        unsigned int maxTxPayloadLength; 
        unsigned int maxRxPayloadLength; 
        unsigned int payloadWindowLength; 
        unsigned short protocolVersion; 
    }  _options;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _txWatchdogTimer;
}

- (void).cxx_destruct;
- (bool)addAccessory:(id)arg1 error:(id*)arg2;
- (void)applyStagedAssetStatus:(id)arg1 status:(unsigned short)arg2;
- (bool)applyStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)cancelAssetStagingForAccessory:(id)arg1 asset:(id)arg2;
- (void)cancelTxWatchdogTimer;
- (void)dynamicAssetBytesResponded:(id)arg1 asset:(id)arg2 data:(id)arg3 offset:(unsigned long long)arg4;
- (id)dynamicAssetFilePath:(id)arg1;
- (void)dynamicAssetFullyTransferred:(id)arg1 asset:(id)arg2;
- (void)dynamicAssetOffered:(id)arg1 asset:(id)arg2;
- (bool)genericNotification:(id)arg1 notificationName:(id)arg2 error:(id*)arg3;
- (void)handleTxWatchdogTimer;
- (id)init;
- (bool)offerAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)offerDynamicAssetToAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)pauseAssetTransfersForAccessory:(id)arg1;
- (unsigned int)personalizeAsset:(struct uarpControllerAssetObj { struct uarpAssetCoreObj { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned int x_1_1_3; struct UARP4ccTag { unsigned char x_4_2_1; unsigned char x_4_2_2; unsigned char x_4_2_3; unsigned char x_4_2_4; } x_1_1_4; struct UARPVersion { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; } x_1_1_5; unsigned int x_1_1_6; unsigned short x_1_1_7; } x1; unsigned short x2; void *x3; void *x4; struct uarpRemoteAccessoryObj {} *x5; struct uarpControllerAssetObj {} *x6; }*)arg1 forAccessory:(id)arg2;
- (void)processingAck:(id)arg1 asset:(id)arg2 status:(unsigned short)arg3;
- (void)processingComplete:(id)arg1 asset:(id)arg2 status:(unsigned short)arg3;
- (void)queryFirmwareUpdateResultForAccessory:(id)arg1;
- (long long)queryProperty:(unsigned long long)arg1 forAccessory:(id)arg2;
- (unsigned int)recvAppleAccessoryInfoForAccessory:(id)arg1 buffer:(struct UARPMsgAccessoryAppleInformationResponse { unsigned int x1; }*)arg2 length:(unsigned int)arg3;
- (bool)recvDataFromAccessory:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (unsigned int)recvPersonalizationInfoResponseForAccessory:(id)arg1 buffer:(struct AppleUARPPersonalizationInfoResponse { unsigned int x1; unsigned int x2; }*)arg2 length:(unsigned int)arg3;
- (unsigned int)recvPersonalizationRequestForAccessory:(id)arg1 buffer:(struct AppleUARPPersonalizationRequired { unsigned short x1; unsigned int x2; }*)arg2 length:(unsigned int)arg3;
- (unsigned int)recvVendorSpecificMessage:(unsigned short)arg1 forAccessory:(id)arg2 oui:(struct UARPOUI { unsigned char x1; unsigned char x2; unsigned char x3; }*)arg3 buffer:(char *)arg4 length:(unsigned int)arg5;
- (bool)removeAccessory:(id)arg1 error:(id*)arg2;
- (unsigned int)requestBytesInRangeForAccessory:(id)arg1 asset:(id)arg2 bytes:(void*)arg3 length:(unsigned int)arg4 offset:(unsigned int)arg5 bytesCopied:(unsigned int*)arg6 offsetUsed:(unsigned int*)arg7;
- (void)rescindStagedAssetsAck:(id)arg1;
- (bool)rescindStagedAssetsForAccessory:(id)arg1 error:(id*)arg2;
- (bool)resumeAssetTransfersForAccessory:(id)arg1;
- (unsigned int)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2;
- (bool)setController:(id)arg1;
- (void)setTxWatchdogTimer;
- (void)solicitDynamicAsset:(id)arg1 forAccessory:(id)arg2;
- (bool)solicitDynamicAssetForAccessory:(id)arg1 asset:(id)arg2 error:(id*)arg3;
- (bool)supplementalAssetUpdated:(id)arg1 assetName:(id)arg2 error:(id*)arg3;
- (void)syncFromAccessory:(id)arg1;
- (bool)unsolicitedDynamicAssetForAccessory:(id)arg1 assetTag:(id)arg2 error:(id*)arg3;
- (id)unsolicitedDynamicAssetOffered:(id)arg1 assetTag:(struct UARP4ccTag { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg2;
- (void)updateInfo:(id)arg1 type:(unsigned int)arg2 length:(unsigned int)arg3 value:(char *)arg4;
- (void)versionDiscoveryResponse:(id)arg1 protocolVersion:(unsigned short)arg2;

@end