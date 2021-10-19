/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLHLSAudiobookFetcher : NSObject {
    NSURLSession * _session;
}

@property (nonatomic, readonly) NSURLSession *session;

+ (id)preferredStreamFromMasterPlaylist:(id)arg1;

- (void).cxx_destruct;
- (id)initCanUseCellularData:(bool)arg1 powerRequired:(bool)arg2 bundleID:(id)arg3;
- (id)session;
- (id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg1 completion:(id /* block */)arg2;

@end