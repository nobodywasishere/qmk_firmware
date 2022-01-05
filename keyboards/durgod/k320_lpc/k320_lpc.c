// Copyright 2021 Vlad Conut (@putyn)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "k320_lpc.h"
#include <hal.h>

/* override led_init_ports as leds are not standard*/

void led_init_ports(void) {

    setPinOutput(LED_CAPS_LOCK_PIN);
    setPinOutput(LED_SCROLL_LOCK_PIN);
    setPinOutput(LED_WIN_LOCK_PIN);
    setPinOutput(LED_MR_LOCK_PIN);
    off_all_leds();
}

void off_all_leds(void) {

    writePinHigh(LED_CAPS_LOCK_PIN);
    writePinHigh(LED_SCROLL_LOCK_PIN);
    writePinHigh(LED_WIN_LOCK_PIN);
    writePinHigh(LED_MR_LOCK_PIN);
}

void on_all_leds(void) {

    writePinLow(LED_CAPS_LOCK_PIN);
    writePinLow(LED_SCROLL_LOCK_PIN);
    writePinLow(LED_WIN_LOCK_PIN);
    writePinLow(LED_MR_LOCK_PIN);
}

void keyboard_post_init_kb(void) {

    /* flash leds, like default firmware */
    on_all_leds();
    wait_ms(500);
    off_all_leds();
}

static bool win_key_locked = false;

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_TGUI:
            if (record->event.pressed) {
                /* Toggle GUI lock on key press */
                win_key_locked = !win_key_locked;
                writePin(LED_WIN_LOCK_PIN, !win_key_locked);
            }
            break;
        case KC_LGUI:
            if (win_key_locked) { return false; }
            break;
    }
    return process_record_user(keycode, record);
}
