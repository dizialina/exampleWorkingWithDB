//
//  EditInfoViewController.h
//  SQLite3DBSample
//
//  Created by Admin on 08.01.16.
//  Copyright © 2016 Alina Egorova. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EditInfoViewControllerDelegate

-(void)editingInfoWasFinished;

@end

@interface EditInfoViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtFirstname;
@property (weak, nonatomic) IBOutlet UITextField *txtLastname;
@property (weak, nonatomic) IBOutlet UITextField *txtAge;
@property (nonatomic, strong) id<EditInfoViewControllerDelegate> delegate;
@property (nonatomic) int recordIDToEdit;


- (IBAction)saveInfo:(id)sender;


@end
