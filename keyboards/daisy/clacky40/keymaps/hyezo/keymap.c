/*
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
#include "hyezo.h"

// defining layer_names
#define _BASE 0
#define _LS 1
#define _RS 2
#define _FN 3

// defining blank
#define ____ KC_NO
#define __ KC_TRNS
#define CT(TAB) LCTL_T(KC_TAB) 
#define LT1(LEADER) LT(1, QK_LEAD)
#define LT2(KOREAN) LT(2, KC_PENT)
#define LT3(BSLASH) LT(3, KC_BSLS)

// defining layer_keys
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_BASE] = LAYOUT(
        TD_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
        CT(TAB),  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,    KC_ENT,
        KC_LSFT,      KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
        ____, KC_LOPT, KC_LGUI, LT1(LEADER), ____, TD_SPACE, LT2(KOREAN), LT3(BSLASH), ____
    ),
    [_LS] = LAYOUT(
        __, KC_1, KC_2, KC_3, __, __, __, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, __,
        __,  KC_4, KC_5, KC_6, ARROW, __, __, KC_GRV, KC_SCLN, KC_QUOT, 	__, 
        __,   KC_7, KC_8,	KC_9, KC_0, __, __, __, __, __, __,
        __, __, __, __, __, __, __, __, __
    ),
    [_RS] = LAYOUT(
        __, KC_F1, KC_F2, KC_F3, KC_F10, KC_F11, KC_F12, __, LGUI(KC_I), __, __, __,
        __,  KC_F4, KC_F5, KC_F6, KC_F13, KC_F14, __, __, LGUI(KC_K), __, 	__,
        __,   KC_F7, KC_F8,	KC_F9, __, __, __, __, __, __, 	__,
        __, __, __, __, __, __, __, __, __
    ),
    [_FN] = LAYOUT(
        __, LCAG(KC_Q), LCAG(KC_W), LCAG(KC_E), LCAG(KC_R), LCAG(KC_T), LCAG(KC_Y), LCAG(KC_T), KC_BRIU, KC_MUTE, KC_VOLD, KC_VOLU,
        __, LCAG(KC_A), LCAG(KC_S),	LCAG(KC_D), LCAG(KC_F), LCAG(KC_G), LCAG(KC_H), KC_MRWD, KC_BRID, KC_MFFD, 	KC_PWR,
        __, LCAG(KC_Z), LCAG(KC_X),	LCAG(KC_C), LCAG(KC_V), LCAG(KC_B), LCAG(KC_N), LCAG(KC_M), LCAG(KC_COMM), LCAG(KC_DOT), LCAG(KC_BSLS),
        __, LCAG(KC_LBRC), LCAG(KC_RBRC), LCAG(KC_SPC), __, LCAG(KC_MINS), LCAG(KC_EQL), __, __
    )
};
