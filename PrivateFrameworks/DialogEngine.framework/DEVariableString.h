/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
 */

@interface DEVariableString : DEVariable

@property (readonly) NSString *printValue;
@property (readonly) NSString *speakValue;

- (id)init;
- (id)initWithName:(id)arg1 print:(id)arg2 speak:(id)arg3;
- (id)initWithName:(id)arg1 string:(id)arg2;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Variable> { struct Variable {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)printValue;
- (void)setValuePrint:(id)arg1 speak:(id)arg2;
- (id)speakValue;

@end