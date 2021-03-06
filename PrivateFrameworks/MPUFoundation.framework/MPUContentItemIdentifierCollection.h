/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying> {
    NSMapTable *_identifierTypeToIdentifier;
    unsigned int _itemType;
}

@property (nonatomic, readonly) unsigned int identifierCount;
@property (nonatomic, readonly) unsigned int itemType;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 class:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateIdentifiersUsingBlock:(id /* block */)arg1;
- (unsigned int)hash;
- (unsigned int)identifierCount;
- (id)identifierForIdentifierType:(unsigned int)arg1;
- (id)initWithItemType:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)itemType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
