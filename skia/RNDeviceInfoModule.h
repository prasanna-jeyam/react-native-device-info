/*
 * Copyright (C) 1994-2023 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <cxxreact/CxxModule.h>

#include "ReactSkia/utils/RnsUtils.h"


namespace facebook {
namespace xplat {

class RNDeviceInfoModule : public module::CxxModule {
 public:
  RNDeviceInfoModule();
  virtual auto getConstants() -> std::map<std::string, folly::dynamic>;
  virtual auto getMethods() -> std::vector<Method>;
  std::string getName();
};

} // namespace xplat
} // namespace facebook