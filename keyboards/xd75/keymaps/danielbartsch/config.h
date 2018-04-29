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
#define RGBLIGHT_HUE_STEP 5 // units to step when in/decreasing hue
#undef RGBLIGHT_SAT_STEP
#define RGBLIGHT_SAT_STEP 5 // units to step when in/decresing saturation
#undef RGBLIGHT_VAL_STEP
#define RGBLIGHT_VAL_STEP 5 // units to step when in/decreasing value (brightness)
#undef RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LIMIT_VAL 255
#undef RGBLIGHT_SLEEP
#define RGBLIGHT_SLEEP

#endif
