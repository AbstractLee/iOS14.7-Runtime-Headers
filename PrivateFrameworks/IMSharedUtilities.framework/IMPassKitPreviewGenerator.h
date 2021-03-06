/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMPassKitPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (bool)hasFailed:(id)arg1 error:(id)arg2;
+ (struct CGImage { }*)newCroppedAndRescaledImageFromPKPassView:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 error:(id*)arg3;
+ (id)passDataForURL:(id)arg1 error:(id*)arg2;
+ (bool)passDataHasFailed:(id)arg1 error:(id)arg2;
+ (id)passForPassData:(id)arg1 error:(id*)arg2;
+ (bool)passHasFailed:(id)arg1 error:(id)arg2;
+ (id)passViewForPass:(id)arg1;
+ (bool)passViewHasFailed:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 error:(id*)arg3;
+ (bool)writesToDisk;

@end
