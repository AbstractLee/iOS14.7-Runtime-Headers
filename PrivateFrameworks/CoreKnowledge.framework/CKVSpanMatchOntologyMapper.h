/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKVSpanMatchOntologyMapper : NSObject

+ (id)_ontologyLabelForMergedPersonFields:(id)arg1;
+ (id)_ontologyLabelFromSpanMatchingMergedFields:(id)arg1 itemType:(long long)arg2;
+ (struct optional<std::__1::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>> { union { BOOL x_1_1_1; struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> { struct OntologyNodeName {} *x_2_2_1; struct OntologyEdgeName {} *x_2_2_2; } x_1_1_2; } x1; bool x2; })_ontologyNodeEdgePairFromFieldType:(long long)arg1;
+ (struct optional<std::__1::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>> { union { BOOL x_1_1_1; struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> { struct OntologyNodeName {} *x_2_2_1; struct OntologyEdgeName {} *x_2_2_2; } x_1_1_2; } x1; bool x2; })_ontologyNodeEdgePairFromSpanMatch:(id)arg1;
+ (void)_setIdentifierOnEdgeNode:(id)arg1 withMetadata:(id)arg2;
+ (id)_stringFromOntologyNodeEdgePair:(struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> { struct OntologyNodeName {} *x1; struct OntologyEdgeName {} *x2; })arg1;
+ (id)_stringValueFromSpanMatch:(id)arg1;
+ (id)matchingSpanNLV3FromSpanMatch:(id)arg1 withMetdata:(id)arg2;
+ (id)ontologyGraphFromSpanMatch:(id)arg1 withMetdata:(id)arg2;
+ (id)ontologyLabelFromFieldType:(long long)arg1;
+ (id)prettyPrintUSOGraph:(id)arg1;

@end
