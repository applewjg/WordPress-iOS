#import <UIKit/UIKit.h>


typedef void (^SettingsMultiTextAction)(void);
typedef void (^SettingsMultiTextChanged)(NSString * _Nonnull);


/// Reusable component that renders a UITextView + Hint onscreen. Useful for Text / Password.
///
@interface SettingsMultiTextViewController : UITableViewController

/// String to be displayed at the bottom.
///
@property (nullable, nonatomic, strong) NSString *hint;

/// Placeholder string to be displayed, in case the text is empty.
///
@property (nullable, nonatomic, strong) NSString *placeholder;

/// The raw string (current value) to edit.
///
@property (nullable, nonatomic, strong) NSString *text;

/// Boolean indicating whether secure text entry is required, or not.
///
@property (nonatomic, assign) BOOL isPassword;

/// Block to be executed on dismiss, if the value was effectively updated.
///
@property (nullable, nonatomic, copy) SettingsMultiTextChanged onValueChanged;

/// Block to be executed on cancellation
///
@property (nullable, nonatomic, copy) SettingsMultiTextAction onCancel;

- (nonnull instancetype)initWithText:(NSString * __nullable)text
                         placeholder:(NSString * __nullable)placeholder
                                hint:(NSString * __nullable)hint
                          isPassword:(BOOL)isPassword;

@end
