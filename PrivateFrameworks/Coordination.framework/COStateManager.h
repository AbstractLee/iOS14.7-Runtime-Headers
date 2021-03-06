/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Coordination.framework/Coordination
 */

@interface COStateManager : NSObject <COStateManagerClientInterface> {
    NSString * _cluster;
    NSArray * _observers;
    <COStateManagerConnectionProvider> * _provider;
}

@property (nonatomic, readonly, copy) NSString *cluster;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *observers;
@property (nonatomic, readonly) <COStateManagerConnectionProvider> *provider;
@property (readonly) Class superclass;

+ (id)stateManagerForExaminationOfCluster:(id)arg1;
+ (id)stateManagerForLocalCluster;
+ (id)stateManagerForMediaSystem;

- (void).cxx_destruct;
- (id)addMediaSystemLeaderObserverToDispatchQueue:(id)arg1 block:(id /* block */)arg2;
- (id)cluster;
- (void)fetchClusterCompositionToDispatchQueue:(id)arg1 block:(id /* block */)arg2;
- (id)initWithConnectionProvider:(id)arg1 cluster:(id)arg2;
- (bool)isMediaSystemLeader;
- (void)mediaSystemLeaderDidChangeTo:(bool)arg1 callback:(id /* block */)arg2;
- (id)observers;
- (id)provider;
- (void)removeMediaSystemLeaderObserver:(id)arg1;
- (void)roleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;
- (void)setObservers:(id)arg1;

@end
