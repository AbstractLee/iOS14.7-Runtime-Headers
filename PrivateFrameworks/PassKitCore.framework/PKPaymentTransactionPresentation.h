/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionPresentation : NSObject

+ (id)_billPaymentFundingSourceForTransaction:(id)arg1;
+ (id)_relativeDateForTransaction:(id)arg1;
+ (id)_statusAnnotationForTransaction:(id)arg1;
+ (unsigned long long)iconTypeForTransaction:(id)arg1 ignoreLogoURL:(bool)arg2;
+ (id)presentationInformationForTransaction:(id)arg1 transactionSource:(id)arg2 secondaryTransactionSource:(id)arg3 familyMember:(id)arg4 account:(id)arg5 deviceName:(id)arg6 context:(unsigned long long)arg7;
+ (id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 secondarySource:(id)arg2 includeBankAccountSuffix:(bool)arg3 useGenericNameIfNoDescriptionAvailable:(bool)arg4;
+ (id)staticPDFNameForTransaction:(id)arg1;

@end