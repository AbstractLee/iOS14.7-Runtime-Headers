/* Generated by RuntimeBrowser
   Image: /usr/lib/libMemoryResourceException.dylib
 */

@interface FPRangeList : NSObject {
    struct FPRangeListNode { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct FPRangeListNode {} *x8; } * _rangeListHead;
}

- (void)_addRangeList:(id)arg1 pageSize:(unsigned long long)arg2;
- (void)addRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 pageSize:(unsigned long long)arg2 memoryTotal:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg3;
- (void)addRegion:(id)arg1 pageSize:(unsigned long long)arg2;
- (void)dealloc;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; })sum;

@end