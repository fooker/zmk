/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr/types.h>

int zmk_split_position_pressed(uint8_t position);

int zmk_split_position_released(uint8_t position);
