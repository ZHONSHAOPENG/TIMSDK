#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDateEditController : UIViewController

- (instancetype)initWithDate:(NSDate *)date;

@property UIDatePicker *datePicker;
@property NSDate *dateValue;

@end

NS_ASSUME_NONNULL_END
