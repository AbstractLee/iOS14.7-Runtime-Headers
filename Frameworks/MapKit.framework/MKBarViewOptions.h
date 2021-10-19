/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKBarViewOptions : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    double  _currentAmount;
    NSArray * _fillColors;
    NSArray * _gradientStops;
    double  _thickness;
    double  _totalAmount;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) double currentAmount;
@property (nonatomic, copy) NSArray *fillColors;
@property (nonatomic, copy) NSArray *gradientStops;
@property (nonatomic) double thickness;
@property (nonatomic) double totalAmount;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentAmount;
- (id)fillColors;
- (id)gradientStops;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCurrentAmount:(double)arg1;
- (void)setFillColors:(id)arg1;
- (void)setGradientStops:(id)arg1;
- (void)setThickness:(double)arg1;
- (void)setTotalAmount:(double)arg1;
- (double)thickness;
- (double)totalAmount;

@end