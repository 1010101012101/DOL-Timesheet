//
//  PayDisclaimerViewController.h
//  WHD
//
//  Created by the US Department of Labor.
//  Code available in the public domain
//

#import <UIKit/UIKit.h>


@interface PayDisclaimerViewController : UIViewController<UIWebViewDelegate> {
	IBOutlet UIWebView *webView;
}

@property (nonatomic,retain) IBOutlet UIWebView *webView;

@end
