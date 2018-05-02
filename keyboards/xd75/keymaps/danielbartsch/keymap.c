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

// key shorthand
#define __ss__ KC_SPC
#define ______ KC_TRNS
// lsft = s = left shift + keycode
// sft_t = left shift when held, parameter when tapped 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* WORKMAN
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 0      | 1      | 2      | 3      | 4      | HOME   | DEL    | END    | 5      | 6      | 7      | 8      | 9      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        |        | Q q    | D d    | R r    | W w    | B b    | BACKSP | J j    | F f    | U u    | P p    | ; :    |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        | TAB    | A a    | S s    | H h    | T t    | G g    | Enter  | Y y    | N n    | E e    | O o    | I i    |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * |        |        | Z z    | X x    | M m    | C c    | V v    | UP     | K k    | L l    | , <    | . >    | / ?    |        |        |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   | LALT   |        |        | SPACELS| LEFT   | DOWN   | RIGHT  | SPACEFN|        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_WM] = { /* WORKMAN */
  { KC_ESC,  KC_0,    KC_1,    KC_2,   KC_3,   KC_4,          KC_HOME,KC_DEL,  KC_END,  KC_5,            KC_6,    KC_7,   KC_8,    KC_9,   __ss__ },
  { __ss__,  __ss__,  KC_Q,    KC_D,   KC_R,   KC_W,          KC_B,   KC_BSPC, KC_J,    KC_F,            KC_U,    KC_P,   KC_SCLN, __ss__, __ss__ },
  { __ss__ , KC_TAB,  KC_A,    KC_S,   KC_H,   KC_T,          KC_G,   KC_ENT,  KC_Y,    KC_N,            KC_E,    KC_O,   KC_I,    __ss__, __ss__ },
  { __ss__ , __ss__,  KC_Z,    KC_X,   KC_M,   KC_C,          KC_V,   KC_UP,   KC_K,    KC_L,            KC_COMM, KC_DOT, KC_SLSH, __ss__, __ss__ },
  { KC_LCTL, KC_LGUI, KC_LALT, __ss__, __ss__, SFT_T(__ss__), KC_LEFT,KC_DOWN, KC_RGHT, LT(_FN, __ss__), __ss__,  __ss__, __ss__,  __ss__, __ss__ },
 },

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     |        |        |        | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | VOLDWN | VOLUP  |        |        |        | _      |        |        |        | *      |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        | {      | [      | (      |        |        |        | )      | ]      | }      | =      |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        | -      |        | PGDOWN |        | +      |        |        | !      |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        | PGUP   | RESET  | FN     |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [_FN] = { /* FUNCTION */
  { KC_F1,             KC_F2,           KC_F3,  KC_F4,   KC_F5,   KC_F6,  ______, ______,    ______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12 },
  { KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, ______, ______,  ______,  KC_UNDS,______, ______,    ______, S(KC_8), ______,  ______,  ______,  ______, ______ },
  { ______,            ______,          ______, KC_LCBR, KC_LBRC, KC_LPRN,______, ______,    ______, KC_RPRN, KC_RBRC, KC_RCBR, KC_EQL,  ______, ______ },
  { ______,            ______,          ______, ______,  ______,  KC_PMNS,______, KC_PGUP,   ______, KC_PPLS, ______,  ______,  S(KC_1), ______, ______ },
  { ______,            ______,          ______, ______,  ______,  ______, ______, KC_PGDOWN, RESET,  ______,  ______,  ______,  ______,  ______, ______ },
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
