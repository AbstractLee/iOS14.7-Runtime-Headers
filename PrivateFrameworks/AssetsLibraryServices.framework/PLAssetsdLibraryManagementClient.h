/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient

- (id)activePhotoLibraries:(id*)arg1;
- (bool)closeAndDeletePhotoLibraryAtURL:(id)arg1 error:(id*)arg2;
- (void)getPhotoLibraryURLsWithLibraryURL:(id)arg1 reply:(id /* block */)arg2;
- (bool)overrideSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2;
- (bool)removePhotoLibraryURL:(id)arg1 error:(id*)arg2;
- (bool)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2;

@end
