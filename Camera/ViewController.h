//
//  ViewController.h
//  Camera
//
//  Created by Angel on 16/02/14.
//  Copyright (c) 2014 uvic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface ViewController : UIViewController

<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property BOOL newMedia;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)useCamera:(id)sender;
- (IBAction)useCameraRoll:(id)sender;
@end
