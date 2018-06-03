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
 * |        | NUM 0  | NUM 1  | NUM 2  | NUM 3  | NUM 4  | NUM 5  | NUM 6  | NUM 7  | NUM 8  | NUM 9  | %      | DEL    | PGUP   | HOME   |
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
  { ______,  KC_P0,  KC_P1,  KC_P2,  KC_P3,  KC_P4,  KC_P5,  KC_P6,  KC_P7,   KC_P8,   KC_P9,     RSFT(KC_5), ______, ______, ______ },
  { DF(_WM), ______, ______, ______, ______, ______, ______, ______, ______,  ______,  KC_COLN,   KC_PPLS,    ______, ______, ______ },
  { ______,  ______, ______, ______, ______, ______, ______, ______, ______,  ______,  ______,    KC_DQT,     ______, ______, ______ },
  { KC_AT,   ______, ______, ______, ______, ______, ______, ______, KC_QUES, KC_EXLM, KC_BSLASH, KC_UNDS,    ______, ______, ______ },
  { ______,  ______, ______, ______, ______, ______, ______, ______, ______,  ______,  ______,    ______,     ______, ______, ______ },
},

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        | *      |        | WHEELUP|        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | <      | {      | [      | (      |        |        | )      | ]      | }      | >      | `      | WHEELLT| WHEELDN| WHEELRT|
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | #      |        |        |        |        |        |        |        |        |        | |      | ^      | LTCLCK | MOUSEUP| RTCLCK |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | RESET  |        |        |        |        |        |        | FN     |        |        |        |        | MOUSELT| MOUSEDN| MOUSERT|
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_FN] = { /* FUNCTION */
  { ______,  ______, KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,        KC_F12,        ______ },
  { ______,  ______, ______,  ______,  ______,  ______, ______, ______,  ______,  ______,  ______,  KC_ASTR, ______,        KC_MS_WH_UP,   ______ },
  { ______,  KC_LT,  KC_LCBR, KC_LBRC, KC_LPRN, ______, ______, KC_RPRN, KC_RBRC, KC_RCBR, KC_GT,   KC_GRV,  KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT },
  { KC_HASH, ______, ______,  ______,  ______,  ______, ______, ______,  ______,  ______,  KC_PIPE, KC_CIRC, KC_MS_BTN1,    KC_MS_UP,      KC_MS_BTN2 },
  { RESET,   ______, ______,  ______,  ______,  ______, ______, ______,  ______,  ______,  ______,  ______,  KC_MS_LEFT,    KC_MS_DOWN,    KC_MS_RIGHT },
}
};

const uint16_t PROGMEM fn_actions[] = {

};

static bool fakeShiftPressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LT(_SH, __ss__):
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSHIFT));
        fakeShiftPressed = true;
      } else {
        SEND_STRING(SS_UP(X_LSHIFT));
        fakeShiftPressed = false;
      }
      return true;
    default:
      if (record->event.pressed && !fakeShiftPressed) {
        SEND_STRING(SS_UP(X_LSHIFT));
      } else if (fakeShiftPressed) {
        SEND_STRING(SS_DOWN(X_LSHIFT));
      }
      return true;
  }
}
