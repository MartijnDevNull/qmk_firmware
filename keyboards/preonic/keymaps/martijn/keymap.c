/* Copyright 2015-2017 Jack Humbert
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |Poker |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | ctrl |  os  | mod3  | alt  |  program   |    space    | os   | $    | print| ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_preonic_2x2u( \
  KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
  MO(1),     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT, \
  KC_LSPO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, \
  KC_LCTL,   KC_LGUI, MO(3),   KC_LALT,          MO(2),   KC_SPC,           KC_LGUI, KC_DLR,  KC_PSCR, KC_LCTL
),

/* POKER
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |Poker |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | ctrl |  os  | mod3  | alt  |  program   |    space    | os   | $    | print| ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_preonic_2x2u( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_DEL, \
  KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, KC_F5,    XXXXXXX,   XXXXXXX,   T_PREV,    KC_UP,     T_NEXT,    KC_ENT,    KC_ENT, \
  KC_TRNS, SELECT,  KC_VOLD, KC_VOLU, KC_MUTE,  XXXXXXX,   KC_HOME,   KC_LEFT,   KC_DOWN,   KC_RGHT,   KC_BSPC,   KC_DEL, \
  KC_LSFT, XXXXXXX, XXXXXXX, COPY,    PASTE,    XXXXXXX,   KC_END,    XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_LSFT, \
  KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,   KC_SPC,               KC_TRNS,   XXXXXXX,   XXXXXXX,   KC_LCTL
),

/* PROGMAM
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |Poker |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | ctrl |  os  | mod3  | alt  |  program   |    space    | os   | $    | print| ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_preonic_2x2u( \
  XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,    KC_F8,    KC_F9,   KC_F10,  KC_F11, \
  XXXXXXX,   KC_GRV,  KC_TILD, KC_DLR,  XXXXXXX, XXXXXXX, XXXXXXX, KC_DQUO,  KC_LCBR,  KC_RCBR, XXXXXXX, XXXXXXX, \
  KC_TRNS,   KC_PLUS, KC_MINS, KC_UNDS, KC_EQL,  XXXXXXX, XXXXXXX, KC_QUOTE, KC_QUOTE, KC_DQUO, XXXXXXX, XXXXXXX, \
  KC_LSFT,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_LBRC,  KC_RBRC, XXXXXXX, KC_LSFT, \
  XXXXXXX,   XXXXXXX, KC_TRNS, XXXXXXX,          KC_TRNS, KC_SPC,            XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX
),

/* EXTRA
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |Poker |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | ctrl |  os  | mod3  | alt  |  program   |    space    | os   | $    | print| ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[3] = LAYOUT_preonic_2x2u( \
  XXXXXXX,   RESET,     EEP_RST,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_MINS, KC_EQL,  XXXXXXX, XXXXXXX, \
  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_7,    KC_8,    KC_9,    XXXXXXX, \
  XXXXXXX,   XXXXXXX,   MU_TOG,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_4,    KC_5,    KC_6,    XXXXXXX, \
  XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_1,    KC_2,    KC_3,    XXXXXXX, \
  XXXXXXX,   XXXXXXX,   KC_TRNS,   XXXXXXX,              KC_TRNS,   KC_SPC,               KC_0,    KC_0,    KC_0,    XXXXXXX
)

};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//         case QWERTY:
//           if (record->event.pressed) {
//             set_single_persistent_default_layer(_QWERTY);
//           }
//           return false;
//           break;
//         case POKER:
//           if (record->event.pressed) {
//             layer_on(_POKER);
//             // update_tri_layer(_POKER, _PROGRAM, _EXTRA);
//           } else {
//             layer_off(_POKER);
//             // update_tri_layer(_POKER, _PROGRAM, _EXTRA);
//           }
//           return false;
//           break;
//         case PROGMAM:
//           if (record->event.pressed) {
//             layer_on(_PROGRAM);
//             // update_tri_layer(_POKER, _PROGRAM, _EXTRA);
//           } else {
//             layer_off(_PROGRAM);
//             // update_tri_layer(_POKER, _PROGRAM, _EXTRA);
//           }
//           return false;
//           break;
//         case EXTRA:
//           if (record->event.pressed) {
//             layer_on(_EXTRA);
//             // update_tri_layer(_POKER, _PROGRAM, _EXTRA);
//           } else {
//             layer_off(_EXTRA);
//             // update_tri_layer(_POKER, _PROGRAM, _EXTRA);
//           }
//           return false;
//           break;
//       }
//     return true;
// };
