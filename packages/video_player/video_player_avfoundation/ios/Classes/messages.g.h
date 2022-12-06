// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// Autogenerated from Pigeon (v2.0.4), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class FLTTextureMessage;
@class FLTLoopingMessage;
@class FLTVolumeMessage;
@class FLTPlaybackSpeedMessage;
@class FLTPositionMessage;
@class FLTCreateMessage;
@class FLTMixWithOthersMessage;
@class FLTGetEmbeddedSubtitlesMessage;
@class FLTSetEmbeddedSubtitlesMessage;
@class FLTEnterPictureInPictureMessage;

@interface FLTTextureMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId;
@property(nonatomic, strong) NSNumber * textureId;
@end

@interface FLTLoopingMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    isLooping:(NSNumber *)isLooping;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * isLooping;
@end

@interface FLTVolumeMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    volume:(NSNumber *)volume;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * volume;
@end

@interface FLTPlaybackSpeedMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    speed:(NSNumber *)speed;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * speed;
@end

@interface FLTPositionMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    position:(NSNumber *)position;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * position;
@end

@interface FLTCreateMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithAsset:(nullable NSString *)asset
    uri:(nullable NSString *)uri
    packageName:(nullable NSString *)packageName
    formatHint:(nullable NSString *)formatHint
    httpHeaders:(NSDictionary<NSString *, NSString *> *)httpHeaders;
@property(nonatomic, copy, nullable) NSString * asset;
@property(nonatomic, copy, nullable) NSString * uri;
@property(nonatomic, copy, nullable) NSString * packageName;
@property(nonatomic, copy, nullable) NSString * formatHint;
@property(nonatomic, strong) NSDictionary<NSString *, NSString *> * httpHeaders;
@end

@interface FLTMixWithOthersMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithMixWithOthers:(NSNumber *)mixWithOthers;
@property(nonatomic, strong) NSNumber * mixWithOthers;
@end

@interface FLTGetEmbeddedSubtitlesMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithLanguage:(NSString *)language
    label:(NSString *)label
    trackIndex:(NSNumber *)trackIndex
    groupIndex:(NSNumber *)groupIndex
    renderIndex:(NSNumber *)renderIndex;
@property(nonatomic, copy) NSString * language;
@property(nonatomic, copy) NSString * label;
@property(nonatomic, strong) NSNumber * trackIndex;
@property(nonatomic, strong) NSNumber * groupIndex;
@property(nonatomic, strong) NSNumber * renderIndex;
@end

@interface FLTSetEmbeddedSubtitlesMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    language:(nullable NSString *)language
    label:(nullable NSString *)label
    trackIndex:(nullable NSNumber *)trackIndex
    groupIndex:(nullable NSNumber *)groupIndex
    renderIndex:(nullable NSNumber *)renderIndex;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, copy, nullable) NSString * language;
@property(nonatomic, copy, nullable) NSString * label;
@property(nonatomic, strong, nullable) NSNumber * trackIndex;
@property(nonatomic, strong, nullable) NSNumber * groupIndex;
@property(nonatomic, strong, nullable) NSNumber * renderIndex;
@end

@interface FLTEnterPictureInPictureMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    width:(NSNumber *)width
    height:(NSNumber *)height;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * width;
@property(nonatomic, strong) NSNumber * height;
@end

/// The codec used by FLTAVFoundationVideoPlayerApi.
NSObject<FlutterMessageCodec> *FLTAVFoundationVideoPlayerApiGetCodec(void);

@protocol FLTAVFoundationVideoPlayerApi
- (void)initialize:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable FLTTextureMessage *)create:(FLTCreateMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)dispose:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setLooping:(FLTLoopingMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setVolume:(FLTVolumeMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setPlaybackSpeed:(FLTPlaybackSpeedMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)play:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable FLTPositionMessage *)position:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)seekTo:(FLTPositionMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)pause:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setMixWithOthers:(FLTMixWithOthersMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSArray<FLTGetEmbeddedSubtitlesMessage *> *)getEmbeddedSubtitles:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setEmbeddedSubtitles:(FLTSetEmbeddedSubtitlesMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)enterPictureInPicture:(FLTEnterPictureInPictureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTAVFoundationVideoPlayerApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLTAVFoundationVideoPlayerApi> *_Nullable api);

NS_ASSUME_NONNULL_END
