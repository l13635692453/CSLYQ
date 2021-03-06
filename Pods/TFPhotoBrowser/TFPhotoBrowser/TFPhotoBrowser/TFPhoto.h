//
//  TFPhoto.h
//  TFPhotoBrowser
//  图片模型
//  Created by Melvin on 8/28/15.
//  Copyright © 2015 TimeFace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import "TFPhotoProtocol.h"

@interface TFPhoto : NSObject <TFPhoto>

typedef void (^TFProgressUpdateBlock)(CGFloat progress);


@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSURL *videoURL;
@property (nonatomic) BOOL emptyImage;
@property (nonatomic) BOOL isVideo;
@property (nonatomic, strong) UIImage *placeholderImage;


+ (TFPhoto *)photoWithImage:(UIImage *)image;
+ (TFPhoto *)photoWithURL:(NSURL *)url;
+ (TFPhoto *)photoWithAsset:(PHAsset *)asset targetSize:(CGSize)targetSize;
+ (TFPhoto *)videoWithURL:(NSURL *)url; // Initialise video with no poster image

- (id)init;
- (id)initWithImage:(UIImage *)image;
- (id)initWithURL:(NSURL *)url;
- (id)initWithAsset:(PHAsset *)asset targetSize:(CGSize)targetSize;
- (id)initWithVideoURL:(NSURL *)url;

@end
