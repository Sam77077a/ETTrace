// Copyright 2019 Google
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

#include <dispatch/dispatch.h>

#include "Crashlytics/Crashlytics/Helpers/FIRCLSInternalLogging.h"
#include "Crashlytics/Crashlytics/Components/FIRCLSGlobals.h"
#include "Crashlytics/Crashlytics/Helpers/FIRCLSUtility.h"

void FIRCLSSDKFileLog(FIRCLSInternalLogLevel level, const char* format, ...) {
  va_list args;
  va_start(args, format);
  va_end(args);
}