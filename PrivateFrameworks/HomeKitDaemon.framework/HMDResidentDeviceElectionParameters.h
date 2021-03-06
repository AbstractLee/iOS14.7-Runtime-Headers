/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentDeviceElectionParameters : HMFObject {
    NSSet * _accessories;
    HMFBoolean * _enabled;
    long long  _location;
    HMFProductInfo * _productInfo;
    HMDResidentDevice * _resident;
    HMDHomeKitVersion * _version;
}

@property (readonly, copy) NSArray *accessories;
@property (getter=isEnabled, readonly, copy) HMFBoolean *enabled;
@property (readonly) long long location;
@property (readonly) HMDResidentDevice *resident;

- (void).cxx_destruct;
- (id)accessories;
- (long long)compare:(id)arg1;
- (long long)compare:(id)arg1 outCriteria:(unsigned long long*)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithResident:(id)arg1 enabled:(id)arg2 location:(long long)arg3 accessories:(id)arg4;
- (id)initWithResident:(id)arg1 serializedPayload:(id)arg2;
- (id)isEnabled;
- (bool)isEqual:(id)arg1;
- (long long)location;
- (id)resident;
- (id)serializedPayload;

@end
