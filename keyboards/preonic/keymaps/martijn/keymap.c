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

#define _BASE    0
#define _POKER   1
#define _PROGRAM 2
#define _EXTRA   3

#define POK   MO(_POKER)
#define PROG  MO(_PROGRAM)
#define EXTR  MO(_EXTRA)


#define PRESS(keycode) register_code16(keycode)
#define RELEASE(keycode) unregister_code16(keycode)

#define JOE X(THUMBS)
#define SNEKKY X(SNEK)

enum custom_keycodes {
  HEADP = SAFE_RANGE,
  SONG,
  C_HOME,
  YANK,
  WORD
};

enum unicode_names {
    THUMBS,
    SNEK
};

const uint32_t PROGMEM unicode_map[] = {
    [THUMBS]  = 0x1F44D,  // 👍
    [SNEK]  = 0x1F40D, // 🐍
};


float song[][2] = SONG(MARIO_MUSHROOM);

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
[_BASE] = LAYOUT_preonic_2x2u( \
  KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_BSPC, \
  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSLS, \
  POK,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_ENT, \
  KC_LSPO,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, \
  KC_LCTL,  EXTR,    EXTR,    KC_LALT,          PROG,    KC_SPC,           KC_LGUI, JOE,    KC_PSCR, KC_LCTL
),


[_POKER] = LAYOUT_preonic_2x2u( \
  _______, _______, _______, _______, _______,  _______,   _______,   _______,   _______,   UFOLD,     FOLD,      KC_DEL, \
  KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, KC_F5,    N_TAB,     KC_PAUSE,  T_PREV,    KC_UP,     T_NEXT,    KC_ENT,    W_QUIT, \
  _______, KC_LCTL, KC_VOLD, KC_VOLU, KC_MUTE,  KC_F,      KC_HOME,   KC_LEFT,   KC_DOWN,   KC_RGHT,   KC_BSPC,   KC_DEL, \
  _______, _______, _______, COPY,    PASTE,    _______,   KC_END,    _______,   TER_L,     TER_R,     ALL,       C_HOME, \
  _______, _______, _______, _______,           _______,   KC_SPC,               _______,   _______,   _______,   _______
),

[_PROGRAM] = LAYOUT_preonic_2x2u( \
  KC_F12,    KC_F1,   KC_F2,   KC_F3,              KC_F4,             KC_F5,    KC_F6,     KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11, \
  SWITCH,    KC_GRV,  KC_DLR,  KC_TILD,            KC_ASTERISK,       _______,  YANK,      WORD,     KC_LBRC,  KC_RBRC, _______,  _______, \
  _______,   KC_PLUS, KC_UNDS, KC_MINS,            KC_EQL,            OSDOWN,   OSUP,      KC_DQUO,  KC_LCBR,  KC_RCBR, KC_QUOT,  _______, \
  KC_LSFT,   _______, _______, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP,  _______,  _______,   KC_WH_D,  KC_WH_U,  _______, _______,  _______, \
  _______,   _______, _______, _______,                               _______,  _______,             _______,  _______, _______,  _______
),

[_EXTRA] = LAYOUT_preonic_2x2u( \
  _______,   RESET,     EEP_RST,   _______,   _______,   _______,   _______,   KC_MINS, KC_EQL,  _______, _______, _______, \
  _______,   _______,   _______,   _______,   _______,   _______,   _______,   KC_7,    KC_8,    KC_9,    _______, _______, \
  _______,   _______,   MU_TOG,    _______,   _______,   _______,   HEADP,     KC_4,    KC_5,    KC_6,    KC_DEL,  _______, \
  _______,   _______,   _______,   _______,   _______,   _______,   SONG,      KC_1,    KC_2,    KC_3,    _______, _______, \
  _______,   _______,   _______,   _______,              _______,   _______,            KC_0,    KC_0,    KC_0,    _______
)

};

void TAP(uint16_t keycode) {
    PRESS(keycode);
    RELEASE(keycode);
}

void CTRL(uint16_t keycode) {
  PRESS(KC_LCTRL);
    TAP(keycode);
  RELEASE(KC_LCTRL);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case HEADP:
      if (record->event.pressed) {
        SEND_STRING("connect CC:98:8B:D1:B2:95");
      }

      break;

    case C_HOME:
      if (record->event.pressed) {
        SEND_STRING("~/");
      }

      break;

    case YANK:
      if (record->event.pressed) {
        // Go to end
        TAP(KC_END);

        // Select to home
        PRESS(KC_LSHIFT);
	        TAP(KC_HOME);
	    RELEASE(KC_LSHIFT);

        // Remove
        TAP(KC_BSPACE);
      }

      break;

    case WORD:
      if (record->event.pressed) {
        // Go to the right
        CTRL(KC_RIGHT);

        // Hold shift
        PRESS(KC_LSHIFT);
          // Go left
          CTRL(KC_LEFT);
        RELEASE(KC_LSHIFT);
      }

      break;

    case SONG:
      if (record->event.pressed) {
        PLAY_SONG(song);
      }

      break;

  }
  return true;
};

void matrix_init_user(void) {
    set_unicode_input_mode(UC_LNX);

    //
    // This is operating system specific.
    //
    //   UC_OSX: MacOS Unicode Hex Input support. Works only up to 0xFFFF.
    //   Disabled by default.      To enable: go to System Preferences ->
    //   Keyboard -> Input Sources, and enable Unicode Hex.
    //
    //   UC_OSX_RALT: Same as UC_OSX, but sends the Right Alt key for unicode
    //   input
    //
    //   UC_LNX: Unicode input method under Linux. Works up to 0xFFFFF.
    //   Should work almost anywhere on ibus enabled distros. Without ibus,
    //   this works under GTK apps, but rarely anywhere else.
};
