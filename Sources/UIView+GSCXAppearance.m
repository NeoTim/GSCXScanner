//
// Copyright 2020 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "UIView+GSCXAppearance.h"

NS_ASSUME_NONNULL_BEGIN

@implementation UIView (GSCXAppearance)

- (void)gscx_setOverrideUserInterfaceStyleForCurrentApperance {
#if defined(__IPHONE_13_0) && (__IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_13_0)
  if (@available(iOS 13.0, *)) {
    self.overrideUserInterfaceStyle =
        (UIScreen.mainScreen.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark)
            ? UIUserInterfaceStyleLight
            : UIUserInterfaceStyleDark;
  }
#endif
}

@end

NS_ASSUME_NONNULL_END
