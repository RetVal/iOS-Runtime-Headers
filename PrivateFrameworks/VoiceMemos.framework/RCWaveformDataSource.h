/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSURL, RCMutableWaveform, RCWaveform, RCWaveformGenerator;

@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver> {
    RCMutableWaveform *_accumulatorWaveform;
    NSURL *_generatedWaveformOutputURL;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    RCWaveformGenerator *_waveformGenerator;
    NSHashTable *_weakObservers;
    bool_hasSavedGeneratedWaveform;
    bool_hasStartedLoading;
}

@property(readonly) RCWaveform * accumulatorWaveform;
@property(readonly) double averagePowerLevelsRate;
@property(readonly) bool canceled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) double duration;
@property(readonly) bool finished;
@property(readonly) NSURL * generatedWaveformOutputURL;
@property(readonly) bool hasSavedGeneratedWaveform;
@property(readonly) bool hasStartedLoading;
@property(readonly) unsigned long long hash;
@property(readonly) float loadingProgress;
@property(readonly) NSObject<OS_dispatch_queue> * observerQueue;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) Class superclass;
@property(readonly) struct { double x1; double x2; } timeRangeToHighlight;
@property(readonly) RCWaveformGenerator * waveformGenerator;
@property(readonly) NSHashTable * weakObservers;

- (void).cxx_destruct;
- (void)_performObserversBlock:(id)arg1;
- (void)_performOnObserversBlock:(id)arg1;
- (id)accumulatorWaveform;
- (void)addObserver:(id)arg1;
- (double)averagePowerLevelsRate;
- (void)beginLoading;
- (bool)canceled;
- (void)dealloc;
- (double)duration;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id)arg2;
- (bool)finished;
- (id)generatedWaveformOutputURL;
- (bool)hasSavedGeneratedWaveform;
- (bool)hasStartedLoading;
- (id)initWithWaveformGenerator:(id)arg1 generatedWaveformOutputURL:(id)arg2;
- (float)loadingProgress;
- (id)observerQueue;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)saveGeneratedWaveformIfNecessary;
- (id)saveableWaveform;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (bool)setPaused:(bool)arg1;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeToHighlight;
- (void)updateAccumulatorWaveformSegmentsWithBlock:(id)arg1;
- (bool)waitUntilFinished;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (id)waveformGenerator;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (id)waveformSegmentsInTimeRange:(struct { double x1; double x2; })arg1;
- (id)weakObservers;

@end