//
// Created by beich on 2020/12/28.
//

#pragma once

#include "hook_common.h"

HOOK_DECLARE(int, execvp, const char *name, char *const *argv);