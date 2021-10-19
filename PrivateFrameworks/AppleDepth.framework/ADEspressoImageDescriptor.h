/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
 */

@interface ADEspressoImageDescriptor : NSObject {
    ADImageDescriptor * _imageDescriptor;
    bool  _isInput;
    NSString * _name;
}

@property (nonatomic, readonly) ADImageDescriptor *imageDescriptor;
@property (nonatomic, readonly) bool isInput;
@property (nonatomic, readonly) NSString *name;

+ (id)descriptorWithName:(id)arg1 imageDescriptor:(id)arg2 isInput:(bool)arg3;

- (void).cxx_destruct;
- (id)imageDescriptor;
- (bool)isInput;
- (id)name;

@end