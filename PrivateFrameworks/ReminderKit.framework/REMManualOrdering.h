/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface REMManualOrdering : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _modifiedDate;
    REMObjectID * _objectID;
    NSDictionary * _subtaskIDsByTopLevelReminderID;
    NSArray * _topLevelReminderIDs;
    REMObjectID * _uncommitedRemindersAccountID;
}

@property (nonatomic, retain) NSDate *modifiedDate;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, retain) NSDictionary *subtaskIDsByTopLevelReminderID;
@property (nonatomic, retain) NSArray *topLevelReminderIDs;
@property (nonatomic, retain) REMObjectID *uncommitedRemindersAccountID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDForManualOrderingOfSmartListWithSmartListType:(id)arg1;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changedKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 topLevelReminderIDs:(id)arg2 subtaskIDsByTopLevelReminderID:(id)arg3 uncommitedRemindersAccountID:(id)arg4 modifiedDate:(id)arg5;
- (id)initWithSmartListType:(id)arg1;
- (id)initWithSmartListType:(id)arg1 topLevelReminderIDs:(id)arg2 subtaskIDsByTopLevelReminderID:(id)arg3 uncommitedRemindersAccountID:(id)arg4 modifiedDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)modifiedDate;
- (id)objectID;
- (id)remObjectID;
- (void)setModifiedDate:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setSubtaskIDsByTopLevelReminderID:(id)arg1;
- (void)setTopLevelReminderIDs:(id)arg1;
- (void)setUncommitedRemindersAccountID:(id)arg1;
- (id)subtaskIDsByTopLevelReminderID;
- (id)topLevelReminderIDs;
- (id)uncommitedRemindersAccountID;

@end