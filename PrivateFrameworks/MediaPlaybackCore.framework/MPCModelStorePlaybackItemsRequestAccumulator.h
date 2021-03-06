/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject {
    bool  _allowsExplicitContent;
    long long  _defaultLibraryPersonalizationStyle;
    NSMutableDictionary * _equivalencyMapping;
    NSMutableSet * _failedStoreIDs;
    NSMutableArray * _importResults;
    NSMutableOrderedSet * _pendingStoreIDs;
    NSString * _personID;
    MPMutableSectionedCollection * _progressiveContentDescriptors;
    MPCModelStorePlaybackItemsRequest * _request;
    MPPropertySet * _requestPropertySet;
    bool  _requestUsesSectionedModelObjects;
    MPServerObjectDatabase * _sod;
    long long  _storePersonalizationStyle;
    long long  _unknownEndpointLibraryPersonalizationStyle;
}

@property (nonatomic, readonly) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; } accumulatorResult;
@property (nonatomic, readonly, copy) NSDictionary *equivalencyMapping;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void).cxx_destruct;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (struct _MPCModelStorePlaybackItemEligibility { bool x1; long long x2; })_eligibilityForItem:(id)arg1;
- (id)_mergedObjectWithRequestedObjectIfNeeded:(id)arg1 forIndexPath:(id)arg2;
- (id)_playlistEntryForObject:(id)arg1 containerUniqueID:(id)arg2;
- (void)_resolveContentDescriptorsUsingServerObjectDatabase;
- (id)_serverObjectFromPlaceholderContentDescriptor:(id)arg1 propertySet:(id)arg2;
- (id)_userIdentityWithRequest:(id)arg1;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; })accumulatorResult;
- (id)equivalencyMapping;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { bool x1; bool x2; })handleResponse:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 serverObjectDatabase:(id)arg2;
- (id)newStoreItemMetadataRequest;
- (id)unpersonalizedContentDescriptors;

@end
