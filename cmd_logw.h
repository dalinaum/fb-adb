/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in
 *  the LICENSE file in the root directory of this source tree. An
 *  additional grant of patent rights can be found in the PATENTS file
 *  in the same directory.
 *
 */
#pragma once
#include <getopt.h>
#include "cmd_shex.h"

extern const char logw_opts[];
extern const struct option logw_longopts[];
extern const char logw_usage[];
extern int logw_main(int argc, const char** argv);
