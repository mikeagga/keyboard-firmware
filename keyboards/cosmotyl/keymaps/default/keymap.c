#include QMK_KEYBOARD_H 

enum layer_names {
    _BASE,
    _SYM,
    _FN,
		_NAV,
		_NUM
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        MO(_FN), KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MNXT,       KC_VOLU, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    MO(_FN),
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MPRV,       KC_VOLD, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_SPACE,
        KC_ESC,  KC_A,    MT(MOD_LALT, KC_S),    MT(MOD_LCTL, KC_D),    MT(MOD_LGUI, KC_F),    KC_G,    KC_MPLY,       KC_MUTE, KC_H,    MT(MOD_RGUI, KC_J),    MT(MOD_RCTL, KC_K),    MT(MOD_RALT, KC_L),    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    				 KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LALT, KC_LCTL, KC_LGUI,                                            																		KC_RGUI, KC_RCTL, KC_RALT,

        MO(_NUM), MO(_NAV), KC_SPACE,                         CW_TOGG,   KC_TAB,  MO(_NAV),
        KC_DEL, KC_BSPC, MO(_SYM),                            MO(_SYM), KC_SPC, KC_ENT 
    ),
	
		 			 					         						  	

    [_SYM] = LAYOUT(
        KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,        KC_TRNS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
        KC_TRNS, KC_GRV,  KC_TILD, KC_HASH, KC_AMPR, KC_PIPE, KC_TRNS,        KC_TRNS, KC_CIRC, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_TRNS,
        KC_TRNS, KC_EXLM, KC_UNDS, KC_COLN, KC_EQL,  KC_DLR,  KC_TRNS,        KC_TRNS, KC_AT,   KC_LPRN, KC_RPRN, KC_UNDS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_PERC, KC_TRNS, KC_ASTR, KC_PLUS, KC_BSLS,                 				 KC_SLSH, KC_MINS, KC_LABK, KC_RABK, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                                            																		KC_TRNS, KC_TRNS, KC_TRNS,

        KC_TRNS, KC_TRNS, KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [_FN] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, _______,        						_______, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F13,
        _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                 _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                                            _______, _______, _______,

        _______, _______, _______,                             _______, _______, _______,
        _______, _______, _______,                             _______, _______, _______
    ),

		[_NAV] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, MS_UP, _______, _______, _______, _______,        	_______, _______, MS_ACL0, MS_ACL1, MS_ACL2, _______, _______,
        _______, MS_LEFT, MS_DOWN, MS_RGHT, _______, _______, _______,       _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                 					_______, MS_BTN1, MS_BTN2, _______, _______, _______,
        _______, _______, _______,                                           			 																 _______, _______, _______,

        _______, _______, _______,                             _______, _______, _______,
        _______, _______, _______,                             _______, _______, _______
    ),

		[_NUM] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,        _______, _______, KC_P7  , KC_P8  , KC_P9  , _______, _______,
        _______, _______, _______, _______, _______, _______, _______,        _______, _______, KC_P4  , KC_P5  , KC_P6  , _______, _______,
        _______, _______, _______, _______, _______, _______,                 				 KC_P0  , KC_P1  , KC_P2  , KC_P3  , _______, _______,
        _______, _______, _______,                                            																	  _______, _______, _______,

        _______, _______, _______,                             _______, _______, _______,
        _______, _______, _______,                             _______, _______, _______
    )
};


void keyboard_post_init_user(void) {
    debug_enable=true;
    debug_matrix=true;
}
