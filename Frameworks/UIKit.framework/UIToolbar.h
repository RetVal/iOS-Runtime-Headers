/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIView, UIBarButtonItem, UIColor;



@interface UIToolbar : UIView 
{
    UIView *_customizeView;
    id _delegate;
    NSArray *_items;
    UIBarButtonItem *_selectedItem;
    NSArray *_customizationItems;
    UIColor *_tintColor;
    struct { 
        unsigned int barStyle : 2; 
        unsigned int mode : 2; 
        unsigned int alertShown : 1; 
        unsigned int wasEnabled : 1; 
        unsigned int customized : 1; 
        unsigned int downButtonSentAction : 1; 
        unsigned int isTranslucent : 1; 
        unsigned int forceTopBarAppearance : 1; 
    } _toolbarFlags;
    struct __CFDictionary { } *_groups;
    NSArray *_buttonItems;
    NSInteger _currentButtonGroup;
    struct __CFArray { } *_hiddenItems;
    NSInteger _selectedTag;
    NSInteger _trackingTag;
    float _extraEdgeInsets;
    id _appearance;
}

@property NSInteger barStyle;
@property(copy) NSArray *items;
@property(getter=isTranslucent) BOOL translucent;
@property(retain) UIColor *tintColor;

+ (Class)defaultButtonClass;
+ (Class)defaultTextButtonClass;
+ (id)defaultButtonFont;
+ (float)defaultSelectionModeHeight;
+ (float)defaultHeightForBarSize:(NSInteger)arg1;
+ (float)_buttonGap;
+ (float)defaultHeight;
+ (void)_initializeSafeCategory;

- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)setExtraEdgeInsets:(float)arg1;
- (float)extraEdgeInsets;
- (void)setBarStyle:(NSInteger)arg1 force:(BOOL)arg2;
- (void)setMode:(NSInteger)arg1;
- (NSInteger)mode;
- (id)selectedItem;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_didFinishHidingRetainedOldItems:(id)arg1;
- (void)_finishSetItems:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)endCustomizingAnimated:(BOOL)arg1;
- (void)animateToolbarItemIndex:(NSUInteger)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withItemList:(id)arg3;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)createButtonWithDescription:(id)arg1;
- (void)positionButtons:(id)arg1 tags:(NSInteger*)arg2 count:(NSInteger)arg3 group:(NSInteger)arg4;
- (void)_buttonBarFinishedAnimating;
- (void)showButtons:(NSInteger*)arg1 withCount:(NSInteger)arg2 withDuration:(double)arg3;
- (void)registerButtonGroup:(NSInteger)arg1 withButtons:(NSInteger*)arg2 withCount:(NSInteger)arg3;
- (void)showButtonGroup:(NSInteger)arg1 withDuration:(double)arg2;
- (NSInteger)currentButtonGroup;
- (void)getVisibleButtonTags:(NSInteger*)arg1 count:(NSUInteger*)arg2 maxItems:(NSUInteger)arg3;
- (void)setButtonBarTrackingMode:(NSInteger)arg1;
- (void)customize:(const NSInteger*)arg1 withCount:(NSInteger)arg2;
- (void)dismissCustomizeSheet:(BOOL)arg1;
- (NSInteger)selectedButton;
- (void)showSelectionForButton:(NSInteger)arg1;
- (void)setBadgeValue:(id)arg1 forButton:(NSInteger)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(NSInteger)arg2;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(NSInteger)arg2;
- (BOOL)onStateForButton:(NSInteger)arg1;
- (void)setOnStateForButton:(BOOL)arg1 forButton:(NSInteger)arg2;
- (void)animateWithDuration:(float)arg1 forButton:(NSInteger)arg2;
- (id)buttonItems;
- (void)setButtonItems:(id)arg1;
- (void)_setForceTopBarAppearance:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfBarButtonItem:(id)arg1;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withItems:(struct { NSInteger x1; NSInteger x2; id x3; id x4; float x5; NSInteger x6; SEL x7; id x8; }*)arg3 withCount:(NSInteger)arg4;
- (id)initInView:(id)arg1 withItems:(struct { NSInteger x1; NSInteger x2; id x3; id x4; float x5; NSInteger x6; SEL x7; id x8; }*)arg2 withCount:(NSInteger)arg3;
- (void)_alertWillShow:(BOOL)arg1 duration:(float)arg2;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 actuallyRepositionButtons:(BOOL)arg3;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2;
- (id)_customToolbarAppearance;
- (BOOL)_isTopBar;
- (id)_descriptionForTag:(NSInteger)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_adjustButtonSelection:(id)arg1;
- (id)_buttonWithDescription:(id)arg1;
- (void)_customizeWithCurrentButtons:(id)arg1 availableButton:(id)arg2;
- (void)_dismissCustomizeSheet:(BOOL)arg1;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_finishCustomizeAnimation:(id)arg1;
- (void)_showButtons:(NSInteger*)arg1 withCount:(NSInteger)arg2 group:(NSInteger)arg3 withDuration:(double)arg4 adjustPositions:(BOOL)arg5 skipTag:(NSInteger)arg6;
- (id)_currentButtons;
- (id)_configureFromOldButton:(id)arg1 toNewButtonWithTag:(NSInteger)arg2 skipTag:(NSInteger)arg3;
- (void)_finishButtonAnimation:(NSInteger)arg1 forButton:(NSInteger)arg2;
- (void)_customizeWithAvailableItems:(id)arg1;
- (void)_configureToolbarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(BOOL)arg3 swapping:(BOOL)arg4;
- (void)_updateItemsForNewFrame:(id)arg1;
- (float)_edgeMarginForBorderedItem:(BOOL)arg1;
- (BOOL)_isHidden:(id)arg1;
- (id)_buttonName:(id)arg1 withType:(NSInteger)arg2;
- (void)_updateScriptingInfo:(id)arg1 view:(id)arg2;
- (void)setSelectedItem:(id)arg1;
- (void)beginCustomizingItems:(id)arg1;
- (BOOL)isCustomizing;
- (BOOL)_isPositionedHiddenForAlert;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(NSUInteger)arg3;
- (void)_updateOpacity;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (id)items;
- (void)setTranslucent:(BOOL)arg1;
- (BOOL)isTranslucent;
- (BOOL)isMinibar;
- (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(NSInteger)arg1;
- (void)setBarStyle:(NSInteger)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (NSInteger)barStyle;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (id)scriptingInfoWithChildren;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityFuzzyHitTestElements;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)barButtonItemWithTag:(NSInteger)arg1;

@end