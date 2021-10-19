/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsMapsAppStateTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsRunCondition> {
    BKSApplicationStateMonitor * _appStateMonitor;
    unsigned int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithState:(unsigned int)arg1;
- (id)objectForJSON;
- (bool)shouldRun;

@end