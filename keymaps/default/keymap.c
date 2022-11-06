#include QMK_KEYBOARD_H

enum layer_names {
    _ONE = 0,
    _TWO,
    _THREE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ONE] =  LAYOUT (
        KC_F1,   KC_F2,  KC_ESCAPE, KC_1,     KC_2,    KC_3,    KC_4,  KC_5,  KC_6,   KC_7,   KC_8,   KC_9,   KC_0,      KC_MINUS,            KC_EQUAL,   KC_BSLASH,   KC_GRAVE, \
        KC_F3,   KC_F4,  KC_NO,     KC_TAB,    KC_Q,     KC_W,    KC_E,  KC_R,  KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,      KC_P,                KC_LBRACKET,KC_RBRACKET, KC_BSPC,  \
        KC_F5,   KC_F6,  KC_LCTL,   KC_A,    KC_S,    KC_D,  KC_F,  KC_G,   KC_H,   KC_J,   KC_K,   KC_L,      KC_SCOLON,           KC_QUOTE,   KC_NO,       KC_ENTER, \
        KC_F7,   KC_F8,  KC_NO,     KC_LSFT,   KC_Z,    KC_X,  KC_C,  KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,   KC_DOT,              KC_SLSH,    KC_RSFT,     MO(1),    \
        KC_F9,   KC_F10, KC_NO,     KC_LCTL,  KC_LGUI, KC_LALT, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_SPC, KC_NO,  KC_NO,     KC_NO,               KC_RALT,    KC_RGUI,     KC_RCTL   \
    ),

    [_TWO] =  LAYOUT (
	    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO  \
    ),

    [_THREE] =  LAYOUT (
	    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO  \
    )
};
