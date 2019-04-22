//
// Copyright © 2019 Halts. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>
#import "UTMVirtualMachineDelegate.h"
#import "VMKeyboardViewDelegate.h"

@class UTMVirtualMachine;
@class VMKeyboardView;

NS_ASSUME_NONNULL_BEGIN

@interface VMDisplayMetalViewController : UIViewController<UTMVirtualMachineDelegate, VMKeyboardViewDelegate>

@property (nonatomic, strong) UTMVirtualMachine *vm;
@property (weak, nonatomic) IBOutlet MTKView *mtkView;
@property (weak, nonatomic) IBOutlet VMKeyboardView *keyboardView;
@property (weak, nonatomic) IBOutlet UIView *inputAccessoryView;
@property (strong, nonatomic) UISelectionFeedbackGenerator *clickFeedbackGenerator;
@property (strong, nonatomic) UIImpactFeedbackGenerator *resizeFeedbackGenerator;

- (IBAction)gesturePan:(UIPanGestureRecognizer *)sender;
- (IBAction)gestureTwoPan:(UIPanGestureRecognizer *)sender;
- (IBAction)gestureTap:(UITapGestureRecognizer *)sender;
- (IBAction)gestureTwoTap:(UITapGestureRecognizer *)sender;
- (IBAction)gesturePinch:(UIPinchGestureRecognizer *)sender;
- (IBAction)gestureSwipeUp:(UISwipeGestureRecognizer *)sender;
- (IBAction)gestureSwipeDown:(UISwipeGestureRecognizer *)sender;
- (IBAction)keyboardDonePressed:(UIButton *)sender;

@end

NS_ASSUME_NONNULL_END
