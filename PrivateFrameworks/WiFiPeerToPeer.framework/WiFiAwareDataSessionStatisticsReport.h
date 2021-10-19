/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
 */

@interface WiFiAwareDataSessionStatisticsReport : NSObject <NSSecureCoding> {
    NSNumber * _csaCount;
    NSNumber * _dfsChannelsCount;
    NSNumber * _infrastructureChannel;
    NSNumber * _packetsHOFOn2GCount;
    NSNumber * _packetsNAVOn2GCount;
    NSNumber * _packetsOn2GCount;
    NSNumber * _packetsOn5GCount;
    NSNumber * _packetsOverridenOn5GCount;
    WiFiMACAddress * _peerAddress;
    NSNumber * _preferred2GChannelsCount;
    NSNumber * _preferred5GChannelsCount;
    NSNumber * _quietIECount;
    NSArray * _rxRSSIHistogram;
    NSArray * _txCCAHistogram;
    NSNumber * _txErrorCount;
}

@property (nonatomic, readonly) NSNumber *csaCount;
@property (nonatomic, readonly) NSNumber *dfsChannelsCount;
@property (nonatomic, readonly) NSNumber *infrastructureChannel;
@property (nonatomic, readonly) NSNumber *packetsHOFOn2GCount;
@property (nonatomic, readonly) NSNumber *packetsNAVOn2GCount;
@property (nonatomic, readonly) NSNumber *packetsOn2GCount;
@property (nonatomic, readonly) NSNumber *packetsOn5GCount;
@property (nonatomic, readonly) NSNumber *packetsOverridenOn5GCount;
@property (nonatomic, readonly) WiFiMACAddress *peerAddress;
@property (nonatomic, readonly) NSNumber *preferred2GChannelsCount;
@property (nonatomic, readonly) NSNumber *preferred5GChannelsCount;
@property (nonatomic, readonly) NSNumber *quietIECount;
@property (nonatomic, readonly) NSArray *rxRSSIHistogram;
@property (nonatomic, readonly) NSArray *txCCAHistogram;
@property (nonatomic, readonly) NSNumber *txErrorCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)csaCount;
- (id)description;
- (id)dfsChannelsCount;
- (void)encodeWithCoder:(id)arg1;
- (id)infrastructureChannel;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeerAddress:(id)arg1 infrastructureChannel:(id)arg2 txCCAHistogram:(id)arg3 rxRSSIHistogram:(id)arg4 preferred2GChannelsCount:(id)arg5 preferred5GChannelsCount:(id)arg6 dfsChannelsCount:(id)arg7 csaCount:(id)arg8 quietIECount:(id)arg9 txErrorCount:(id)arg10 packetsOn2GCount:(id)arg11 packetsNAVOn2GCount:(id)arg12 packetsHOFOn2GCount:(id)arg13 packetsOn5GCount:(id)arg14 packetsOverridenOn5GCount:(id)arg15;
- (bool)isEqual:(id)arg1;
- (id)packetsHOFOn2GCount;
- (id)packetsNAVOn2GCount;
- (id)packetsOn2GCount;
- (id)packetsOn5GCount;
- (id)packetsOverridenOn5GCount;
- (id)peerAddress;
- (id)preferred2GChannelsCount;
- (id)preferred5GChannelsCount;
- (id)quietIECount;
- (id)rxRSSIHistogram;
- (id)txCCAHistogram;
- (id)txErrorCount;

@end