/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLParameterDescription : NSObject <NSSecureCoding> {
    id  _defaultValue;
    MLParameterKey * _key;
    MLNumericConstraint * _numericConstraint;
}

@property (nonatomic, retain) id defaultValue;
@property (nonatomic, retain) MLParameterKey *key;
@property (nonatomic, retain) MLNumericConstraint *numericConstraint;

+ (id)parameterDescriptionForKey:(id)arg1 boolParameterSpec:(const struct BoolParameter { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; bool x3; int x4; }*)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 defaultValue:(id)arg2 numericConstraint:(id)arg3;
+ (id)parameterDescriptionForKey:(id)arg1 doubleParameterSpec:(const struct DoubleParameter { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; double x3; union AllowedValuesUnion { struct DoubleRange {} *x_4_1_1; } x4; int x5; unsigned int x6[1]; }*)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 int64ParameterSpec:(const struct Int64Parameter { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; long long x3; union AllowedValuesUnion { struct Int64Range {} *x_4_1_1; struct Int64Set {} *x_4_1_2; } x4; int x5; unsigned int x6[1]; }*)arg2;
+ (id)parameterDescriptionForKey:(id)arg1 stringParameterSpec:(const struct StringParameter { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {} *x_3_1_1; } x3; int x4; }*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)numericConstraint;
- (void)setDefaultValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setNumericConstraint:(id)arg1;

@end
