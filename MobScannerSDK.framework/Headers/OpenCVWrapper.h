//
//  OpenCVWrapper.h
//  MobScanner
//
//  Created by Bharat Hazarika on 14/12/20.
//  Copyright © 2020 Bharat Hazarika. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenCVWrapper : NSObject
+ (NSString *)openCVVersionString;
+(NSMutableArray *) getLargestSquarePoints: (UIImage *) image : (CGSize) size;
+(UIImage *) getTransformedImage: (CGFloat) newWidth : (CGFloat) newHeight : (UIImage *) origImage : (CGPoint [4]) corners : (CGSize) size;
+(UIImage *) getGrayImage: (UIImage *) origImage;
+(UIImage *) getMagicImage: (UIImage *) origImage;
+(UIImage *) getAutoImage: (UIImage *) origImage;
+(UIImage *) applyAdaptiveGaussian: (UIImage *)origImage : (int) blockSize;
+(UIImage *) applyAdaptiveMean: (UIImage *)origImage : (int) blockSize;
@end

NS_ASSUME_NONNULL_END
