/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingControllerHelper : NSObject <MRNowPlayingControllerDelegate> {
    id /* block */  _clientPropertiesDidChange;
    id /* block */  _didFailWithError;
    id /* block */  _didInvalidate;
    id /* block */  _didLoadResponse;
    id /* block */  _playbackStateDidChange;
    id /* block */  _playerPathDidChange;
    id /* block */  _supportedCommandsDidChange;
}

@property (nonatomic, copy) id /* block */ clientPropertiesDidChange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFailWithError;
@property (nonatomic, copy) id /* block */ didInvalidate;
@property (nonatomic, copy) id /* block */ didLoadResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ playbackStateDidChange;
@property (nonatomic, copy) id /* block */ playerPathDidChange;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ supportedCommandsDidChange;

- (void).cxx_destruct;
- (id /* block */)clientPropertiesDidChange;
- (void)controller:(id)arg1 clientPropertiesDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;
- (void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)controller:(id)arg1 playerPathDidChange:(id)arg2;
- (void)controller:(id)arg1 supportedCommandsDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)controllerWillReloadForInvalidation:(id)arg1;
- (id /* block */)didFailWithError;
- (id /* block */)didInvalidate;
- (id /* block */)didLoadResponse;
- (id /* block */)playbackStateDidChange;
- (id /* block */)playerPathDidChange;
- (void)setClientPropertiesDidChange:(id /* block */)arg1;
- (void)setDidFailWithError:(id /* block */)arg1;
- (void)setDidInvalidate:(id /* block */)arg1;
- (void)setDidLoadResponse:(id /* block */)arg1;
- (void)setPlaybackStateDidChange:(id /* block */)arg1;
- (void)setPlayerPathDidChange:(id /* block */)arg1;
- (void)setSupportedCommandsDidChange:(id /* block */)arg1;
- (id /* block */)supportedCommandsDidChange;

@end
