/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPTextViewStyle : NSObject <NSCopying> {
    UIColor * _color;
    NSString * _compositingFilter;
    LPPointUnit * _firstLineLeading;
    UIFont * _font;
    LPPointUnit * _lastLineDescent;
    LPGlyphStyle * _leadingGlyph;
    unsigned int  _maximumLines;
    LPPadding * _padding;
    LPPointUnit * _paragraphSpacing;
    bool  _shouldScaleMaximumLinesWithDynamicType;
    long long  _textAlignment;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *compositingFilter;
@property (nonatomic, retain) LPPointUnit *firstLineLeading;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) LPPointUnit *lastLineDescent;
@property (nonatomic, retain) LPGlyphStyle *leadingGlyph;
@property (nonatomic) unsigned int maximumLines;
@property (nonatomic, readonly, retain) LPPadding *padding;
@property (nonatomic, retain) LPPointUnit *paragraphSpacing;
@property (nonatomic) bool shouldScaleMaximumLinesWithDynamicType;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)adjustedForString:(id)arg1;
- (id)color;
- (id)compositingFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firstLineLeading;
- (id)font;
- (id)initWithPlatform:(long long)arg1;
- (id)lastLineDescent;
- (id)leadingGlyph;
- (unsigned int)maximumLines;
- (id)padding;
- (id)paragraphSpacing;
- (void)setColor:(id)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setFirstLineLeading:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLastLineDescent:(id)arg1;
- (void)setLeadingGlyph:(id)arg1;
- (void)setMaximumLines:(unsigned int)arg1;
- (void)setParagraphSpacing:(id)arg1;
- (void)setShouldScaleMaximumLinesWithDynamicType:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (bool)shouldScaleMaximumLinesWithDynamicType;
- (long long)textAlignment;

@end
