#pragma once
#include QMK_KEYBOARD_H

enum tap_dance_keycodes {
    TD_ESC,
    TD_SPACE,
};

typedef enum {
    ST, // single tap
    SH, // single hold
    DT, // double tap
    DH, // double hold
    STT, // single tap twice (interrupted while double tapping)
    UNKNOWN,
    NONE,
} td_state_t;

typedef struct {
    bool       is_press_action;
    td_state_t state;
} td_tap_t;

td_state_t cur_dance(tap_dance_state_t *state);
void       x_finished(tap_dance_state_t *state, void *user_data);
void       x_reset(tap_dance_state_t *state, void *user_data);
