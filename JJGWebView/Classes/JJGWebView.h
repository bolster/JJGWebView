//
//  JJGWebView.h
//
//  Created by Jeff Geerling on 2/11/11.
//  Copyright 2011 Midwestern Mac, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class JJGWebView;

@protocol JJGWebViewDelegate <NSObject>
- (void)closedJJGWebView:(JJGWebView*)webView;    
@end

@interface JJGWebView : UIViewController <UITextFieldDelegate, UIWebViewDelegate, UIActionSheetDelegate> {
	
	IBOutlet UIToolbar *webViewToolbar;
	IBOutlet UIWebView *webView;
	IBOutlet UIActivityIndicatorView *activityIndicator;
	IBOutlet UIBarButtonItem *doneButton;
    IBOutlet UIBarButtonItem *actionButton;
	IBOutlet UIBarButtonItem *refreshButton;
	IBOutlet UIBarButtonItem *backButton;
	IBOutlet UIBarButtonItem *forwardButton;

	UIActionSheet *actionButtonActionSheet;
	NSURL *webViewURL;
	
    id <JJGWebViewDelegate> delegate;
    
}

@property (nonatomic,retain) UIToolbar *webViewToolbar;
@property (nonatomic,retain) UIWebView *webView;
@property (nonatomic,retain) NSURL *webViewURL;
@property (nonatomic,retain) UIBarButtonItem *doneButton;
@property (nonatomic,retain) UIBarButtonItem *actionButton;
@property (nonatomic,retain) UIBarButtonItem *refreshButton;
@property (nonatomic,retain) UIBarButtonItem *backButton;
@property (nonatomic,retain) UIBarButtonItem *forwardButton;
@property (nonatomic,assign) id <JJGWebViewDelegate> delegate;

- (IBAction)actionButtonSelected:(id)sender;
- (IBAction)closeAction:(id)sender;

@end
