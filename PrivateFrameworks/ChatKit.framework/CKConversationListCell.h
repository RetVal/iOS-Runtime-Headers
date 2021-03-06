/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListCell : UITableViewCell {
    UIImageView *_chevronImageView;
    UIDateLabel *_dateLabel;
    UILabel *_fromLabel;
    BOOL _isPlaceholder;
    UIImageView *_recipientPhotoView;
    NSDate *_searchMessageDate;
    NSString *_searchMessageGUID;
    NSString *_searchSummaryText;
    UILabel *_summaryLabel;
    UIImageView *_unreadIndicatorImageView;
}

@property (nonatomic, retain) NSDate *searchMessageDate;
@property (nonatomic, copy) NSString *searchMessageGUID;
@property (nonatomic, copy) NSString *searchSummaryText;

+ (float)cellHeight;
+ (id)identifier;

- (void)_calculateLayoutFrames;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_conversationThumbnailChanged:(id)arg1;
- (void)_setupThumbnailForConversation:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)searchMessageDate;
- (id)searchMessageGUID;
- (id)searchSummaryText;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSearchMessageDate:(id)arg1;
- (void)setSearchMessageGUID:(id)arg1;
- (void)setSearchSummaryText:(id)arg1;
- (BOOL)showingEditControl;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)superLayoutSubviews;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateWithSearchResult:(id)arg1;

@end
