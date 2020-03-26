//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDGLFrameBuffer, TSDGLState;
@protocol TSDGLDataBuffer;

__attribute__((visibility("hidden")))
@interface TSDGLEdgeDistanceField : NSObject
{
    unsigned int _inputTexture;
    CGSize _textureSize;
    CGSize _resultTextureSize;
    CGSize _squareSize;
    UIEdgeInsets _edgeInsets;
    double _downsampleScale;
    TSDGLFrameBuffer *_exteriorFramebuffer;
    TSDGLFrameBuffer *_interiorFramebuffer;
    id <TSDGLDataBuffer> _origDataBuffer;
    id <TSDGLDataBuffer> _rectDataBuffer;
    id <TSDGLDataBuffer> _squareDataBuffer;
    TSDGLState *_GLState;
    int _oldViewport[4];
}

+ (id)distanceFieldTextureWithTexture:(unsigned int)arg1 textureSize:(CGSize)arg2 maxDistance:(long long)arg3 edgeInsets:(UIEdgeInsets)arg4 downsampleScale:(double)arg5 floatTexture:(BOOL)arg6 GLState:(id)arg7;
+ (void)didEndUsingShaders;
+ (void)willBeginUsingShaders;
- (unsigned int)p_gradientTextureFromCombinedTexture:(unsigned int)arg1 withCurrentGLFramebuffer:(int)arg2;
- (unsigned int)p_combinedTextureWithCurrentGLFramebuffer:(int)arg1 floatTexture:(BOOL)arg2;
- (void)p_floodTextureInFramebuffer:(id)arg1 maxDistance:(long long)arg2;
- (void)p_seedTextureFromTexture:(unsigned int)arg1 invertSeed:(BOOL)arg2;
- (void)p_writeIntoSquareTexture;
- (void)p_setupShaders;
- (void)p_setupBuffers;
- (void)dealloc;
- (id)initWithTexture:(unsigned int)arg1 textureSize:(CGSize)arg2 edgeInsets:(UIEdgeInsets)arg3 downsampleScale:(double)arg4 GLState:(id)arg5;
- (void)teardown;

@end
