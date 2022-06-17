//#include QMK_KEYBOARD_H

#include "keymap_extras/keymap_hungarian.h"
#include "keyboards/ferris/sweep/sweep.h"

enum ferris_layers {
	_HU_BASE,
	_US_BASE,
	_MOUSE,
	_NAV,
	_HU_RSYM,
	_HU_LSYM,
	_US_RSYM,
	_US_LSYM,
	_FUN,
	_US_NUM,
	_HU_NUM,
	_US_ALWAYS,
	_HU_ALWAYS,
	_HU_ACCENT
};	

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_HU_BASE] = LAYOUT_split_3x5_2(
		HU_Q,         HU_W,              HU_F,            HU_P,              HU_B,
		HU_J,         HU_L,              HU_U,            HU_Y,              HU_SCLN,

		LSFT_T(HU_A), LT(_FUN,HU_R),     LT(_MOUSE,HU_S), LT(_HU_RSYM,HU_T), HU_G,
		HU_M,         LT(_HU_LSYM,HU_N), LT(_NAV,HU_E),   LT(_HU_NUM,HU_I),  LSFT_T(HU_O),
		
		HU_Z,         LCTL_T(HU_X),      LALT_T(HU_C),    HU_D,              HU_V,
		HU_K,         HU_H,              LALT_T(HU_COMM), LCTL_T(HU_DOT),    HU_SLSH,

		    MO(_HU_ACCENT), KC_BSPC,     LT(_HU_ALWAYS,KC_SPC), MO(_HU_ACCENT)
	),
	[_US_BASE] = LAYOUT_split_3x5_2(
		KC_Q,         KC_W,              KC_F,            KC_P,              KC_B,
		KC_J,         KC_L,              KC_U,            KC_Y,              KC_SCLN,
		
		LSFT_T(KC_A), LT(_FUN,KC_R),     LT(_MOUSE,KC_S), LT(_US_RSYM,KC_T), KC_G,
		KC_M,         LT(_US_LSYM,KC_N), LT(_NAV,KC_E),   LT(_US_NUM,KC_I),  LSFT_T(KC_O),
		
		KC_Z,         LCTL_T(KC_X),      LALT_T(KC_C),    KC_D,              KC_V,
		KC_K,         KC_H,              LALT_T(KC_COMM), LCTL_T(KC_DOT),    KC_SLSH,

		    KC_P0, KC_BSPC,              LT(_US_ALWAYS,KC_SPC), KC_P1
	),
	[_MOUSE] = LAYOUT_split_3x5_2(
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,         KC_TRNS,
		KC_TRNS,      KC_BTN1,      KC_WH_U,         KC_BTN2,         KC_TRNS,
		
		KC_TRNS,      KC_BTN2,      KC_NO,           KC_BTN1,         KC_TRNS,
		KC_TRNS,      KC_MS_L,      KC_MS_D,         KC_MS_U,         KC_MS_R,
		
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,         KC_TRNS,
		KC_TRNS,      KC_WH_L,      KC_WH_D,         KC_WH_R,         KC_TRNS,
		
		    KC_TRNS,  KC_TRNS,      KC_TRNS, KC_TRNS),
			  
	[_NAV] = LAYOUT_split_3x5_2(
		KC_TRNS,      KC_TRNS,      KC_PGUP,         KC_TRNS,        KC_TRNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,

		KC_LEFT,      KC_UP,        KC_DOWN,         KC_RGHT,        KC_TRNS,
		KC_TRNS,      KC_LGUI,      KC_NO,           LCTL(KC_LALT),  LCA(KC_LSFT),
		
		KC_TRNS,      KC_HOME,      KC_PGDN,         KC_END,         KC_TRNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		    KC_TRNS,  KC_TRNS,      KC_TRNS, KC_TRNS
	),
	[_US_RSYM] = LAYOUT_split_3x5_2(
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		KC_TRNS,      KC_UNDS,      KC_PIPE,         KC_QUOT,        KC_TRNS,
		
		KC_CIRC,      KC_ASTR,      KC_AMPR,         KC_NO,          KC_TRNS,
		KC_HASH,      KC_TILD,      KC_SLSH,         KC_DQUO,        KC_DLR,
		
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		KC_TRNS,      KC_MINS,      KC_BSLS,         KC_GRV,         KC_TRNS,
		    RGB_RMOD, KC_TRNS,      KC_TRNS, RGB_MOD
	),
	[_US_LSYM] = LAYOUT_split_3x5_2(
		KC_TRNS,      KC_COLN,      KC_LT,           KC_GT,          KC_SCLN,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		KC_LCBR,      KC_RCBR,      KC_LPRN,         KC_RPRN,        KC_AT,
		KC_TRNS,      KC_NO,        KC_EQL,          KC_PLUS,        KC_PERC,
		
		KC_TRNS,      KC_EXLM,      KC_LBRC,         KC_RBRC,        KC_TRNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		    KC_VOLD,  KC_TRNS,      KC_TRNS,         KC_VOLU
    ),
	[_FUN] = LAYOUT_split_3x5_2(
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		KC_TRNS,      KC_F7,        KC_F8,           KC_F9,          KC_F10,
		
		KC_TRNS,      KC_NO,        LCTL(KC_LALT),   KC_TRNS,        KC_TRNS,
		KC_TRNS,      KC_F4,        KC_F5,           KC_F6,          KC_F11,

		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		KC_TRNS,      KC_F1,        KC_F2,           KC_F3,          KC_F12,
		
		    KC_TRNS,  KC_TRNS,      KC_TRNS,         KC_TRNS
	),
	[_US_NUM] = LAYOUT_split_3x5_2(
		KC_PSLS,      KC_7,         KC_8,            KC_9,           KC_PPLS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		KC_0,         KC_1,         KC_2,            KC_3,           KC_PMNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_NO,          KC_TRNS,
		
		KC_PAST,      KC_4,         KC_5,            KC_6,           KC_PEQL,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		    KC_TRNS,  KC_TRNS,      KC_TRNS,         KC_TRNS
	),
	[_HU_NUM] = LAYOUT_split_3x5_2(
		KC_PSLS,      HU_7,         HU_8,            HU_9,           KC_PPLS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		HU_0,         HU_1,         HU_2,            HU_3,           KC_PMNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_NO,          KC_TRNS,
		
		KC_PAST,      HU_4,         HU_5,            HU_6,           KC_PEQL,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		    KC_TRNS,  KC_TRNS,      KC_TRNS,         KC_TRNS
	),
	[_US_ALWAYS] = LAYOUT_split_3x5_2(
		KC_TRNS,        KC_TRNS,        KC_COLN,         KC_ESC,         KC_TRNS,
		DF(_HU_ALWAYS), DF(_US_ALWAYS), KC_TRNS,         KC_TRNS,        KC_DEL,
		
		KC_TRNS,      KC_PERC,      KC_SLSH,         KC_ENT,         KC_TRNS,
		KC_TRNS,      KC_LGUI,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_EXLM,        KC_TRNS,
		KC_TRNS,      KC_TRNS,      RALT_T(KC_COMM), RCTL_T(KC_DOT), QK_BOOT,
		
		    KC_TRNS,  KC_TAB,       KC_NO,           KC_TRNS
	),
	[_HU_ALWAYS] = LAYOUT_split_3x5_2(
		KC_TRNS,        KC_TRNS,        HU_COLN,         KC_ESC,         KC_TRNS,
		DF(_HU_ALWAYS), DF(_US_ALWAYS), KC_TRNS,         KC_TRNS,        KC_DEL,

		KC_TRNS,      HU_PERC,      HU_SLSH,         KC_ENT,         KC_TRNS,
		KC_TRNS,        KC_LGUI,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		KC_TRNS,      KC_TRNS,      KC_TRNS,         HU_EXLM,        KC_TRNS,
		KC_TRNS,      KC_TRNS,      HU_COMM,         HU_DOT,         QK_BOOT,
		
		    KC_TRNS,  KC_TAB,       KC_NO,           KC_TRNS
	),
	[_HU_RSYM] = LAYOUT_split_3x5_2(
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		KC_TRNS,      HU_UNDS,      HU_PIPE,         HU_QUOT,        KC_TRNS,
		
		HU_CIRC,      HU_ASTR,      HU_AMPR,         KC_NO,          KC_TRNS,
		HU_HASH,      HU_TILD,      HU_SLSH,         HU_DQUO,        HU_DLR,
		
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		KC_TRNS,      HU_MINS,      HU_BSLS,         HU_GRV,         KC_TRNS,
		
		    RGB_RMOD, KC_TRNS,      KC_TRNS, RGB_MOD
	),
	[_HU_LSYM] = LAYOUT_split_3x5_2(
		KC_TRNS,      HU_COLN,      HU_LABK,         HU_RABK,        HU_SCLN,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,
		
		HU_LCBR,      HU_RCBR,      HU_LPRN,         HU_RPRN,        HU_AT,
		KC_TRNS,      KC_NO,        HU_EQL,          HU_PLUS,        HU_PERC,
		
		KC_TRNS,      HU_EXLM,      HU_LBRC,         HU_RBRC,        KC_TRNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS,        KC_TRNS,

    		KC_VOLD,      KC_TRNS,      KC_TRNS,         KC_VOLU
	),
	[_HU_ACCENT] = LAYOUT_split_3x5_2(
		DYN_MACRO_PLAY1, DYN_MACRO_PLAY2, DYN_REC_STOP, DYN_REC_START1, DYN_REC_START2,
		KC_TRNS,         KC_TRNS,         HU_UACU,      HU_UDIA,        HU_UDAC,
		
		LSFT_T(HU_AACU), KC_TRNS,         KC_TRNS,      KC_TRNS,        KC_TRNS,
		KC_TRNS,         KC_TRNS,         HU_EACU,      HU_IACU,        LSFT_T(HU_OACU),
		
		KC_TRNS,         KC_TRNS,         KC_TRNS,      KC_TRNS,        KC_TRNS,
		KC_TRNS,         KC_TRNS,         KC_TRNS,      HU_ODIA,        HU_ODAC,

    		KC_TRNS,      KC_TRNS,      KC_TRNS,         KC_TRNS
	)

};
