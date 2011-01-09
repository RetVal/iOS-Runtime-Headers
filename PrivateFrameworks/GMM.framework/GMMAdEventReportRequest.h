/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMDateTime;



@interface GMMAdEventReportRequest : PBRequest 
{
    NSString *_unique_id;
    NSInteger _event_type;
    BOOL _hasEvent_type;
    GMMDateTime *_event_time;
}

@property(readonly) BOOL hasUnique_id;
@property(readonly) BOOL hasEvent_time;
@property(retain) GMMDateTime *event_time;
@property(readonly) BOOL hasEvent_type;
@property NSInteger event_type;
@property(retain) NSString *unique_id;


- (BOOL)hasUnique_id;
- (void)setEvent_type:(NSInteger)arg1;
- (BOOL)hasEvent_time;
- (id)event_time;
- (void)setEvent_time:(id)arg1;
- (BOOL)hasEvent_type;
- (NSInteger)event_type;
- (id)unique_id;
- (void)setUnique_id:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (NSUInteger)requestTypeCode;
- (BOOL)readFrom:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end