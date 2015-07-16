/*
-----Alert helper header
-----Created by At0m0s
---Usage:
alert(title, message, button);
where title, message, and button are NSString's.
*/

#include <UIKit/UIKit.h>

static void alert(NSString *title, NSString *message, NSString *button) {
UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title 
						message:message 
					       delegate:nil 
				      cancelButtonTitle:button
				      otherButtonTitles:nil];
[alert show];
[alert release];
}
