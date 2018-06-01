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
#define _SH 1
#define _FN 2

// os switches
// #define OS_LIN 101
// #define OS_MAC 100
// #define OS_WIN 99

// unicode
// #define umA 0x00C4
// #define uma 0x00E4
// #define umO 0x00D6
// #define umo 0x00F6
// #define umU 0x00DC
// #define umu 0x00FC
// #define umS 0x1E9E
// #define ums 0x00DF

// key shorthand
#define __ss__ KC_SPC
#define ______ KC_TRNS
// rsft = tap letter with right shift

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* WORKMAN
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 0      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | $      | DEL    | PGUP   | HOME   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | CAPS   | q      | d      | r      | w      | b      | j      | f      | u      | p      | ;      | =      | BACKSP | PGDOWN | END    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * | TAB    | a      | s      | h      | t      | g      | y      | n      | e      | o      | i      | '      | ENTER  | PRINT  | RGUI   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * | &      | z      | x      | m      | c      | v      | k      | l      | ,      | .      | /      | -      |        | UP     |        |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        | VOLDWN | VOLUP  | LALT   | SPACELS| LCTRL  | RCTRL  | SPACEFN| RALT   | LOCK   |        | MENU   | LEFT   | DOWN   | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_WM] = { /* WORKMAN */
  { KC_ESC,  KC_0,              KC_1,            KC_2,    KC_3,            KC_4,     KC_5,    KC_6,            KC_7,    KC_8,    KC_9,    KC_DLR,  KC_DEL,   KC_PGUP,   KC_HOME },
  { DF(_SH), KC_Q,              KC_D,            KC_R,    KC_W,            KC_B,     KC_J,    KC_F,            KC_U,    KC_P,    KC_SCLN, KC_EQL,  KC_BSPC,  KC_PGDOWN, KC_END },
  { KC_TAB,  KC_A,              KC_S,            KC_H,    KC_T,            KC_G,     KC_Y,    KC_N,            KC_E,    KC_O,    KC_I,    KC_QUOT, KC_ENT,   KC_PSCR,   KC_RGUI },
  { KC_AMPR, KC_Z,              KC_X,            KC_M,    KC_C,            KC_V,     KC_K,    KC_L,            KC_COMM, KC_DOT,  KC_SLSH, KC_PMNS, __ss__,   KC_UP,     __ss__ },
  { __ss__,  KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_LALT, LT(_SH, __ss__), KC_LCTRL, KC_RCTL, LT(_FN, __ss__), KC_RALT, KC_LOCK, __ss__,  KC_MENU, KC_LEFT,  KC_DOWN,   KC_RGHT },
},

 /* SHIFT
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        | %      | DEL    | PGUP   | HOME   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        | Q      | D      | R      | W      | B      | J      | F      | U      | P      | :      | +      | BACKSP | PGDOWN | END    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        | A      | S      | H      | T      | G      | Y      | N      | E      | O      | I      | "      | ENTER  |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * | @      | Z      | X      | M      | C      | V      | K      | L      | ?      | !      | \      | _      |        | UP     |        |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        | LEFT   | DOWN   | RIGHT  | 
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_SH] = { /* SHIFT */
  { ______,       ______,     ______,     ______,        ______,     ______,         ______,        ______,     ______,        ______,     ______,     RSFT(KC_5),    RSFT(KC_DEL),   RSFT(KC_PGUP),   RSFT(KC_HOME) },
  { DF(_WM),      RSFT(KC_Q), RSFT(KC_D), RSFT(KC_R),    RSFT(KC_W), RSFT(KC_B),     RSFT(KC_J),    RSFT(KC_F), RSFT(KC_U),    RSFT(KC_P), KC_COLN,    KC_PPLS,       RSFT(KC_BSPC),  RSFT(KC_PGDOWN), RSFT(KC_END) },
  { RSFT(KC_TAB), RSFT(KC_A), RSFT(KC_S), RSFT(KC_H),    RSFT(KC_T), RSFT(KC_G),     RSFT(KC_Y),    RSFT(KC_N), RSFT(KC_E),    RSFT(KC_O), RSFT(KC_I), KC_DQT,        RSFT(KC_ENT),   ______,          RSFT(KC_RGUI) },
  { KC_AT,        RSFT(KC_Z), RSFT(KC_X), RSFT(KC_M),    RSFT(KC_C), RSFT(KC_V),     RSFT(KC_K),    RSFT(KC_L), KC_QUES,       KC_EXLM,    KC_BSLASH,  KC_UNDS,       ______,         RSFT(KC_UP),     ______ },
  { ______,       ______,     ______,     RSFT(KC_LALT), ______,     RSFT(KC_LCTRL), RSFT(KC_RCTL), ______,     RSFT(KC_RALT), ______,     ______,     RSFT(KC_MENU), RSFT(KC_LEFT),  RSFT(KC_DOWN),   RSFT(KC_RGHT) },
},

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        | *      |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | <      | {      | [      | (      |        |        | )      | ]      | }      | >      | `      |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | #      |        |        |        |        |        |        |        |        |        | |      | ^      |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | RESET  |        |        |        |        |        |        | FN     |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_FN] = { /* FUNCTION */
  { ______,  ______, KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12, ______ },
  { ______,  ______, ______,  ______,  ______,  ______, ______, ______,  ______,  ______,  ______,  KC_ASTR, ______, ______, ______ },
  { ______,  KC_LT,  KC_LCBR, KC_LBRC, KC_LPRN, ______, ______, KC_RPRN, KC_RBRC, KC_RCBR, KC_GT,   KC_GRV,  ______, ______, ______ },
  { KC_HASH, ______, ______,  ______,  ______,  ______, ______, ______,  ______,  ______,  KC_PIPE, KC_CIRC, ______, ______, ______ },
  { RESET,   ______, ______,  ______,  ______,  ______, ______, ______,  ______,  ______,  ______,  ______,  ______, ______, ______ },
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

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     /* os switcher */
//     case OS_LIN:
//       set_unicode_input_mode(UC_LNX);
//       rgblight_enable();
//       rgblight_setrgb(233, 84, 32);
//       return false;
//       break;
//     case OS_WIN:
//       set_unicode_input_mode(UC_WINC);
//       rgblight_enable();
//       rgblight_setrgb(0, 122, 204);
//       return false;
//       break;
//     case OS_MAC:
//       set_unicode_input_mode(UC_OSX);
//       rgblight_enable();
//       rgblight_setrgb(255, 255, 255);
//       return false;
//       break;
//   }
//   return true;
// }

// void matrix_init_user() {
//   set_unicode_input_mode(UC_WINC);
//   rgblight_enable();
//   rgblight_setrgb(0, 122, 204);
// }