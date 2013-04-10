//
//  VNViewController.h
//  simpleMaskApp
//
//  Created by Valeriy Nikitin on 4/10/13.
//  Copyright (c) 2013 Valery N. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VNViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

- (IBAction)takePhotoClicked:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
