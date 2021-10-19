/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSAsset : CLSObject <CLSRelationable, NSFilePresenter> {
    bool  _addedToFilePresenter;
    NSString * _brItemID;
    NSString * _brOwnerName;
    NSString * _brShareName;
    NSString * _brZoneName;
    long long  _completedUnitCount;
    NSURL * _devModeURL;
    double  _fractionUploaded;
    bool  _observingUploadProgress;
    bool  _original;
    NSString * _ownerPersonID;
    NSMetadataQuery * _query;
    NSString * _relativePathWithinContainer;
    long long  _schoolworkSyncStatus;
    bool  _setupCKShare;
    NSError * _sharingError;
    long long  _totalUnitCount;
    NSString * _ubiquitousContainerName;
    NSError * _uploadError;
    NSMutableArray * _uploadObservers;
    NSProgress * _uploadProgress;
    id  _uploadProgressSubscriber;
    unsigned long long  _uploadState;
    bool  _uploaded;
    NSURL * _url;
    bool  _useFilePresenter;
    bool  _useNSFP;
}

@property (nonatomic, retain) NSString *brItemID;
@property (nonatomic, retain) NSString *brOwnerName;
@property (nonatomic, retain) NSString *brShareName;
@property (nonatomic, retain) NSString *brZoneName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *devModeURL;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filenameExtension;
@property (nonatomic, readonly) double fractionUploaded;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (getter=isOriginal, nonatomic) bool original;
@property (nonatomic, retain) NSString *ownerPersonID;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (nonatomic, retain) NSString *relativePathWithinContainer;
@property (nonatomic) long long schoolworkSyncStatus;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *ubiquitousContainerName;
@property (nonatomic, readonly) NSError *uploadError;
@property (getter=isUploaded, nonatomic) bool uploaded;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic) bool useFilePresenter;
@property (nonatomic) bool useNSFP;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithFileURL:(id)arg1;
- (void)addToFilePresenter;
- (void)addUploadObserver:(id)arg1;
- (id)brItemID;
- (id)brOwnerName;
- (id)brShareName;
- (id)brZoneName;
- (void)checkForCKShare:(id /* block */)arg1;
- (void)createShareIfNeeded:(id /* block */)arg1;
- (void)createShareIfNeeded_Imp:(id /* block */)arg1;
- (bool)deleteFile:(id*)arg1;
- (bool)deleteFileAtURL:(id)arg1 error:(id*)arg2;
- (void)deleteFileWithCompletion:(id /* block */)arg1;
- (bool)devModeOn;
- (id)devModeURL;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchUsersAndAddToShare:(id)arg1 completion:(id /* block */)arg2;
- (long long)fileSize;
- (id)fileURL;
- (id)fileURL_deprecated;
- (id)filenameExtension;
- (double)fractionUploaded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 withOwnerPersonID:(id)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isOriginal;
- (bool)isUploaded;
- (void)mergeWithObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedPresentedItemUbiquityAttributes;
- (id)ownerPersonID;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)processItems:(id)arg1;
- (void)queryGatheredData:(id)arg1;
- (void)queryUpdated:(id)arg1;
- (void)queued_notifyUploadCompletion;
- (void)queued_notifyUploadProgress;
- (void)queued_startObservingUploadProgress;
- (void)queued_stopObservingUploadProgress;
- (id)relativePathWithinContainer;
- (void)removeFromFilePresenter;
- (void)removeUploadObserver:(id)arg1;
- (long long)schoolworkSyncStatus;
- (void)setBrItemID:(id)arg1;
- (void)setBrOwnerName:(id)arg1;
- (void)setBrShareName:(id)arg1;
- (void)setBrZoneName:(id)arg1;
- (void)setDevModeURL:(id)arg1;
- (void)setOriginal:(bool)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setRelativePathWithinContainer:(id)arg1;
- (void)setSchoolworkSyncStatus:(long long)arg1;
- (void)setUbiquitousContainerName:(id)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseFilePresenter:(bool)arg1;
- (void)setUseNSFP:(bool)arg1;
- (id)ubiquitousContainerName;
- (id)uploadError;
- (id)uploadFileIfNeeded:(id*)arg1;
- (id)uploadObservers;
- (void)uploadStateChanged:(unsigned long long)arg1;
- (id)url;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)arg1;
- (bool)useFilePresenter;
- (bool)useNSFP;
- (bool)validateObject:(id*)arg1;
- (void)willSaveObject;

@end