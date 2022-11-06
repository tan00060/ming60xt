// Copyright 2022 ziptyze (@ziptyze)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define DYNAMIC_KEYMAP_LAYER_COUNT 3

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS { GP16, GP17, GP18, GP19, GP20 }
#define MATRIX_COL_PINS { GP26, GP27, GP1, GP2, GP3,  GP4, GP5, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15 }
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5
