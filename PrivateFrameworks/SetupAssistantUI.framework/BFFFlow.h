/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFlow : NSObject <BFFFlowItem, BFFFlowItemDelegate, BFFNavigationControllerDelegate> {
    NSArray * _classList;
    NSMutableArray * _controllers;
    <BFFFlowDelegate> * _delegate;
    UIViewController<BFFFlowItem> * _firstController;
    <BFFFlowItemDelegate> * _flowItemDelegate;
    id /* block */  _injector;
    BFFNavigationController * _navigationController;
    <BFFNavigationFlowDelegate> * _navigationFlowDelegate;
    BFFFlowStarter * _starter;
}

@property (nonatomic, retain) NSArray *classList;
@property (nonatomic, retain) NSMutableArray *controllers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BFFFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController<BFFFlowItem> *firstController;
@property (nonatomic) <BFFFlowItemDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ injector;
@property (nonatomic, readonly) BFFNavigationController *navigationController;
@property (nonatomic, readonly) <BFFNavigationFlowDelegate> *navigationFlowDelegate;
@property (nonatomic, readonly) BFFFlowStarter *starter;
@property (readonly) Class superclass;

+ (id)cloudConfigSkipKey;
+ (id)internalSkipKey;

- (void).cxx_destruct;
- (id)_viewControllerForBuddyController:(id)arg1;
- (id)classList;
- (void)configureFlowItem:(id)arg1;
- (id)controllerFollowingControllerClass:(Class)arg1 requestedNext:(Class)arg2;
- (id)controllers;
- (id)createFlowItem:(Class)arg1;
- (void)dealloc;
- (id)delegate;
- (id)firstController;
- (id)firstItem;
- (void)flowItemCancelled:(id)arg1;
- (id)flowItemDelegate;
- (void)flowItemDone:(id)arg1;
- (void)flowItemDone:(id)arg1 nextItem:(id)arg2;
- (void)flowItemDone:(id)arg1 nextItemClass:(Class)arg2;
- (id)initWithNavigationController:(id)arg1 flowDelegate:(id)arg2 flowStarter:(id)arg3 dependencyInjector:(id /* block */)arg4;
- (id /* block */)injector;
- (id)navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (id)navigationFlowDelegate;
- (id)precedingItems;
- (id)precedingItemsClasses;
- (void)setClassList:(id)arg1;
- (void)setControllers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstController:(id)arg1;
- (void)setFlowItemDelegate:(id)arg1;
- (void)startFlowAnimated:(bool)arg1;
- (id)starter;

@end
