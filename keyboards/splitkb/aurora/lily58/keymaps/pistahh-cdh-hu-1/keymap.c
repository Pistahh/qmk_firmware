#include "gpio.h"
#include "keycodes.h"
#include "quantum_keycodes.h"
#include QMK_KEYBOARD_H
#include "keymap_extras/keymap_hungarian.h"

enum layer_number {
    _COLE,
    _LOWER,
    _RAISE,
    _ADJUST,
    _NAV,
    _ACC,
    _SYM,
    _EMPTY,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // clang-format off

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
/*
 [_QWERTZ] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Z,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Y,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, KC_ENT, MO(_RAISE), KC_BSPC, KC_RGUI
), */
 [_COLE] = LAYOUT(
  KC_ESC,   HU_1,         HU_2,         HU_3,         HU_4,     HU_5,                            HU_6,   HU_7,    HU_8, HU_9,         HU_0,        KC_GRV,
  KC_TAB,   HU_Q,         HU_W,         HU_F,         LT(_ACC,HU_P), HU_B,                       HU_J,   LT(_ACC,HU_L), HU_U,         HU_Y,         LT(_ADJUST, HU_SCLN),     KC_MINS,
  LSFT(KC_2),  LSFT_T(HU_A), LCTL_T(HU_R), LALT_T(HU_S), LT(_NAV,HU_T), HU_G,                       HU_M,   LT(_NAV, HU_N),          LALT_T(HU_E), LCTL_T(HU_I), LSFT_T(HU_O), KC_QUOT,
  KC_LSFT,  HU_Z,         HU_X,         HU_C,         LT(_SYM,HU_D), HU_V,    KC_LBRC,  KC_RBRC, HU_K,   LT(_SYM,HU_H), HU_COMM,      HU_DOT,       HU_SLSH,      KC_RSFT,
                          KC_LGUI,      KC_ESC,      KC_TAB,      KC_BSPC, KC_ENT,   KC_SPC,  KC_DEL, KC_ESC
),
[_NAV] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   KC_WWW_BACK, KC_WWW_FORWARD, _______,_______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   KC_PGUP,     KC_HOME,        KC_UP, KC_END, _______, _______,
  _______, _______, _______, _______, _______, _______,                   KC_PGDN,     KC_LEFT,        KC_DOWN, KC_RIGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______,     KC_ESC,  _______,_______, _______, _______,
                             _______, LSFT(KC_DEL),  LCTL(KC_INS), LSFT(KC_INS),  _______, _______, _______, _______
),

[_ACC] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, HU_UDIA, HU_UACU, HU_UDAC, _______, _______,
  _______, LSFT_T(HU_AACU), _______, _______, _______, _______,           _______, _______, HU_EACU, HU_IACU, LSFT_T(HU_OACU), _______,
  _______, _______, HU_UDIA, HU_UACU, HU_UDAC, _______, _______, _______, _______, HU_ODIA, HU_OACU,HU_ODAC, _______, _______,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),

[_SYM] = LAYOUT(
  KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,  KC_F9, KC_F10, KC_F11,
  _______, HU_EXLM, HU_LCBR, HU_RCBR, HU_PIPE, HU_ASTR,                   HU_PERC, HU_QUOT, HU_LPRN, HU_RPRN, HU_GRV,  _______,
  _______, HU_AT,   HU_AMPR, HU_BSLS, HU_SLSH, HU_EQL,                    HU_PLUS, HU_DQUO, HU_MINS, HU_QUES, HU_TILD, _______,
  _______, HU_CIRC, HU_LABK, HU_RABK, HU_COLN, HU_HASH, _______, _______, HU_GRV,  HU_DLR,  HU_LBRC, HU_RBRC, _______, _______,
                             _______, _______, _______, _______, _______, HU_UNDS, _______, _______
),

[_EMPTY] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______, _______, _______, _______,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   RGB_TOG, RGB_SAI, RGB_VAI, RGB_HUI, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_SAD, RGB_VAD, RGB_HUD, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

void keyboard_pre_init_user(void) {
  // Turn power LEDs off
  //
  // Set our LED pin as output
  setPinOutput(24);
  // Turn the LED off
  // (Due to technical reasons, high is off and low is on)
  writePinHigh(24);
}

// HU_0    0
// HU_1    1
// HU_2    2
// HU_3    3
// HU_4    4
// HU_5    5
// HU_6    6
// HU_7    7
// HU_8    8
// HU_9    9
// HU_ODIA Ö
// HU_UDIA Ü
// HU_OACU Ó
// HU_Q    Q
// HU_W    W
// HU_E    E
// HU_R    R
// HU_T    T
// HU_Z    Z
// HU_U    U
// HU_I    I
// HU_O    O
// HU_P    P
// HU_ODAC Ő
// HU_UACU Ú
// HU_A    A
// HU_S    S
// HU_D    D
// HU_F    F
// HU_G    G
// HU_H    H
// HU_J    J
// HU_K    K
// HU_L    L
// HU_EACU É
// HU_AACU Á
// HU_UDAC Ű
// HU_IACU Í
// HU_Y    Y
// HU_X    X
// HU_C    C
// HU_V    V
// HU_B    B
// HU_N    N
// HU_M    M
// HU_COMM ,
// HU_DOT  .
// HU_MINS -
// HU_SECT §
// HU_QUOT '
// HU_DQUO "
// HU_PLUS +
// HU_EXLM !
// HU_PERC %
// HU_SLSH /
// HU_EQL  =
// HU_LPRN (
// HU_RPRN )
// HU_QUES ?
// HU_COLN :
// HU_UNDS _
// HU_TILD ~
// HU_CARN ˇ (dead)
// HU_CIRC ^ (dead)
// HU_BREV ˘ (dead)
// HU_RNGA ° (dead)
// HU_OGON ˛ (dead)
// HU_GRV  `
// HU_DOTA ˙ (dead)
// HU_ACUT ´ (dead)
// HU_DACU ˝ (dead)
// HU_DIAE ¨ (dead)
// HU_CEDL ¸ (dead)
// HU_BSLS (backslash)
// HU_PIPE |
// HU_CADI Ä
// HU_EURO €
// HU_DIV  ÷
// HU_MUL  ×
// HU_LADI ä
// HU_LDST đ
// HU_CDST Đ
// HU_LBRC [
// HU_RBRC ]
// HU_LLST ł
// HU_CLST Ł
// HU_DLR  $
// HU_SS   ß
// HU_CURR ¤
// HU_LABK <
// HU_RABK >
// HU_HASH #
// HU_AMPR &
// HU_AT   @
// HU_LCBR {
// HU_RCBR }
// HU_SCLN ;
// HU_ASTR *
