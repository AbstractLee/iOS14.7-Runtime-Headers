/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
 */

@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC

+ (bool)supportsSecureCoding;

- (struct unique_ptr<DiskImage, std::__1::default_delete<DiskImage>> { struct __compressed_pair<DiskImage *, std::__1::default_delete<DiskImage>> { struct DiskImage {} *x_1_1_1; } x1; })createDiskImage;
- (bool)isWritableFormat;
- (unsigned long long)numBlocks;

@end
