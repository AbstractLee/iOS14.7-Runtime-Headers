/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationSession : NSObject <GEOMotionContextDelegate, MNGuidanceManagerDelegate, MNLocationManagerHeadingObserver, MNLocationManagerObserver, MNLocationTrackerDelegate, MNNavigationAudioSessionDelegate, MNSessionUpdateManagerDelegate, MNTimeAndDistanceUpdaterDelegate, MNTracePlayerObserver, MNVehicleMonitorDelegate, MNVoiceControllerObserver> {
    MNTrafficIncidentAlert * _activeTrafficIncidentAlert;
    <MNAudioSession> * _audioSession;
    GEOApplicationAuditToken * _auditToken;
    MNClassicGuidanceManager * _classicGuidanceManager;
    GEOComposedWaypoint * _destination;
    MNGuidanceEventManager * _guidanceEventManager;
    <MNGuidanceManager> * _guidanceManager;
    bool  _guidancePromptsEnabled;
    GEONavigationGuidanceState * _guidanceState;
    bool  _isAllowedToSwitchTransportTypes;
    bool  _isConnectedToCarplay;
    bool  _isSpeakingTrafficIncidentAlert;
    NSUUID * _lastJunctionViewID;
    NSUUID * _lastLaneID;
    MNGuidanceSignInfo * _lastSignInfo;
    MNLocationTracker * _locationTracker;
    MNNavigationSessionLogger * _logger;
    GEOResourceManifestUpdateAssertion * _manifestUpdateAssertion;
    GEOMotionContext * _motionContext;
    MNTraceNavigationEventRecorder * _navigationEventRecorder;
    int  _navigationType;
    MNObserverHashTable * _observers;
    double  _remainingDistance;
    double  _remainingTime;
    MNRouteManager * _routeManager;
    NSString * _tileLoaderClient;
    MNTimeAndDistanceUpdater * _timeAndDistanceUpdater;
    MNNavigationTraceManager * _traceManager;
    MNVehicleMonitor * _vehicleMonitor;
    NSString * _voiceLanguage;
}

@property (nonatomic, retain) <MNAudioSession> *audioSession;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) double distanceToManeuverEnd;
@property (nonatomic, readonly) double distanceToManeuverStart;
@property (nonatomic) bool guidancePromptsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllowedToSwitchTransportTypes;
@property (nonatomic) bool isConnectedToCarplay;
@property (nonatomic, readonly) MNLocation *lastMatchedLocation;
@property (nonatomic, readonly) GEOMotionContext *motionContext;
@property (nonatomic, readonly) int navigationState;
@property (nonatomic, readonly) int navigationType;
@property (nonatomic, readonly) double remainingDistance;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) MNRouteManager *routeManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool traceIsPlaying;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;

- (void).cxx_destruct;
- (void)_closeTileLoader;
- (id)_locationTrackerForTransportType:(int)arg1 navigationType:(int)arg2;
- (void)_openTileLoader;
- (void)_startAudioSession;
- (void)_startGuidanceAllowMidRouteStart:(bool)arg1;
- (void)_startLocationTracking;
- (void)_startLocationUpdates;
- (void)_startMotionUpdates;
- (void)_startTravelTimeUpdates;
- (void)_startVirtualGarageUpdates;
- (void)_stopAudioSession;
- (void)_stopGuidance;
- (void)_stopLocationTracking;
- (void)_stopLocationUpdates;
- (void)_stopMotionUpdates;
- (void)_stopTravelTimeUpdates;
- (void)_stopVirtualGarageUpdates;
- (void)addObserver:(id)arg1;
- (id)audioSession;
- (void)audioSessionDidFinishAnnouncingArrival:(id)arg1;
- (void)audioSessionWillAnnounceArrival:(id)arg1;
- (id)auditToken;
- (void)dealloc;
- (id)destination;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (void)guidanceManager:(id)arg1 announce:(id)arg2 shortPromptType:(unsigned long long)arg3 ignorePromptStyle:(bool)arg4 stage:(unsigned long long)arg5 hasSecondaryManeuver:(bool)arg6 completionBlock:(id /* block */)arg7;
- (void)guidanceManager:(id)arg1 didArriveWithAnnouncement:(id)arg2;
- (void)guidanceManager:(id)arg1 didProcessSpeechEvent:(id)arg2;
- (void)guidanceManager:(id)arg1 didStartWithAnnouncement:(id)arg2;
- (void)guidanceManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)guidanceManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)guidanceManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)guidanceManager:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)guidanceManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)guidanceManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)guidanceManager:(id)arg1 showJunctionView:(id)arg2;
- (void)guidanceManager:(id)arg1 showLaneDirections:(id)arg2;
- (void)guidanceManager:(id)arg1 triggerHaptics:(int)arg2;
- (void)guidanceManager:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)guidanceManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)guidanceManager:(id)arg1 usePersistentDisplay:(bool)arg2;
- (void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)guidanceManager:(id)arg1 willProcessSpeechEvent:(id)arg2;
- (void)guidanceManagerBeginGuidanceUpdate:(id)arg1;
- (void)guidanceManagerDidUpdateProgress:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)guidanceManagerEndGuidanceUpdate:(id)arg1;
- (void)guidanceManagerHideSecondaryStep:(id)arg1;
- (void)guidanceManagerProceedingToRoute:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (bool)guidancePromptsEnabled;
- (id)init;
- (id)initWithRouteManager:(id)arg1 auditToken:(id)arg2 traceManager:(id)arg3;
- (bool)isAllowedToSwitchTransportTypes;
- (bool)isConnectedToCarplay;
- (bool)isCurrentlySpeaking;
- (id)lastMatchedLocation;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationTracker:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 didChangeState:(int)arg2;
- (void)locationTracker:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)locationTracker:(id)arg1 didReachETAUpdatePosition:(id)arg2;
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
- (void)locationTracker:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 didSuppressReroute:(id)arg2;
- (void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
- (void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
- (void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;
- (void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)locationTracker:(id)arg1 shouldShowChargingInfoForWaypoint:(id)arg2;
- (void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;
- (void)locationTrackerDidArrive:(id)arg1;
- (void)locationTrackerDidCancelReroute:(id)arg1;
- (void)locationTrackerDidEnterPreArrivalState:(id)arg1;
- (void)locationTrackerDidTimeoutInArrivalRegion:(id)arg1;
- (void)locationTrackerWillReroute:(id)arg1;
- (id)motionContext;
- (void)motionContextDidUpdateMotion:(id)arg1;
- (int)navigationState;
- (int)navigationType;
- (double)remainingDistance;
- (double)remainingTime;
- (void)removeObserver:(id)arg1;
- (bool)repeatCurrentGuidance;
- (bool)repeatCurrentTrafficAlert;
- (void)resumeOriginalDestination;
- (id)routeInfoForUpdateManager:(id)arg1;
- (id)routeManager;
- (void)setAudioSession:(id)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setIsNavigatingInLowGuidance:(bool)arg1;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)startNavigationSessionWithDetails:(id)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigationSessionWithReason:(unsigned long long)arg1;
- (void)switchToRoute:(id)arg1;
- (void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (bool)traceIsPlaying;
- (void)traceJumpedInTime;
- (id)traceManager;
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5;
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)tracePlayerDidPause:(id)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;
- (void)tracePlayerDidResume:(id)arg1;
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;
- (void)tracePlayerDidStart:(id)arg1;
- (void)tracePlayerDidStayOnRoute:(id)arg1;
- (void)tracePlayerDidStop:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)updateManager:(id)arg1 didReceiveETAError:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
- (void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2;
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;
- (id)userLocationForUpdateManager:(id)arg1;
- (void)vehicleMonitorDidDisconnectFromVehicle:(id)arg1;
- (bool)vibrateForPrompt:(unsigned long long)arg1;
- (void)voiceController:(id)arg1 didActivateAudioSession:(bool)arg2;
- (void)voiceController:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (bool)wantsETAUpdates;

@end