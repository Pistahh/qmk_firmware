// #include QMK_KEYBOARD_H

#include "keymap_extras/keymap_hungarian.h"
#include "keyboards/ferris/sweep/sweep.h"

enum ferris_layers { LBASE, LNAV, LMOUSE, LFUN, LNUM, LSYM, LACCL, LACCU };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LBASE] = LAYOUT_split_3x5_2(
        HU_Q,         HU_W,         HU_F,         HU_P, HU_B, HU_J, HU_L, HU_U,         HU_Y,         HU_SCLN,
        LSFT_T(HU_A), LCTL_T(HU_R), LALT_T(HU_S), HU_T, HU_G, HU_M, HU_N, LALT_T(HU_E), LCTL_T(HU_I), LSFT_T(HU_O),
        HU_Z,         HU_X,         HU_C,         HU_D, HU_V, HU_K, HU_H, HU_COMM,      HU_DOT,       HU_SLSH,

            LT(LSYM, KC_BSPC), LT(LNAV, KC_SPC),       LT(LNUM, KC_ENT), LT(LFUN, KC_TAB)
    ),

    [LNAV] = LAYOUT_split_3x5_2(
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_HOME,                KC_UP,   KC_END,   KC_TRNS,
         KC_LSFT, KC_LCTL, KC_LALT, KC_TRNS, KC_TRNS, KC_PGDN, KC_LEFT,                KC_DOWN, KC_RIGHT, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ESC,  KC_TRNS, LSFT_T(LALT_T(KC_ESC)), KC_TRNS, KC_TRNS,  KC_TRNS,

            KC_TRNS,  KC_TRNS,      TO(LMOUSE), KC_TRNS
    ),

    [LMOUSE] = LAYOUT_split_3x5_2(
        QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLEP, KC_WH_U, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS,
        KC_LSFT, KC_LCTL, KC_LALT, KC_TRNS, KC_TRNS, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_TRNS,

            KC_TRNS,  KC_TRNS,      KC_TRNS, KC_TRNS
    ),

    [LFUN] = LAYOUT_split_3x5_2(
        KC_F15, KC_F7, KC_F8, KC_F9, KC_F12, KC_CAPS, KC_WWW_BACK, KC_WWW_FORWARD, KC_PRINT_SCREEN, KC_TRNS,
        KC_F14, KC_F4, KC_F5, KC_F6, KC_F11, KC_MUTE, KC_VOLD,     KC_VOLU,        KC_TRNS,         KC_TRNS,
        KC_F13, KC_F1, KC_F2, KC_F3, KC_F10, KC_MPLY, KC_MPRV,     KC_MNXT,        KC_TRNS,         KC_TRNS,

            KC_TRNS,  KC_TRNS,      KC_TRNS,         KC_TRNS
    ),
    [LNUM] = LAYOUT_split_3x5_2(
        HU_SLSH, HU_7,      HU_8,   HU_9,    HU_ASTR,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
        HU_0,    HU_4,      HU_5,   HU_6,    HU_PLUS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
        HU_EQL,  HU_1,      HU_2,   HU_3,    HU_MINS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,

            TO(LACCU),  TO(LACCL),      KC_TRNS,         KC_TRNS
    ),

    [LSYM] = LAYOUT_split_3x5_2(
        KC_TRNS, HU_LBRC, HU_RBRC, KC_TRNS, KC_TRNS, HU_AT, HU_DQUO, HU_CIRC, HU_DLR, KC_TRNS,
        KC_TRNS, HU_LPRN, HU_RPRN, HU_LABK, HU_RABK, HU_PERC, HU_QUOT, HU_AT, HU_PIPE, HU_TILD,
        KC_TRNS, HU_LCBR, HU_RCBR, KC_TRNS, KC_TRNS, HU_EXLM, HU_GRV, HU_HASH, HU_BSLS, KC_TRNS,

            KC_TRNS,  KC_TRNS,      KC_TRNS,         KC_TRNS
    ),

    [LACCL] = LAYOUT_split_3x5_2(
        DYN_MACRO_PLAY1, DYN_MACRO_PLAY2, DYN_REC_STOP, DYN_REC_START1, DYN_REC_START2, KC_TRNS, HU_UDIA, HU_UACU, HU_UDAC, KC_TRNS,
        LSFT_T(HU_AACU), KC_TRNS,         KC_TRNS,      KC_TRNS,        KC_TRNS,        KC_TRNS, KC_TRNS, HU_EACU, HU_IACU, LSFT_T(HU_OACU),
        KC_TRNS,         KC_TRNS,         KC_TRNS,      KC_TRNS,        KC_TRNS,        KC_TRNS, HU_ODIA, HU_OACU, HU_ODAC, KC_TRNS,

            KC_TRNS,  KC_TRNS,      KC_TRNS,         KC_TRNS
    ),

    [LACCU] = LAYOUT_split_3x5_2(
        KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(HU_UDIA), LSFT(HU_UACU), LSFT(HU_UDAC), KC_TRNS,
        LSFT_T(LSFT(HU_AACU)), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       LSFT(HU_EACU), LSFT(HU_IACU), LSFT_T(LSFT(HU_OACU)),
        KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(HU_ODIA), LSFT(HU_OACU), LSFT(HU_ODAC), KC_TRNS,

            KC_TRNS,  KC_TRNS,      KC_TRNS,         KC_TRNS
    )

};
