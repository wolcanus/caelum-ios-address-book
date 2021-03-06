//
//  FormContactViewController.h
//  AddressBook
//
//  Created by Weverton do Couto Timoteo on 1/6/14.
//  Copyright (c) 2014 Weverton do Couto Timoteo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Contact.h"
#import "FormContactViewControllerDelegate.h"

@interface FormContactViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak,nonatomic) IBOutlet UITextField *name;
@property (weak,nonatomic) IBOutlet UITextField *mobile;
@property (weak,nonatomic) IBOutlet UITextField *email;
@property (weak,nonatomic) IBOutlet UITextField *address;
@property (weak,nonatomic) IBOutlet UITextField *website;
@property (weak, nonatomic) IBOutlet UITextField *latitude;
@property (weak, nonatomic) IBOutlet UITextField *longitude;

@property (strong,atomic) Contact * contact;
@property (weak,atomic) id<FormContactViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIButton *btnAvatar;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *loading;

@property (weak, nonatomic) NSManagedObjectContext *context;

- (void)addContact:(id) sender;
- (IBAction)nextField:(UITextField *)currentField;
- (IBAction)selectAvatar:(id)sender;
- (IBAction)searchCoordinates:(UIButton *)sender;
- (id)initWithContact:(Contact *) contact;

@end
