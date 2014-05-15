//
//  ImageFilters.h
//  ImageFilters
//
//  Created by Ian Bettison on 15/05/2014.
//  Copyright (c) 2014 Ian Bettison. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface ImageFilters : NSObject

@property (nonatomic, readonly) UIImage *originalImage;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)grayScaleImage;
- (UIImage *)oldImageWithIntensity:(CGFloat)level;


@end
