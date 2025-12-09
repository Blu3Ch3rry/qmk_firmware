// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

// https://docs.qmk.fm/reference_keymap_extras OMG WTF THEY HAVE A WAY TO TRANSFER LANGUAGES T-T
// a nice tutorial for this: https://imgur.com/a/xnTKcDdo

#include QMK_KEYBOARD_H

// COMBO'S
const uint16_t PROGMEM z[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM semi_colon[] = {MO(1), KC_G, COMBO_END};
const uint16_t PROGMEM colon[] = {MO(1), KC_V, COMBO_END};
const uint16_t PROGMEM apostrophe[] = {MO(1), KC_Q, COMBO_END};
const uint16_t PROGMEM backslash[] = {MO(2), KC_SCLN, COMBO_END};
const uint16_t PROGMEM pipe[] = {MO(2), KC_K, COMBO_END};
const uint16_t PROGMEM quotation_mark[] = {MO(2), KC_O, COMBO_END};
const uint16_t PROGMEM ctrl_bspc[] = {LCTL_T(KC_SPC), LSFT_T(KC_BSPC), COMBO_END};
const uint16_t PROGMEM esc[] = {MO(1), KC_TAB, COMBO_END};
const uint16_t PROGMEM sleep[] = {MO(2), KC_ENT, COMBO_END};
const uint16_t PROGMEM dollar[] = {MO(1), KC_C, COMBO_END};
const uint16_t PROGMEM euro[] = {MO(1), KC_X, COMBO_END};
const uint16_t PROGMEM question_mark[] = {MO(2), KC_M, COMBO_END};
const uint16_t PROGMEM exclamation_mark[] = {MO(2), LSFT(KC_COMMA), COMBO_END};
const uint16_t PROGMEM ctrl_tab[] = {LCTL_T(KC_SPC), KC_TAB, COMBO_END};
const uint16_t PROGMEM alt_tab[] = {KC_LALT, KC_TAB, COMBO_END};

combo_t key_combos[] = {
    COMBO(z, KC_W),
    COMBO(semi_colon, KC_COMMA),
    COMBO(colon, KC_DOT),
    COMBO(apostrophe, KC_4),
    COMBO(backslash, RALT(KC_NONUS_BACKSLASH)),
    COMBO(pipe, RALT(KC_1)),
    COMBO(quotation_mark, KC_3),
    COMBO(ctrl_bspc, LCTL(KC_BSPC)),
    COMBO(esc, KC_ESC),
    COMBO(sleep, KC_SLEP),
    COMBO(dollar, KC_RBRC),
    COMBO(euro, RALT(KC_E)),
    COMBO(question_mark, LSFT(KC_M)),
    COMBO(exclamation_mark, KC_8),
    COMBO(ctrl_tab, LCTL(KC_TAB)),
    COMBO(alt_tab, LALT(KC_TAB)),
};

const key_override_t shift_comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_M, KC_NONUS_BACKSLASH);
const key_override_t shift_dot_override = ko_make_basic(MOD_MASK_SHIFT, LSFT(KC_COMMA), LSFT(LSFT(KC_NONUS_BACKSLASH)));

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&shift_comma_override,
    &shift_dot_override
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
        KC_DEL,    KC_A,    KC_Z,   KC_F,   KC_P,   KC_B,           KC_J,    KC_L,   KC_U,    KC_Y,           KC_W,    KC_BSPC,
        KC_TAB,    KC_Q,    KC_R,   KC_S,   KC_T,   KC_G,           KC_SCLN, KC_N,   KC_E,    KC_I,           KC_O,    KC_ENT,
        KC_LGUI,   QK_REP,   KC_X,   KC_C,   KC_D,   KC_V,           KC_K,    KC_H,   KC_M,    LSFT(KC_COMMA), QK_REP,   KC_LSFT,
                          KC_LALT, LCTL_T(KC_SPC), MO(1),           MO(2), LSFT_T(KC_BSPC), MO(3)
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,    KC_BRID,     KC_PGUP,  KC_BRIU,  KC_CALC,           KC_KP_PLUS,     LSFT(KC_7),   LSFT(KC_8),   LSFT(KC_9),   LSFT(KC_RBRC), KC_NO,
        KC_ESC,  KC_4,     KC_HOME,     KC_PGDN,  KC_END,   KC_COMMA,          KC_KP_MINUS,    LSFT(KC_4),   LSFT(KC_5),   LSFT(KC_6),   KC_SLASH,      LSFT(KC_QUOTE),
        KC_NO,   KC_NO,    RALT(KC_E),  KC_RBRC,  KC_NO,    KC_DOT,            LSFT(KC_DOT),   LSFT(KC_1),   LSFT(KC_2),   LSFT(KC_3),   KC_NO,         KC_NO,
                                               KC_NO, KC_NO, KC_NO,            LSFT(KC_0), KC_BSPC, KC_NO
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_NO,          RALT(KC_3),          RALT(KC_9),    KC_1,           RALT(KC_0),    RALT(KC_SLSH),          KC_MUTE,                  KC_VOLD,  KC_UP,      KC_VOLU,  KC_NO,  KC_NO,
        RALT(KC_QUOTE), RALT(KC_NONUS_HASH), KC_5,          LSFT(KC_EQUAL), KC_MINUS,      KC_LBRC,               RALT(KC_NONUS_BACKSLASH), KC_LEFT,  KC_DOWN,    KC_RIGHT, KC_3,   KC_SLEP,
        KC_NO,          KC_NO,               RALT(KC_LBRC), RALT(KC_2),     RALT(KC_RBRC), LSFT(KC_LBRC),         RALT(KC_1),               KC_NO,    LSFT(KC_M), KC_8,     KC_NO,  KC_NO,
                                                                                    KC_NO, KC_SPC, KC_NO,         KC_NO, KC_NO, KC_NO
    ),
    [3] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,        KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO,
        KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,        KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO,
        KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,        KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO,
                       KC_NO,  KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO
    )
};
