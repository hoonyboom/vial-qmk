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

#define ____ KC_NO
// defining layer_names
#define _BASE 0
#define _LS 1
#define _RS 2
#define _FN 3

// defining user keycodes
enum blender_keycode {
    LM_1 = QK_KB_0,
    LM_2,
    LM_3,
    JS_LOG,
    JS_ARROW,
    CAPS_WORD
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case LM_1:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          layer_on(1);
        }
      } else {
        layer_off(1);
      }
      return false;
    case LM_2:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          layer_on(2);
        }
      } else {
        layer_off(2);
      }
      return false;
    case LM_3:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
          layer_on(3);
        }
      } else {
        layer_off(3);
      }
      return false;
    case JS_LOG:
      if (record->event.pressed) {
        SEND_STRING("console.log()");
        tap_code(KC_LEFT);
      }
      return false;
    case JS_ARROW:
      if (record->event.pressed) {
        SEND_STRING("() => {}");
        tap_code(KC_LEFT); tap_code(KC_LEFT); tap_code(KC_LEFT); // Position cursor
      }
    return false;
    case CAPS_WORD:
      if (record->event.pressed) {
        caps_word_toggle();
      }
      return false;
    default:
      return true;
	}
};

// --- /
// -- / definition of  encoder map
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
    [1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_BASE] = LAYOUT(
        ____,    	____,    	____,    	____,    	____,  		____,   ____,      	____,    	____,    	____,    	____,    	____,
        ____,    	____,    	____,    	____,    	____,  		____,   ____,       ____,    	____,    	____,    	____,
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,
        ____,    	____,    	____,       ____,      	____,    	____,   ____,    	____,       ____
    ),
    [_LS] = LAYOUT(
        ____,    	____,    	____,    	____,    	____,  		____,   ____,      	____,    	____,    	____,    	____,    	____,
        ____,    	____,    	____,    	____,    	____,  		____,   ____,       ____,    	____,    	____,    	____,
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,
        ____,    	____,    	____,       ____,      	____,    	____,   ____,    	____,       ____
    ),
    [_RS] = LAYOUT(
        ____,    	____,    	____,    	____,    	____,  		____,   ____,      	____,    	____,    	____,    	____,    	____,
        ____,    	____,    	____,    	____,    	____,  		____,   ____,       ____,    	____,    	____,    	____,
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,
        ____,    	____,    	____,       ____,      	____,    	____,   ____,    	____,       ____
    ),
    [_FN] = LAYOUT(
        ____,    	____,    	____,    	____,    	____,  		____,   ____,      	____,    	____,    	____,    	____,    	____,
        ____,    	____,    	____,    	____,    	____,  		____,   ____,       ____,    	____,    	____,    	____,
        ____,    	____,    	____,    	____,    	____,  		____,   ____,    	____,    	____,    	____,    	____,
        ____,    	____,    	____,       ____,      	____,    	____,   ____,    	____,       ____
    )
};
