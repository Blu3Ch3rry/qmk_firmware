// by Alana AKA Blu3Ch3rry
#include QMK_KEYBOARD_H
#include "keymap_belgian.h" // find this map in quantum/keymap_extras/keymap_belgian.h or use the sister-file copy and get the keycodes from there

// this function needs to exist if COMBO_ENABLE = yes in rules.mk
combo_t key_combos[] = {
};

// this function needs to exist if KEY_OVERRIDE_ENABLE = yes in rules.mk
const key_override_t *key_overrides[] = {
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Del│ Q │ W │ F │ P │ B │       │ J │ L │ U │ Y │ Z │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Tab│ A │ R │ S │ T │ G │       │ M │ N │ E │ I │ O │Ent│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Win│   │ X │ C │ D │ V │       │ K │ H │ , │ . │   │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │Alt├───┐           ┌───┤Fn │
      *               └───┤Spc├───┐   ┌───┤Bsp├───┘
      *                   └───┤M1 │   │M2 ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_DEL,   BE_Q,     BE_W,     BE_F,     BE_P,     BE_B,            BE_J,     BE_L,     BE_U,     BE_Y,     BE_Z,     KC_BSPC,
        KC_TAB,   BE_A,     BE_R,     BE_S,     BE_T,     BE_G,            BE_M,     BE_N,     BE_E,     BE_I,     BE_O,     KC_ENT,
        KC_LGUI,  KC_NO,    BE_X,     BE_C,     BE_D,     BE_V,            BE_K,     BE_H,     BE_COMM,  BE_DOT,   KC_NO,    KC_LSFT,
                                KC_LALT, LCTL_T(KC_SPC), MO(1),            MO(2), LSFT_T(KC_BSPC), MO(3)
    ),
         /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │   │Brt│PgU│Brt│Cal│       │ + │ 7 │ 8 │ 9 │ * │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Esc│ ' │Hom│PgD│End│ ; │       │ - │ 4 │ 5 │ 6 │ = │ % │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │ € │ $ │ £ │ : │       │ / │ 1 │ 2 │ 3 │   │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤   ├───┐   ┌───┤Bsp├───┘
      *                   └───│││││   │ 0 ├───┘
      *                       └───┘   └───┘
      */
    [1] = LAYOUT_split_3x6_3(
        KC_NO,    KC_NO,    KC_BRID,  KC_PGUP,  KC_BRIU,  KC_CALC,         BE_PLUS,  BE_7,     BE_8,     BE_9,     BE_ASTR,  KC_NO,
        KC_ESC,   BE_QUOT,  KC_HOME,  KC_PGDN,  KC_END,   BE_SCLN,         BE_MINS,  BE_4,     BE_5,     BE_6,     BE_EQL,   BE_PERC,
        KC_NO,    KC_NO,    BE_EURO,  BE_DLR,   BE_PND,   BE_COLN,         BE_SLSH,  BE_1,     BE_2,     BE_3,     KC_NO,    KC_NO,
                                              KC_NO, KC_NO, KC_NO,         BE_0, KC_BSPC, KC_NO
    ),
         /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │ # │ { │ & │ } │ ~ │       │Mut│Vol│Up │Vol│   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ ´ │ ` │ ( │ _ │ ) │ ^ │       │ \ │Lft│Dwn│Rgt│ " │Slp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │ [ │ @ │ ] │ ¨ │       │ | │   │ ? │ ! │   │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤   │
      *               └───┤Spc├───┐   ┌───┤   ├───┘
      *                   └───┤   │   ││││├───┘
      *                       └───┘   └───┘
      */
    [2] = LAYOUT_split_3x6_3(
        KC_NO,    BE_HASH,  BE_LCBR,  BE_AMPR,  BE_RCBR,  BE_TILD,         KC_MUTE,  KC_VOLD,  KC_UP,    KC_VOLU,  KC_NO,    KC_NO,
        BE_ACUT,  BE_GRV,   BE_LPRN,  BE_UNDS,  BE_RPRN,  BE_DCIR,         BE_BSLS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  BE_DQUO,  KC_SLEP,
        KC_NO,    KC_NO,    BE_LBRC,  BE_AT,    BE_RBRC,  BE_DIAE,         BE_PIPE,  KC_NO,    BE_QUES,  BE_EXLM,  KC_NO,    KC_NO,
                                            KC_NO, KC_SPC, KC_NO,          KC_NO, KC_NO, KC_NO
    ),
         /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │   │   │   │   │   │   │       │F12│F7 │F8 │F9 │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │F11│F4 │F5 │F6 │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │   │   │   │   │   │   │       │F10│F1 │F2 │F3 │   │   │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │   ├───┐           ┌───┤││││
      *               └───┤Spc├───┐   ┌───┤Bsp├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [3] = LAYOUT_split_3x6_3(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,           KC_F12,   KC_F7,    KC_F8,    KC_F9,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,           KC_F11,   KC_F4,    KC_F5,    KC_F6,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,           KC_F10,   KC_F1,    KC_F2,    KC_F3,    KC_NO,    KC_NO,
                                          KC_NO,  KC_SPC, KC_NO,           KC_NO, KC_BSPC, KC_NO
    )
};