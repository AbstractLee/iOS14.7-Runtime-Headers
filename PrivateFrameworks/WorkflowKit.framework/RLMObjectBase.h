/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface RLMObjectBase : NSObject <RLMThreadConfined, RLMThreadConfined_Private> {
    struct RLMClassInfo { id x1; id x2; struct ObjectSchema {} *x3; struct vector<RLMObservationInfo *, std::__1::allocator<RLMObservationInfo *>> { struct RLMObservationInfo {} **x_4_1_1; struct RLMObservationInfo {} **x_4_1_2; struct __compressed_pair<RLMObservationInfo **, std::__1::allocator<RLMObservationInfo *>> { struct RLMObservationInfo {} **x_3_2_1; } x_4_1_3; } x4; struct Table {} *x5; struct vector<RLMClassInfo *, std::__1::allocator<RLMClassInfo *>> { struct RLMClassInfo {} **x_6_1_1; struct RLMClassInfo {} **x_6_1_2; struct __compressed_pair<RLMClassInfo **, std::__1::allocator<RLMClassInfo *>> { struct RLMClassInfo {} **x_3_2_1; } x_6_1_3; } x6; } * _info;
    RLMObjectSchema * _objectSchema;
    struct RLMObservationInfo { struct RLMObservationInfo {} *x1; struct RLMObservationInfo {} *x2; struct BasicRow<realm::Table> { struct BasicTableRef<realm::Table> { struct Table {} *x_1_2_1; } x_3_1_1; unsigned long long x_3_1_2; struct RowBase {} *x_3_1_3; struct RowBase {} *x_3_1_4; } x3; struct RLMClassInfo {} *x4; id x5; bool x6; unsigned long long x7; id x8; id x9; id x10; } * _observationInfo;
    RLMRealm * _realm;
    struct BasicRow<realm::Table> { 
        struct BasicTableRef<realm::Table> { 
            struct Table {} *m_ptr; 
        } m_table; 
        unsigned long long m_row_ndx; 
        struct RowBase {} *m_prev; 
        struct RowBase {} *m_next; 
    }  _row;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) id objectiveCMetadata;
@property (nonatomic, readonly) RLMRealm *realm;
@property (readonly) Class superclass;

+ (id)_realmColumnNames;
+ (id)_realmObjectName;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)className;
+ (void)initializeLinkedObjectSchemas;
+ (Class)objectUtilClass:(bool)arg1;
+ (id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase>> { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase>> { struct ThreadSafeReferenceBase {} *x_1_1_1; } x1; })arg1 metadata:(id)arg2 realm:(id)arg3;
+ (id)sharedSchema;
+ (bool)shouldIncludeInDefaultSchema;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMaxDepth:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRealm:(id)arg1 schema:(id)arg2;
- (id)initWithValue:(id)arg1 schema:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isInvalidated;
- (struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase>> { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase>> { struct ThreadSafeReferenceBase {} *x_1_1_1; } x1; })makeThreadSafeReference;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)objectSchema;
- (id)objectiveCMetadata;
- (id)realm;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
