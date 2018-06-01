/* Copyright 2017 Benjamin Kesselring
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// place overrides here

#undef RGBLIGHT_HUE_STEP
#undef RGBLIGHT_SAT_STEP
#undef RGBLIGHT_VAL_STEP
#undef RGBLIGHT_LIMIT_VAL
#undef RGBLIGHT_SLEEP
#define RGBLIGHT_HUE_STEP 5 // units to step when in/decreasing hue
#define RGBLIGHT_SAT_STEP 5 // units to step when in/decresing saturation
#define RGBLIGHT_VAL_STEP 5 // units to step when in/decreasing value (brightness)
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_SLEEP
#define PERMISSIVE_HOLD
#define MOUSEKEY_DELAY             100
#define MOUSEKEY_INTERVAL          30
#define MOUSEKEY_MAX_SPEED         30
#define MOUSEKEY_TIME_TO_MAX       30 
#define MOUSEKEY_WHEEL_MAX_SPEED   20
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

#endif
