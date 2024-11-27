#pragma once
// most settings moved to info.json

/* --- additional settings --- */
#define DEBUG_MATRIX_SCAN_RATE
#define LAYER_STATE_16BIT
// reducing chattering, set to 0 if not necessary
#define DEBOUNCE 5


//#define QMK_WAITING_TEST_BUSY_PIN GP8
//#define QMK_WAITING_TEST_YIELD_PIN GP9

/* --- RP2040 specific settings */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
