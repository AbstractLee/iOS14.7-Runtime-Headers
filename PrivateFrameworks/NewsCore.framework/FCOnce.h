/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOnce : NSObject {
    bool  _finished;
    NFUnfairLock * _lock;
}

- (void).cxx_destruct;
- (void)executeOnce:(id /* block */)arg1;
- (bool)hasBeenTriggered;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)trigger;

@end