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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = false;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = 1.0;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = false;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = "Nagra";
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = 536870912000;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError){
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = 53687091;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = "BUILD5.3";
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = "Nagra_UNIQUEID";
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = 33384587264;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = {};
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = "192.168.2.1";
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = {};
          cb({result});
          return;
        }),
    Method(
        "getPowerStateSync",
        [this] (dynamic args) -> dynamic {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          return {};
        },SyncTag),
    Method(
        "getBatteryLevel",
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = 100.0;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = false;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = false;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = false;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = 5186736128;
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = "Chromium,5.3";
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = {};
          cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
         RNS_LOG_NOT_IMPL;
         RNS_UNUSED(this);
         dynamic result = "apt";
         cb({result});
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
        [this] (dynamic args, Callback cb, Callback cbError) {
          RNS_LOG_NOT_IMPL;
          RNS_UNUSED(this);
          dynamic result = 1.0;
          cb({result});                                                                                                                                                                                                                                                                        
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
RNS_EXPORT_MODULE(RNDeviceInfoModule)
#ifdef __cplusplus
}
#endif

} // namespace xplat
} // namespace facebook
