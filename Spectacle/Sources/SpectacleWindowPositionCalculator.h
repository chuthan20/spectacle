#import <Foundation/Foundation.h>

#import "SpectacleMacros.h"
#import "SpectacleWindowAction.h"

@class SpectacleWindowPositionCalculationResult;

@interface SpectacleWindowPositionCalculator : NSObject

- (instancetype)initWithErrorHandler:(void(^)(NSString *message))errorHandler NS_DESIGNATED_INITIALIZER;

- (SpectacleWindowPositionCalculationResult *)calculateWindowRect:(CGRect)windowRect
                                  visibleFrameOfDestinationScreen:(CGRect)visibleFrameOfDestinationScreen
                                       visibleFrameOfSourceScreen:(CGRect)visibleFrameOfSourceScreen
                                                            action:(SpectacleWindowAction *)action;

SPECTACLE_INIT_AND_NEW_UNAVAILABLE

@end
