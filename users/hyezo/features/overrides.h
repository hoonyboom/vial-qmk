#pragma once

#include QMK_KEYBOARD_H
#include "process_key_override.h"

enum {
    OVR_0,
    OVR_1,
    OVR_2,
    OVR_3,
    OVR_4,
    OVR_5,
    OVR_6,
    OVR_7,
    OVR_8,
    OVR_9,
    OVR_10,
    OVR_11,
    OVR_12,
    OVR_13,
    OVR_14,
    OVR_15,
    OVR_16,
    OVR_17,
    OVR_18,
    OVR_19,
    OVR_20,
    OVR_21,
    OVR_22,
    OVR_23,
    OVR_24,
    KEY_OVERRIDE_COUNT,
};

extern const key_override_t *key_overrides[KEY_OVERRIDE_COUNT];
