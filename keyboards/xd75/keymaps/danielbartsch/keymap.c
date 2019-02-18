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
#include "keymap_german.h"

// Layer shorthand
#define _WM 0
#define _SH 1
#define _FN 2

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE,
  CURLY_BRACKETS,
  SQUARE_BRACKETS,
  ROUND_BRACKETS,
  ANGLE_BRACKETS
};

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
#define MO_SH MO(_SH)
#define MO_FN MO(_FN)
#define VOL_DN KC_AUDIO_VOL_DOWN
#define VOL_UP KC_AUDIO_VOL_UP
#define MS_LEFT KC_MS_LEFT
#define MS_UP KC_MS_UP
#define MS_DOWN KC_MS_DOWN
#define MS_RIGHT KC_MS_RIGHT
// rsft = tap letter with right shift

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* WORKMAN
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 0      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | ß      | ä      |        | PGUP   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | q      | d      | r      | w      | b      | j      | f      | u      | p      | =      | $      | ü      |        | PGDOWN |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * | ENTER  | a      | s      | h      | t      | g      | y      | n      | e      | o      | i      | '      | ö      | PRINT  | RGUI   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * | *      | z      | x      | m      | c      | v      | k      | l      | ,      | .      | /      | ^      | HOME   | UP     | END    |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | VOLDWN | VOLUP  | LALT   | LS     | SPACE  | LCTRL  | BACKSP | SPACE  | FN     | DEL    | LOCK   | MENU   | LEFT   | DOWN   | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_WM] = { /* WORKMAN */
  { KC_ESC,  DE_0,   DE_1,   DE_2,    DE_3,  DE_4,     DE_5,    DE_6,  DE_7,    DE_8,    DE_9,    DE_SS,   DE_AE,   __ss__,  KC_PGUP },
  { KC_TAB,  DE_Q,   DE_D,   DE_R,    DE_W,  DE_B,     DE_J,    DE_F,  DE_U,    DE_P,    DE_EQL,  DE_DLR,  DE_UE,   __ss__,  KC_PGDOWN },
  { KC_ENT,  DE_A,   DE_S,   DE_H,    DE_T,  DE_G,     DE_Y,    DE_N,  DE_E,    DE_O,    DE_I,    DE_QUOT, DE_OE,   KC_PSCR, KC_RGUI },
  { DE_ASTR, DE_Z,   DE_X,   DE_M,    DE_C,  DE_V,     DE_K,    DE_L,  DE_COMM, DE_DOT,  DE_SLSH, DE_CIRC, KC_HOME, KC_UP,   KC_END },
  { VOL_DN,  VOL_UP, KC_LALT, MO_SH, __ss__, KC_LCTRL, KC_BSPC, __ss__,MO_FN,   KC_DEL,  KC_LOCK, KC_MENU, KC_LEFT, KC_DOWN, KC_RGHT },
},

 /* SHIFT
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        | NUM 0  | NUM 1  | NUM 2  | NUM 3  | NUM 4  | NUM 5  | NUM 6  | NUM 7  | NUM 8  | NUM 9  |        | Ä      |        | PGUP   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | D      | R      | W      | B      | J      | F      | U      | P      | +      | %      | Ü      |        | PGDOWN |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * | ENTER  | A      | S      | H      | T      | G      | Y      | N      | E      | O      | I      | "      | Ö      |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * | @      | Z      | X      | M      | C      | V      | K      | L      | ?      | !      | \      |        | HOME   | UP     | END    |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        | BACKSP |        |        | DEL    |        |        | LEFT   | DOWN   | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_SH] = { /* SHIFT */
  { ______, KC_P0,  KC_P1,  KC_P2,  KC_P3,  KC_P4,  KC_P5,  KC_P6,  KC_P7,  KC_P8,   KC_P9,   ______,  ______, ______, ______ },
  { ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,  DE_PLUS, DE_PERC, ______, ______, ______ },
  { ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,  ______,  DE_DQOT, ______, ______, ______ },
  { DE_AT,  ______, ______, ______, ______, ______, ______, ______, DE_QST, DE_EXLM, DE_BSLS, ______,  ______, ______, ______ },
  { ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,  ______,  ______,  ______, ______, ______ },
},

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | <>     | []     | {}     | ()     |        |        |        |        |        |        |        |        | WHEELUP|        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | ENTER  | LEFT   | UP     | DOWN   | RIGHT  |        |        | _      | |      | &      | ~      | `      | WHEELLT| WHEELDN| WHEELRT|
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | #      |        |        | HOME   | END    |        |        | -      | ;      | :      |        |        | LTCLCK | MUP    | RTCLCK |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | RESET  |        |        |        |        |        | BACKSP | FN     |        | DEL    |        |        | MLEFT  | MDOWN  | MRIGHT |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

[_FN] = { /* FUNCTION */
  { ______,  ______,         KC_F1,           KC_F2,          KC_F3,          KC_F4,  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,        KC_F12,        ______ },
  { ______,  ANGLE_BRACKETS, SQUARE_BRACKETS, CURLY_BRACKETS, ROUND_BRACKETS, ______, ______, ______,  ______,  ______,  ______,  ______, ______,        KC_MS_WH_UP,   ______ },
  { ______,  KC_LEFT,        KC_UP,           KC_DOWN,        KC_RIGHT,       ______, ______, DE_UNDS, DE_PIPE, DE_AMPR, DE_TILD, DE_GRV, KC_MS_WH_LEFT, KC_MS_WH_DOWN, KC_MS_WH_RIGHT },
  { DE_HASH, ______,         ______,          KC_HOME,        KC_END,         ______, ______, DE_MINS, DE_SCLN, DE_COLN, ______,  ______, KC_MS_BTN1,    MS_UP,         KC_MS_BTN2 },
  { RESET,   ______,         ______,          ______,         ______,         ______, ______, ______,  ______,  ______,  ______,  ______, MS_LEFT,       MS_DOWN,       MS_RIGHT },
}
};

const uint16_t PROGMEM fn_actions[] = {

};

static bool fakeShiftPressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool returnValue;
  switch (keycode) {
    case MO_SH:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_LSHIFT));
        fakeShiftPressed = true;
      } else {
        SEND_STRING(SS_UP(X_LSHIFT));
        fakeShiftPressed = false;
      }
      returnValue = true;
      break;
    case DE_PLUS:
    case DE_BSLS:
    case DE_AT:
      if (record->event.pressed) {
        SEND_STRING(SS_UP(X_LSHIFT));
        fakeShiftPressed = false;
      } else {
        SEND_STRING(SS_DOWN(X_LSHIFT));
        fakeShiftPressed = true;
      }
      returnValue = true;
      break;
    case DE_GRV:
      if (record->event.pressed) {
        // '+' equals shifted '=' in american keyboard, which equals backtick in german keyboard
        // one backtick in german keyboard prints nothing (dead key), and needs a second input
        // if the second input is a space, one backtick will be sent
        SEND_STRING("+ ");
      }
      returnValue = false;
      break;
    case CURLY_BRACKETS:
      if (record->event.pressed) {
        // right alt + 7 equals '{', right alt + 0 equals '}' in german keyboard
        SEND_STRING(SS_DOWN(X_RALT)"70"SS_UP(X_RALT)SS_TAP(X_LEFT));
      }
      returnValue = false;
      break;
    case SQUARE_BRACKETS:
      if (record->event.pressed) {
        // right alt + 8 equals '[', right alt + 9 equals ']' in german keyboard
        SEND_STRING(SS_DOWN(X_RALT)"89"SS_UP(X_RALT)SS_TAP(X_LEFT));
      }
      returnValue = false;
      break;
    case ROUND_BRACKETS:
      if (record->event.pressed) {
        // shift + 8 equals '(', shift + 9 equals ')' in german keyboard
        SEND_STRING(SS_DOWN(X_LSHIFT)"89"SS_UP(X_LSHIFT)SS_TAP(X_LEFT));
      }
      returnValue = false;
      break;
    case ANGLE_BRACKETS:
      if (record->event.pressed) {
        // X_NONUS_BSLASH is a key that does not exist in an american keyboard.
        // It produces < normally, and > in shifted state in a german keyboard.
        SEND_STRING(SS_TAP(X_NONUS_BSLASH)SS_DOWN(X_LSHIFT)SS_TAP(X_NONUS_BSLASH)SS_UP(X_LSHIFT)SS_TAP(X_LEFT));
      }
      returnValue = false;
      break;
    default:
      returnValue = true;
      break;
  }
  if (returnValue == true) {
    if (record->event.pressed && !fakeShiftPressed) {
      SEND_STRING(SS_UP(X_LSHIFT));
    } else if (fakeShiftPressed) {
      SEND_STRING(SS_DOWN(X_LSHIFT));
    }
  }
  return returnValue;
}

/*
flash firmware:
  1. reset keyboard
  2. sudo dfu-programmer atmega32u4 erase
  3. sudo dfu-programmer atmega32u4 flash xd75_danielbartsch.hex 
  4. sudo dfu-programmer atmega32u4 reset
*/