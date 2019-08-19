#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Symbols enabled
  [0] = LAYOUT(
    KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_VOLD,  KC_VOLU,  KC_DEL,
    KC_GRV,   KC_1,  KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_DEL,   KC_BSPC,  KC_HOME,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGUP,
    KC_ESC,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                      KC_ENT,   KC_PGDN,
    KC_LSFT,  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    KC_END,
    KC_LCTL,  KC_LALT,  KC_LGUI,  KC_SPC,   KC_RGUI,   KC_RGUI,                       LT(1, KC_MPLY), MT(MOD_RALT, KC_MPRV),  MT(MOD_RCTL, KC_MNXT),  KC_LEFT,  KC_DOWN,  KC_RGHT
  ),

  // Symbols disabled
  /* [0] = LAYOUT( */
  /*   KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_VOLD,  KC_VOLU,  KC_DEL, */
  /*   KC_MUTE,   KC_1,  KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,  _______,   _______,   KC_BSPC,  KC_HOME, */
  /*   KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_MPRV,  KC_MNXT,  KC_MPLY,            KC_PGUP, */
  /*   KC_ESC,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,                      KC_ENT,   KC_PGDN, */
  /*   KC_LSFT,  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    KC_END, */
  /*   KC_LCTL,  KC_LALT,  KC_LGUI,  KC_SPC,   MO(2),   KC_RGUI,                       MO(1), KC_RALT,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT */
  /* ), */

  [1] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RESET,    _______,
    _______,  RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  _______,  _______,  _______,  _______,  _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
    _______,  _______,  _______,  _______,  BL_DEC,   BL_TOGG,  BL_INC,   BL_STEP,  _______,  _______,  _______,  _______,  KC_MUTE,            _______,  _______,
    _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  KC_MPRV,  KC_MNXT,  KC_MPLY,  _______,  _______
  ),

  // Symbols normal
  [2] = LAYOUT(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   _______,  _______,  KC_LBRC,  KC_RBRC,  KC_UNDS,  KC_PLUS,  _______,  _______,  _______,            _______,
    _______,  KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  _______,  KC_DQUO,  KC_LPRN,  KC_RPRN,  KC_MINS,  KC_EQL,   _______,                      _______,  _______,
    _______,  _______,  _______,  _______,  KC_GRV,   KC_TILD,  _______,  _______,  KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_BSLS,  _______,  _______,            _______,
    _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______
  ),

  // Symbols mirrored
  /* [2] = LAYOUT( */
  /*   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, */
  /*   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, */
  /*   _______,  KC_PLUS,  KC_UNDS,  KC_LBRC, KC_RBRC,  _______,  _______,  KC_DLR,   KC_HASH,  KC_AT,    KC_EXLM,  _______,  _______,  _______,            _______, */
  /*   _______,  KC_EQL,   KC_MINS,  KC_LPRN,  KC_RPRN,  _______,  _______,  KC_ASTR,  KC_AMPR,  KC_CIRC,  KC_PERC,  _______,                      _______,  _______, */
  /*   _______,  _______,  KC_BSLS,  KC_PIPE,  KC_LCBR,  KC_RCBR,  _______,  KC_TILD, KC_GRV,   KC_LABK,  KC_RABK,  _______,  _______,            _______,   _______, */
  /*   _______,  _______,  _______,                      _______,  _______,  _______,                      _______,  _______,  _______,  _______,  _______,  _______ */
  /* ), */
};

/* void keyboard_post_init_user(void) { */
/*   // Customise these values to desired behaviour */
/*   debug_enable=true; */
/*   debug_matrix=true; */
/*   //debug_keyboard=true; */
/*   //debug_mouse=true; */
/* } */

// Disable certain key symbols to help me remember to use the symbol layer
/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
/*   return true; */
/* } */

    /* case KC_1 ... KC_0:  */
    /* #<{(| case KC_QUOT:  |)}># */
    /* #<{(| case KC_SCLN: |)}># */
    /*  */
    /*   { */
    /*   bool lshift = get_mods() & (MOD_BIT(KC_LSHIFT)); */
    /*   bool rshift = get_mods() & (MOD_BIT(KC_RSHIFT)); */
    /*  */
    /*   if (lshift) unregister_code(KC_LSHIFT); */
    /*   if (rshift) unregister_code(KC_RSHIFT); */
    /*  */
    /*   if (record->event.pressed) { */
    /*     register_code(keycode); */
    /*   } else { */
    /*     unregister_code(keycode); */
    /*   } */
    /*  */
    /*   if (lshift) register_code(KC_LSHIFT); */
    /*   if (rshift) register_code(KC_RSHIFT); */
    /*  */
    /*   return false; */
    /* } */
/*   } */
/*  */
/*   return true; */
/* } */


// vim:nowrap
