// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x3(
        LCTL(KC_LEFT),    LCTL(KC_UP),    LCTL(KC_RIGHT),
        LCMD(LSFT(KC_L)),    LCTL(LOPT(KC_LEFT)),    LCTL(LOPT(KC_RIGHT))
    )
};
