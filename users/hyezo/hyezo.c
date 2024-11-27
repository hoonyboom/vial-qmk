#include "quantum.h"
#include "hyezo.h"

// Keymap-specific process_record_user()
__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// 유저 인터페이스
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keymap(keycode, record)) return false;

    switch (keycode) {
        case LT(1, QK_LEAD):
            if (record->tap.count && record->event.pressed) {
                leader_start();
                return false;
            }
            break;
        case ARROW:
            if (record->tap.count && record->event.pressed) {
                SEND_STRING("=> ");
                return false;
            }
            break;
    }

    return true;
}


//! 개별맞춤 탭 타임
// uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case RSG_T(KC_F18):
//             return 100;
//         default:
//             return TAPPING_TERM;
//     }
// }

// 리더키
void leader_end_user(void) {
    if (leader_sequence_one_key(KC_F)) {
        SEND_STRING("QMK is awesome.\n");
    } else if (leader_sequence_two_keys(KC_G, KC_H)) {
        tap_code16(LSA(KC_1));
    } else if (leader_sequence_two_keys(KC_G, KC_J)) {
        tap_code16(LSA(KC_2));
    } else if (leader_sequence_two_keys(KC_G, KC_K)) {
        tap_code16(LSA(KC_3));
    } else if (leader_sequence_two_keys(KC_G, KC_L)) {
        tap_code16(LSA(KC_4));
    } else if (leader_sequence_two_keys(KC_G, KC_O)) {
        tap_code16(LSA(KC_O));
    } else if (leader_sequence_two_keys(KC_G, KC_F)) {
        tap_code16(LSA(KC_F));
    } else if (leader_sequence_two_keys(KC_G, KC_I)) {
        tap_code16(LSA(KC_I));
    } else if (leader_sequence_two_keys(KC_G, KC_S)) {
        tap_code16(LSA(KC_5));
    } else if (leader_sequence_two_keys(KC_G, KC_X)) {
        tap_code16(LSA(KC_X));
    } else if (leader_sequence_two_keys(KC_G, KC_Y)) {
        tap_code16(LSA(KC_Y));
    } else if (leader_sequence_two_keys(KC_G, KC_B)) {
        tap_code16(LSA(KC_B));
    } else if (leader_sequence_two_keys(KC_G, KC_1)) {
        tap_code16(LSA(KC_7));
    } else if (leader_sequence_two_keys(KC_G, KC_2)) {
        tap_code16(LSA(KC_8));
    } else if (leader_sequence_two_keys(KC_G, KC_3)) {
        tap_code16(LSA(KC_9));
    } else if (leader_sequence_two_keys(KC_G, KC_4)) {
        tap_code16(LSA(KC_0));
    } else if (leader_sequence_two_keys(KC_G, KC_N)) {
        tap_code16(LSA(KC_N));
    } else if (leader_sequence_two_keys(KC_G, KC_P)) {
        tap_code16(LSA(KC_P));
    } else if (leader_sequence_two_keys(KC_G, KC_Q)) {
        tap_code16(LSA(KC_Q));
    } else if (leader_sequence_two_keys(KC_G, KC_W)) {
        tap_code16(LSA(KC_W));
    } else if (leader_sequence_two_keys(KC_G, KC_E)) {
        tap_code16(LSA(KC_E));
    } else if (leader_sequence_two_keys(KC_G, KC_R)) {
        tap_code16(LSA(KC_R));
    } else if (leader_sequence_two_keys(KC_A, KC_A)) {
        SEND_STRING("hoonyboom@gmail.com");
    } else if (leader_sequence_two_keys(KC_A, KC_S)) {
        SEND_STRING("01073510097");
    } else if (leader_sequence_two_keys(KC_A, KC_U)) {
        SEND_STRING("P911160088896");
    } else if (leader_sequence_two_keys(KC_A, KC_B)) {
        SEND_STRING("911029");
    }
}
