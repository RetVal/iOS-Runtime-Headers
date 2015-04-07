/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying> {
    unsigned int _callStatus;
    unsigned int _callType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int callStatus : 1; 
        unsigned int callType : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property unsigned int callStatus;
@property unsigned int callType;
@property BOOL hasCallStatus;
@property BOOL hasCallType;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;

- (unsigned int)callStatus;
- (unsigned int)callType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCallStatus;
- (BOOL)hasCallType;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (void)setHasCallStatus:(BOOL)arg1;
- (void)setHasCallType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end