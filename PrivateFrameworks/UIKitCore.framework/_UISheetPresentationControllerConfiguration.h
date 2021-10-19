/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISheetPresentationControllerConfiguration : NSObject <NSSecureCoding> {
    NSArray * __detents;
    long long  __indexOfCurrentDetent;
    long long  __indexOfLastUndimmedDetent;
    long long  __mode;
    bool  __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
    bool  __wantsBottomAttachedInCompactHeight;
    bool  __wantsFullScreen;
    bool  __widthFollowsPreferredContentSizeWhenBottomAttached;
}

@property (setter=_setDetents:, nonatomic, copy) NSArray *_detents;
@property (setter=_setIndexOfCurrentDetent:, nonatomic) long long _indexOfCurrentDetent;
@property (setter=_setIndexOfLastUndimmedDetent:, nonatomic) long long _indexOfLastUndimmedDetent;
@property (setter=_setMode:, nonatomic) long long _mode;
@property (setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:, nonatomic) bool _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (setter=_setWantsBottomAttachedInCompactHeight:, nonatomic) bool _wantsBottomAttachedInCompactHeight;
@property (setter=_setWantsFullScreen:, nonatomic) bool _wantsFullScreen;
@property (setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:, nonatomic) bool _widthFollowsPreferredContentSizeWhenBottomAttached;

+ (id)_fullScreenConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_detents;
- (long long)_indexOfCurrentDetent;
- (long long)_indexOfLastUndimmedDetent;
- (long long)_mode;
- (bool)_prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
- (void)_setDetents:(id)arg1;
- (void)_setIndexOfCurrentDetent:(long long)arg1;
- (void)_setIndexOfLastUndimmedDetent:(long long)arg1;
- (void)_setMode:(long long)arg1;
- (void)_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:(bool)arg1;
- (void)_setWantsBottomAttachedInCompactHeight:(bool)arg1;
- (void)_setWantsFullScreen:(bool)arg1;
- (void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(bool)arg1;
- (bool)_wantsBottomAttachedInCompactHeight;
- (bool)_wantsFullScreen;
- (bool)_widthFollowsPreferredContentSizeWhenBottomAttached;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end