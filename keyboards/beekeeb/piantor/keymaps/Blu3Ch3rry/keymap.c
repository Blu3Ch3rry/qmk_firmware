// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_belgian.h"

// COMBO'S
const uint16_t PROGMEM combo1[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo2[] = {MO(1), KC_G, COMBO_END};
const uint16_t PROGMEM combo3[] = {MO(1), KC_V, COMBO_END};
const uint16_t PROGMEM combo4[] = {MO(1), KC_A, COMBO_END};
const uint16_t PROGMEM combo5[] = {MO(2), KC_M, COMBO_END};
const uint16_t PROGMEM combo6[] = {MO(2), KC_K, COMBO_END};
const uint16_t PROGMEM combo7[] = {MO(2), KC_O, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo1, KC_Z),
    COMBO(combo2, KC_SCLN),
    COMBO(combo3, LSFT(KC_SCLN)),
    COMBO(combo4, KC_QUOT),
    COMBO(combo5, KC_BSLS),
    COMBO(combo6, KC_PIPE),
    COMBO(combo7, KC_DQUO),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Del│ Q │ W │ F │ P │ B │       │ J │ L │ U │ Y │ Z │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ R │ S │ T │ G │       │ M │ N │ E │ I │ O │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │GUI│   │ X │ C │ D │ V │       │ K │ H │ , │ . │   │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Alt├───┐           ┌───┤Fn │
      *               └───┤SPC├───┐   ┌───┤BSP├───┘
      *                   └───┤M1 │   │M2 ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_DEL,    KC_Q,    KC_W,   KC_F,   KC_P,   KC_B,           KC_J,    KC_L,    KC_U,    KC_Y,    KC_Z,    KC_BSPC,
        KC_TAB,    KC_A,    KC_R,   KC_S,   KC_T,   KC_G,           KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
        KC_LGUI,   KC_NO,   KC_X,   KC_C,   KC_D,   KC_V,           KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_NO,   KC_LSFT,
                          KC_LALT, LCTL_T(KC_SPC), MO(1),           MO(2), LSFT_T(KC_BSPC), MO(3)
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,    KC_BRID,  KC_PGUP,  KC_BRIU,  KC_CALC,             LSFT(KC_EQL), KC_7,   KC_8,   KC_9,   LSFT(KC_8), KC_NO,
        KC_ESC,  KC_QUOT,  KC_HOME,  KC_PGDN,  KC_END,   KC_SCLN,             KC_MINS,      KC_4,   KC_5,   KC_6,   KC_EQL,     LSFT(KC_5),
        KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_DLR,   LSFT(KC_SCLN),       KC_SLSH,      KC_1,   KC_2,   KC_3,   KC_NO,      KC_NO,
                                             KC_NO, KC_NO, KC_NO,             LCTL(KC_BSPC), KC_0, KC_NO
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NUHS, LSFT(KC_LBRC), KC_AMPR, LSFT(KC_RBRC), KC_TILD,         KC_MUTE,   KC_VOLD,   KC_UP,    KC_VOLU,  KC_NO,    KC_NO,
        KC_NO,   KC_GRV,  KC_LPRN,       KC_UNDS, KC_RPRN,       KC_CIRC,         KC_BSLS,   KC_LEFT,   KC_DOWN,  KC_RGHT,  KC_DQUO,  KC_NO,
        KC_LSFT, KC_X,    KC_LBRC,       KC_AT,   KC_RBRC,       KC_NO,           KC_PIPE,   KC_QUES,   KC_EXLM,  KC_NO,    KC_NO,    KC_NO,
                                           KC_NO, KC_NO, LCTL(KC_BSPC),           KC_NO, KC_NO, KC_NO
    ),
    [3] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,        KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO,
        KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,        KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO,
        KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,        KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO,
                       KC_NO,  KC_SPC, KC_NO,                KC_NO, KC_NO, KC_NO
    )
};
