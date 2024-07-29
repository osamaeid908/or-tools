// Copyright 2010-2024 Google LLC
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef OR_TOOLS_MATH_OPT_IO_LP_MATCHERS_H_
#define OR_TOOLS_MATH_OPT_IO_LP_MATCHERS_H_

#include "ortools/base/gmock.h"
#include "ortools/math_opt/io/lp/lp_model.h"

namespace operations_research::lp_format {

testing::Matcher<Constraint> ConstraintEquals(const Constraint& expected);

testing::Matcher<LpModel> ModelEquals(const LpModel& expected);

}  // namespace operations_research::lp_format

#endif  // OR_TOOLS_MATH_OPT_IO_LP_MATCHERS_H_
