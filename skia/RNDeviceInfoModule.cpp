/*
 * Copyright (C) 1994-2023 OpenTV, Inc. and Nagravision S.A.
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
        [] (dynamic args, Callback resolveCb , Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = false;
          resolveCb({result});
          return;
        }),
    Method(
        "isEmulatorSync",
        [] () -> bool {
          RNS_LOG_NOT_IMPL;
          return false;
        },SyncTag),
    Method(
        "getFontScale",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = 1.0;
          resolveCb({result});
          return;
        }),
    Method(
        "getFontScaleSync",
        [] () -> float {
          RNS_LOG_NOT_IMPL;
          return 1.0;
        },SyncTag),
    Method(
        "isPinOrFingerprintSet",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = false;
          resolveCb({result});
          return;
        }),
    Method(
        "isPinOrFingerprintSetSync",
        [] () -> bool {
          RNS_LOG_NOT_IMPL;
          return false;
        },SyncTag),
    Method(
        "getCarrier",
        [] (dynamic args, Callback resolveCb, Callback rejectCbr) {
          RNS_LOG_NOT_IMPL;
          dynamic result = "Nagra";
          resolveCb({result});
          return ;
        }),  
    Method(
        "getCarrierSync",
        [] () -> std::string {
          RNS_LOG_NOT_IMPL;
          return "Nagra";
        },SyncTag),
    Method(
        "getTotalDiskCapacity",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = 536870912000;
          resolveCb({result});
          return;
        }),
    Method(
        "getTotalDiskCapacitySync",
        [] () -> double {
          RNS_LOG_NOT_IMPL;
          return 536870912000;
        },SyncTag),
    Method(
        "getFreeDiskStorage",
        [] (dynamic args, Callback resolveCb, Callback rejectCb){
          RNS_LOG_NOT_IMPL;
          dynamic result = 53687091;
          resolveCb({result});
          return ;
        }),
    Method(
        "getFreeDiskStorageSync",
        [] () -> double {
          RNS_LOG_NOT_IMPL;
          return 53687091;
        },SyncTag),
    Method(
        "getBuildId",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = "BUILD5.3";
          resolveCb({result});
          return;
        }),
    Method(
        "getBuildIdSync",
        [] () -> std::string {
          RNS_LOG_NOT_IMPL;
          return "BUILD5.3";
        },SyncTag),
    Method(
        "getUniqueId",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = "Nagra_UNIQUEID";
          resolveCb({result});
          return;
        }),
    Method(
        "getUniqueIdSync",
        [] () -> std::string {
          RNS_LOG_NOT_IMPL;
          return "Nagra_UNIQUEID";
        },SyncTag),
    Method(
        "getTotalMemory",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = 33384587264;
          resolveCb({result});
          return;
        }),
    Method(
        "getTotalMemorySync",
        [] () -> double {
          RNS_LOG_NOT_IMPL;
          return 33384587264;
        },SyncTag),
    Method(
        "getSupportedAbis",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = {};
          resolveCb({result});
          return;
        }),
    Method(
        "getSupportedAbisSync",
        [] () -> dynamic {
          RNS_LOG_NOT_IMPL;
          return {};
        },SyncTag),
    Method(
        "getIpAddress",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = "192.168.2.1";
          resolveCb({result});
          return;
        }),
    Method(
        "getIpAddressSync",
        [] () -> std::string {
          RNS_LOG_NOT_IMPL;
          return "192.168.2.1";
        },SyncTag),
    Method(
        "getPowerState",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = {};
          resolveCb({result});
          return;
        }),
    Method(
        "getPowerStateSync",
        [] (dynamic args) -> dynamic {
          RNS_LOG_NOT_IMPL;
          return {};
        },SyncTag),
    Method(
        "getBatteryLevel",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = 100.0;
          resolveCb({result});
          return;
        }),
    Method(
        "getBatteryLevelSync",
        [] () -> double {
          RNS_LOG_NOT_IMPL;
          return 100.0;
        },SyncTag),
    Method(
        "isBatteryCharging",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = false;
          resolveCb({result});
          return;
        }),
    Method(
        "isBatteryChargingSync",
        [] () -> bool {
          RNS_LOG_NOT_IMPL;
          return false;
        },SyncTag),
    Method(
        "isLocationEnabled",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = false;
          resolveCb({result});
          return;
        }),
    Method(
        "isLocationEnabledSync",
        [] () -> bool {
          RNS_LOG_NOT_IMPL;
          return false;
        },SyncTag),
    Method(
        "isHeadphonesConnected",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = false;
          resolveCb({result});
          return;
        }),
    Method(
        "isHeadphonesConnectedSync",
        [] () -> bool {
          RNS_LOG_NOT_IMPL;
          return false;
        },SyncTag),
    Method(
        "getUsedMemory",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = 5186736128;
          resolveCb({result});
          return;
        }),
    Method(
       "getUsedMemorySync",
        [] () -> double {
          RNS_LOG_NOT_IMPL;
          return 5186736128;
        },SyncTag),
    Method(
        "getUserAgent",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = "Chromium,5.3";
          resolveCb({result});
          return;
        }),
    Method(
        "getUserAgentSync",
        [] () -> std::string {
          RNS_LOG_NOT_IMPL;
          return "Chromium,5.3";
        },SyncTag),
    Method(
        "getAvailableLocationProviders",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = {};
          resolveCb({result});
          return;
        }),
    Method(
        "getAvailableLocationProvidersSync",
        [] () -> dynamic {
          RNS_LOG_NOT_IMPL;
          return {};
        },SyncTag),
    Method(
        "getInstallerPackageName",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
         RNS_LOG_NOT_IMPL;
         dynamic result = "apt";
         resolveCb({result});
         return;
        }),
    Method(
        "getInstallerPackageNameSync",
        [] () -> std::string {
          RNS_LOG_NOT_IMPL;
          return "apt";
        },SyncTag),
    Method(
        "getFirstInstallTime",
        [] (dynamic args, Callback resolveCb, Callback rejectCb) {
          RNS_LOG_NOT_IMPL;
          dynamic result = 1.0;
          resolveCb({result});                                                                                                                                                                                                                                                                        
          return;
        }),
    Method(
        "getFirstInstallTimeSync",
        [] () -> double {
          RNS_LOG_NOT_IMPL;
          return 1.0;
       },SyncTag),
 };
}

#ifdef __cplusplus
extern "C" {
#endif
RNS_EXPORT_MODULE(RNDeviceInfo)
#ifdef __cplusplus
}
#endif

} // namespace xplat
} // namespace facebook
