/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAdvancedLocaleController : PSListController {
    bool_automaticLocaleDisabled;
}

@property bool automaticLocaleDisabled;

+ (bool)automaticLanguageUpdateEnabled;

- (id)automatic:(id)arg1;
- (bool)automaticLocaleDisabled;
- (id)init;
- (void)localeChangedAction;
- (void)reloadLocale;
- (void)setAutomatic:(id)arg1 specifier:(id)arg2;
- (void)setAutomaticLocaleDisabled:(bool)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end