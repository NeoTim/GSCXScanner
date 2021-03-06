//
// Copyright 2019 Google Inc.
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

#import <Foundation/Foundation.h>

#import "GSCXScannerIssue.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * A collection of util methods used in multiple test classes.
 */
@interface GSCXScannerTestsUtils : NSObject

/**
 * Determines if each issue in @c firstArray equals an element in @c secondArray. Does not
 * require the elements be in the same order. Issues must satisfy @c hasEqualElementAsIssue: and
 * have the same GTX checks and descriptions.
 *
 * @param firstArray An array of issues to compare.
 * @param secondArray An array of issues to compare.
 * @return @c YES if the issues in both arrays are equal, @c NO otherwise.
 */
+ (BOOL)issues:(NSArray<GSCXScannerIssue *> *)firstArray
    equalIssuesUnordered:(NSArray<GSCXScannerIssue *> *)secondArray;

@end

NS_ASSUME_NONNULL_END
