//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration>
{
    id _array;
    NSUInteger _size;
    id /* CDUnknownBlockType */ _comparator;
    NSUInteger _mutation;
    NSMapTable *_objects;
    NSUInteger _count;
}

@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
// - (void).cxx_destruct;
- (void)objectWeightChanged:(id)arg1;
- (void)firstObjectWeightChanged;
- (void)removeAllObjects;
- (void)removeFirstObject;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)firstObject;
- (void)_moveUpOrDown:(id)arg1 index:(NSUInteger)arg2;
- (void)_moveDown:(id)arg1 index:(NSUInteger)arg2;
- (void)_moveUp:(id)arg1 index:(NSUInteger)arg2;
- (BOOL)check;
- (void)_shrink;
- (void)dealloc;
- (id)description;
- (id)initWithComparator:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
