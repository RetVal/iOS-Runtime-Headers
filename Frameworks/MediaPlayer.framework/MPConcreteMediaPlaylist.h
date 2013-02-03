/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaLibrary, NSArray, MPMediaQuery, NSMutableDictionary;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist {
    void *_clusterPlaylist;
    BOOL _ignoreNextLibraryChange;
    NSArray *_items;
    MPMediaQuery *_itemsQuery;
    MPMediaLibrary *_library;
    NSMutableDictionary *_properties;
}

- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)addItem:(id)arg1 completionBlock:(id)arg2;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingGeniusClusterItems;
- (BOOL)existsInLibrary;
- (id)geniusClusterItemsWithCount:(NSUInteger)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2 library:(id)arg3;
- (void)insertItem:(id)arg1 atIndex:(NSUInteger)arg2 completionBlock:(id)arg3;
- (void)insertItems:(id)arg1 atIndex:(NSUInteger)arg2 completionBlock:(id)arg3;
- (id)items;
- (NSInteger)mediaTypes;
- (void)moveItemFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 completionBlock:(id)arg3;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(id)arg2;
- (void)removeAllItems;
- (void)removeItemAtIndex:(NSUInteger)arg1 completionBlock:(id)arg2;
- (id)representativeItem;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;

@end