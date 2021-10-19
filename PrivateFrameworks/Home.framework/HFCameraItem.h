/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraItem : HFAccessoryProfileItem <HFCompoundItemProtocol>

@property (nonatomic, readonly) NSArray *allHomeKitObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) bool isCompoundItem;
@property (nonatomic, readonly) unsigned long long numberOfCompoundItems;
@property (nonatomic, readonly) <HFHomeKitObject> *primaryHomeKitObject;
@property (readonly) Class superclass;

+ (bool)cameraContainsMotionServiceItem:(id)arg1;
+ (void)getErrorDescription:(out id*)arg1 detailedErrorDescription:(out id*)arg2 forCameraStreamError:(id)arg3;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)description;
- (bool)isCompoundItem;
- (unsigned long long)numberOfCompoundItems;
- (id)primaryHomeKitObject;

@end