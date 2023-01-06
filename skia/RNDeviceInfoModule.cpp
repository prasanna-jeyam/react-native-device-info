/*
 * Copyright (C) 1994-2022 OpenTV, Inc. and Nagravision S.A.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ReactSkia/utils/RnsLog.h"
#include <cxxreact/JsArgumentHelpers.h>

#include "RNDeviceInfoModule.h"

using namespace folly;

namespace facebook {
namespace xplat {

RNDeviceInfoModule::RNDeviceInfoModule() { }

auto RNDeviceInfoModule::getConstants() -> std::map<std::string, folly::dynamic> {
  return {
    {"deviceId", "nagradeviceId"},
    {"bundleId", "nagrabundleId"},
    {"systemName", "nagrasystem"},
    {"systemVersion", "nagraVersion"},
    {"appVersion","nagrappVersion"},
    {"buildNumber","nagrabuildNumber"},
    {"isTablet",false},
    {"appName","nagraAppname"},
    {"brand","nagraBrand"},
    {"model","nagarModel"},
    {"deviceType","nagraDeviceType"}
  };
}

std::string RNDeviceInfoModule::getName() {
  return "RNDeviceInfo";
}

auto RNDeviceInfoModule::getMethods() -> std::vector<Method> {
  return {

    Method(
      "isEmulator",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "isEmulatorsync",
      [this] (dynamic args) -> bool {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return false;
      }),
    Method(
      "getFontScale",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getFontScaleSync",
      [this] (dynamic args) -> float {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return 1.0;
      }),
    Method(
      "isPinOrFingerprintSet",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "isPinOrFingerprintSetSync",
      [this] (dynamic args) -> bool {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return false;
      }),
    Method(
      "getCarrier",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getCarrierSync",
      [this] (dynamic args) -> string {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return "Nagra";
      }),
    Method(
      "getTotalDiskCapacity",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getTotalDiskCapacitySync",
      [this] (dynamic args) -> double {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return 536870912000;
      }),
    Method(
      "getFreeDiskStorage",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getFreeDiskStorageSync",
      [this] (dynamic args) -> double {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return 107374182400;
      }),
    Method(
      "getBuildId",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getBuildIdSync",
      [this] (dynamic args) -> string {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return "BUILD5.3";
      }),
    Method(
      "getUniqueId",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getUniqueIdSyncSync",
      [this] (dynamic args) -> string {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return "Nagra_UNIQUEID";
      }),
    Method(
      "getTotalMemory",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getTotalMemorySync",
      [this] (dynamic args) -> double {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return 33384587264;
      }),
    Method(
      "getSupportedAbis",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getSupportedAbisSync",
      [this] (dynamic args) -> dynamic {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return {};
      }),
    Method(
      "getIpAddress",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getIpAddressSync",
      [this] (dynamic args) -> string {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return "192.168.2.1";
      }),
    Method(
      "getPowerState",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getPowerStateSync",
      [this] (dynamic args) -> dynamic {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return {};
      }),
    Method(
      "getBatteryLevel",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getBatteryLevelSync",
      [this] (dynamic args) -> double {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return 100.0;
      }),
    Method(
      "isBatteryCharging",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "isBatteryCharginglSync",
      [this] (dynamic args) -> bool {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return false;
      }),
    Method(
      "isLocationEnabled",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "isLocationEnabledSync",
      [this] (dynamic args) -> bool {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return false;
      }),
    Method(
      "isHeadphonesConnected",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "isHeadphonesConnectedSync",
      [this] (dynamic args) -> bool {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return false;
      }),
    Method(
      "getUsedMemory",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
     "getUsedMemorySync",
      [this] (dynamic args) -> double {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return 5186736128;
      }),
    Method(
      "getUserAgent",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getUserAgentSync",
      [this] (dynamic args) -> string {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return "Chromium,5.3";
      }),
    Method(
      "getAvailableLocationProviders",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getAvailableLocationProvidersSync",
      [this] (dynamic args) -> dynamic {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return {};
      }),
    Method(
      "getInstallerPackageName",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getInstallerPackageNameSync",
      [this] (dynamic args) -> string {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return "apt";
      }),
    Method(
      "getFirstInstallTime",
      [this] (dynamic args, Callback cb, Callback cbError) {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return;
      }),
    Method(
      "getFirstInstallTimeSync",
      [this] (dynamic args) -> double {
        RNS_LOG_NOT_IMPL;
        RNS_UNUSED(this);
        return 1.0;
      }),
 };
}

} // namespace xplat
} // namespace facebook
