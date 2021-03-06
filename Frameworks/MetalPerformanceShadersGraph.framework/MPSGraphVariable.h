/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphVariable : NSObject <NSCopying> {
    NSData * _data;
    unsigned int  _dataType;
    NSMutableArray * _mpsndarrays;
    NSArray * _shape;
    struct Value { 
        struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits>> { 
            long long Value; 
        } ownerAndKind; 
    }  _value;
}

@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly, copy) NSArray *shape;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Value={PointerIntPair<void *' */ struct  value; /* unknown property attribute:  mlir::Value::ImplTypeTraits>>=q}} */

+ (id)newVariableWithData:(id)arg1 shape:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (id)initVariableWithData:(id)arg1 shape:(id)arg2;
- (id)initVariableWithData:(id)arg1 value:(struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits>> { long long x_1_1_1; } x1; })arg2;
- (id)initVariableWithMPSNDArray:(id)arg1 value:(struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits>> { long long x_1_1_1; } x1; })arg2;
- (id)mpsNDArrayWithDevice:(id)arg1;
- (id)shape;
- (struct Value { struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits>> { long long x_1_1_1; } x1; })value;

@end
