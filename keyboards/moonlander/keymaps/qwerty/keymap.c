/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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
#include "version.h"

enum layers {
    BASE,  // default layer
    SYMB,  // symbols
    EXTD,  // extend
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_moonlander(
        XXXXXXX,    KC_1,    KC_2,    KC_3,          KC_4,    KC_5,    XXXXXXX,           XXXXXXX,    KC_6,    KC_7,     KC_8,          KC_9,    KC_0,    XXXXXXX,
        XXXXXXX,    KC_Q,    KC_W,    KC_E,          KC_R,    KC_T,    XXXXXXX,           XXXXXXX,    KC_Y,    KC_U,     KC_I,          KC_O,    KC_P,    XXXXXXX,
        KC_ESC,     KC_A,    KC_S,    KC_D,          KC_F,    KC_G,    XXXXXXX,           XXXXXXX,    KC_H,    KC_J,     KC_K,          KC_L,    KC_SCLN, XXXXXXX,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,          KC_V,    KC_B,                                   KC_N,    KC_M,     KC_COMM,       KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LGUI,    KC_LCTL, KC_LALT, LSFT(KC_LCTL), MO(SYMB),         XXXXXXX,           XXXXXXX,             MO(SYMB), RSFT(KC_RCTL), KC_LALT, KC_RCTL, KC_RGUI,
                                                       KC_SPC, KC_TAB, XXXXXXX,           XXXXXXX, KC_ENT, KC_BSPC
    ),

    [SYMB] = LAYOUT_moonlander(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_EXLM, KC_DQUO, KC_AT,   KC_DLR,  KC_PERC, XXXXXXX,           XXXXXXX, KC_CIRC, KC_AMPR, KC_ASTR, KC_TILD, KC_GRV,  XXXXXXX,
        XXXXXXX, XXXXXXX, KC_QUOT, KC_LPRN, KC_RPRN, KC_PIPE, XXXXXXX,           XXXXXXX, KC_MINS, KC_LBRC, KC_RBRC, KC_HASH, KC_UNDS, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_BSLS, KC_LCBR, KC_RCBR, XXXXXXX,                             XXXXXXX, KC_EQL,  KC_PLUS, KC_COLN, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,           XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                            XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
