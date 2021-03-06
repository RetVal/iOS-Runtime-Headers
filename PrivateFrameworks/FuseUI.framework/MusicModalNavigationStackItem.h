/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicModalNavigationStackItem : NSObject {
    MusicJSManagedObject *_jsNavigationDocumentManagedObject;
    int _lastNavigationControllerOperation;
    UINavigationController *_navigationController;
    SKUINavigationDocumentController *_navigationDocumentController;
}

@property (setter=setJSNavigationDocumentManagedObject:, nonatomic, retain) MusicJSManagedObject *jsNavigationDocumentManagedObject;
@property (nonatomic) int lastNavigationControllerOperation;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) SKUINavigationDocumentController *navigationDocumentController;

- (void).cxx_destruct;
- (id)initWithNavigationController:(id)arg1;
- (id)jsNavigationDocumentManagedObject;
- (int)lastNavigationControllerOperation;
- (id)navigationController;
- (id)navigationDocumentController;
- (void)setJSNavigationDocumentManagedObject:(id)arg1;
- (void)setLastNavigationControllerOperation:(int)arg1;
- (void)setNavigationDocumentController:(id)arg1;

@end
