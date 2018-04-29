/* Copyright 2017 Wunder
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
#include "xd75.h"

// Layer shorthand
#define _WM 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* WORKMAN
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 0      | 1      | 2      | 3      | 4      | -      | DEL    | =      | 5      | 6      | 7      | 8      | 9      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | [ {    | Q      | D      | R      | W      | B      | BACKSP | J      | F      | U      | P      | ;      | ] }    | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * | CAP LK | (      | A      | S      | H      | T      | G      | Enter  | Y      | N      | E      | O      | I      | )      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * | LSHIFT | END    | Z      | X      | M      | C      | V      | UP     | K      | L      | ,      | .      | /      | PG DN  | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   | LALT   | FN     | LSHIFT | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | FN     | RALT   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_WM] = { /* Workman */
  { KC_ESC,  KC_0,    KC_1,    KC_2,    KC_3,    KC_4,   KC_MINS, KC_DEL,  KC_EQL,  KC_5, KC_6,    KC_7,    KC_8,    KC_9,    KC_BSPC },
  { KC_TAB,  KC_LBRC, KC_Q,    KC_D,    KC_R,    KC_W,   KC_B,   KC_BSPC, KC_J,   KC_F,   KC_U,    KC_P,    KC_SCLN, KC_RBRC, KC_QUOT },
  { KC_CAPS, KC_LPRN, KC_A,    KC_S,    KC_H,    KC_T,   KC_G,   KC_ENT,  KC_Y,   KC_N,   KC_E,    KC_O,    KC_I,    KC_RPRN, KC_ENT  },
  { KC_LSFT, KC_END,  KC_Z,    KC_X,    KC_M,    KC_C,   KC_V,   KC_UP,   KC_K,   KC_L,   KC_COMM, KC_DOT,  KC_SLSH, KC_PGDN, KC_RSFT },
  { KC_LCTL, KC_LGUI, KC_LALT, MO(_FN), KC_LSFT, KC_SPC, KC_LEFT,KC_DOWN, KC_RGHT, KC_SPC,KC_SPC,  MO(_FN), KC_RALT, KC_RGUI, KC_RCTL },
 },

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NUM LK | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SELECT | CALC   | MYCOMP | MAIL   |        |        | P7     | P8     | P9     | -      |        |        | PR SCR | SCR LK | PR SCR |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | PREV   | PLAY   | NEXT   | STOP   |        |        | P4     | P5     | P6     | +      |        |        |        | RGB_TOG|        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | VOL-   | MUTE   | VOL+   |        |        |        | P1     | P2     | P3     | PENT   |        |        | HUI    | SAI    | VAI    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | RESET  |        | RESET  | FN     |        |        | P0     |        | P.     | PENT   | PENT   | FN     | HUD    | SAD    | VAD    |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [_FN] = { /* FUNCTION */
  { KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,  KC_NLCK, KC_SLSH, KC_ASTR, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12 },
  { KC_MSEL, KC_CALC, KC_TRNS, KC_MAIL, KC_SPC, KC_SPC, KC_P7,   KC_P8,   KC_P9,   KC_MINS, KC_SPC,  KC_SPC,  KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, KC_SPC, KC_SPC, KC_P6,   KC_P5,   KC_P4,   KC_PLUS, KC_SPC,  KC_TRNS, KC_SPC,  RGB_TOG, KC_SPC },
  { KC_VOLD, KC_MUTE, KC_VOLU, KC_APP,  KC_SPC, KC_SPC, KC_P3,   KC_P2,   KC_P1,   KC_TRNS, KC_SPC,  KC_SPC,  RGB_HUI, RGB_SAI, RGB_VAI },
  { RESET,   KC_TRNS, RESET  , MO(_FN), KC_SPC, KC_SPC, KC_KP_0, KC_TRNS, KC_PDOT, KC_PENT, KC_TRNS, MO(_FN), RGB_HUD, RGB_SAD, RGB_VAD },
 }
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
