/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInteractionContextMenuProvider : NSObject {
    <SXActionManager> * _actionManager;
    <SXComponentInteractionHandlerManager> * _componentInteractionHandlerManager;
}

@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *componentInteractionHandlerManager;

- (void).cxx_destruct;
- (id)actionManager;
- (void)commitPreviewViewController:(id)arg1;
- (id)componentInteractionHandlerManager;
- (id)contextMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2;
- (id)initWithComponentInteractionHandlerManager:(id)arg1 actionManager:(id)arg2;
- (id)targetedPreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 viewport:(id)arg2;

@end