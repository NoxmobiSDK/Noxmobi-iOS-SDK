//
//  NoxmobiPlayer.h
//  AVPlayerTest
//
//  Created by nox_chong on 2021/3/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, BoundaryTimeProgress) {
//    BoundaryTimeProgressPreStart = -2,// 交叉推广专用
//    BoundaryTimeProgressBeginPlay = -1,// 交叉推广专用
    BoundaryTimeProgressStart = 0,
    BoundaryTimeProgressFirstQuartile = 1,
    BoundaryTimeProgressMidpoint = 2,
    BoundaryTimeProgressThirdQuartile = 3,
    BoundaryTimeProgressComplete = 4
};

@protocol NoxmobiPlayerDelegate <NSObject>

@optional
// 0/4、1/4、2/4等时间节点进行回调
- (void)playingBoundaryTimeProgress:(BoundaryTimeProgress)progress;
// 还剩多少秒，每秒回调一次
- (void)playingTimeProgress:(int)leftSecond;
// 可播放
- (void)playerReadyToPlay;
// 无法播放
- (void)playerFailedToPlay:(NSError *)error;
// 播放器被点击
- (void)playerDidClick;

@end

@interface NoxmobiPlayer : UIView

// 初始化播放器
- (instancetype)initWithFrame:(CGRect)frame NS_DESIGNATED_INITIALIZER;

// 倍速
@property (nonatomic, assign) CGFloat rate;

// 循环播放
@property (nonatomic, assign) BOOL loop;

@property (nonatomic, assign) CGFloat loopInterval;

// 静音
@property (nonatomic, assign) BOOL muted;

// 可播放
@property (nonatomic, assign) BOOL readyToPlay;

// 待播放的资源URL, 当做只读来处理
@property (nonatomic, strong) NSURL *fileURL;

// 代理
@property (nonatomic, weak) id<NoxmobiPlayerDelegate> delegate;

// 加载文件
- (void)loadFile:(NSURL *)fileURL;

// 播放
- (void)play;

// 暂停
- (void)pause;

// 返回播放起点
- (void)returnToBegin;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
