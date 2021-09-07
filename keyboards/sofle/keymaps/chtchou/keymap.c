#include QMK_KEYBOARD_H

/*ALIASES*/
// Thumbs home row mods
// Left Thumb
#define LSFT_SPC LSFT_T(KC_SPC)
#define SYM_I    LT(_SYMBOL, KC_I)
#define EDT_BSPC LT(_EDIT, KC_BSPC)
#define LCTR_ESC LCTL_T(KC_ESC)

// Right Thumb
#define SYM_SPC  LT(_SYMBOL, KC_SPC)
#define NUM_ENT  LT(_NUM, KC_ENT)
#define RCTR_TAB RCTL_T(KC_TAB)

// Left Home Mods
#define LSFT_A   LSFT_T(KC_A)
#define LGUI_Z   LGUI_T(KC_Z)
#define LALT_H   LALT_T(KC_H)
#define LCTR_E   LCTL_T(KC_E)
#define RALT_SCL RALT_T(KC_SCLN)

// Right Home Mods
#define LSFT_S   LSFT_T(KC_S)
#define RCTR_T   RCTL_T(KC_T)
#define LALT_R   LALT_T(KC_R)
#define RGUI_P   RGUI_T(KC_P)
#define RALT_B   RALT_T(KC_B)

// Other
#define LALT_F4  LALT(KC_F4)
#define CTAL_DEL LALT(LCTL(KC_DEL))
#defube LCTR_A   LCTL(KC_A)

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _BEAKLC,
    _EDIT,
    _NUM,
    _SYMBOL,
};

enum custom_keycodes {
    KC_QWERT = SAFE_RANGE,
    KC_BEAKL,
    KC_LOWER,
    KC_RAISE,
    KC_ADJUST,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* QWERTY
 * ,-----------------------------------------------.                          ,-----------------------------------------------.
 * | ~  `  |   1  !|   2  @|   3  #|   4  $|   5  %|                          |   6  ^|   7  &|   8  *|   9  (|   0  )|   -  _|
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |  ESC  |   Q   |   W   |   E   |   R   |   T   |                          |   Y   |   U   |   I   |   O   |   P   |  Bspc |
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |  Tab  |   A   |   S   |   D   |   F   |   G   |--------.        ,--------|   H   |   J   |   K   |   L   |   ;  :|   '  "|
 * |-------+-------+-------+-------+-------+-------|  MUTE  |        | BEAKLC |-------+-------+-------+-------+-------+-------|
 * | LShift|   Z   |   X   |   C   |   V   |   B   |--------|        |--------|   N   |   M   |   ,  <|   .  >|   /  ?| RShift|
 * `-----------------------------------------------/       /          \       \-----------------------------------------------'
 *             |  LGUI |  LAlt |  ESC  | Space |  / Bspc  /            \ Enter \  | Space |  Tab  |  RAlt |  RGUI |
 *             |       |       | LCtrl | LShift| / EDIT  /              \ NUM   \ | Rshift|  RCTR |       |       |
 *             `-------------------------------''-------'                '------''--------------------------------'
 */
    
[_QWERTY] = LAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,     KC_BEAKL,KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
               KC_LGUI, KC_LALT, LCTR_ESC,LSFT_SPC,LOW_BSPC,            RAI_ENT, RSFT_SPC,RCTR_TAB,KC_RALT, KC_RGUI \
),
    
/* BEAKLC
 * ,-----------------------------------------------.                          ,-----------------------------------------------.
 * |~  `   |   1  !|   2  @|   3  #|   4  $|   5  %|                          |   6  ^|   7  &|   8  *|   9  (|   0  )|   =  +|
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |   (   |   Q   |   Y   |   O   |   U   |   X   |                          |   G   |   C   |   M   |   N   |   '  "|   )   |
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |{  [   |G  Z   |A  H   |C  E   |S  A   |   ,  <|--------.        ,--------|   D   |S  S   |C  T   |A  R   |G  P   |   ]  }|
 * |-------+-------+-------+-------+-------+-------|  MUTE  |        | QWERTY |-------+-------+-------+-------+-------+-------|
 * ||  \   |   J   |Ag ;  :|   -  _|   K   |   .  >|--------|        |--------|   W   |   F   |   L   |Ag B   |   V   |   /  ?|
 * `-----------------------------------------------/       /          \       \-----------------------------------------------'
 *             |  LGUI |  LAlt |  ESC  |    I  |  / Bspc  /            \ Enter \  | Space |  Tab  |  RAlt | RShift|
 *             |       |       | LCtrl | SYMBOL| / EDIT  /              \  NUM  \ | SYMBOL| RCtrl |       |  CAPS |
 *             `-------------------------------''-------'                '------''--------------------------------'
 */    

[_BEAKLC] = LAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQUAL, \
  KC_LPRN, KC_Q,    KC_Y,    KC_O,    KC_U,    KC_X,                          KC_G,    KC_C,    KC_M,    KC_N,    KC_QUOT, KC_RPRN,  \
  KC_LBRC, LGUI_Z,  LALT_H,  LCTR_E,  LSFT_A,  KC_COMM,                       KC_D,    LSFT_S,  RCTR_T,  LALT_R,  RGUI_P,  KC_RBRC,  \
  KC_BSLS, KC_J,    RALT_SCL,KC_MINS, KC_K,    KC_DOT,  KC_MUTE,     KC_QWERT,KC_W,    KC_F,    KC_L,    RALT_B,  KC_V,    KC_SLSH,  \
               KC_LGUI, KC_LALT, LCTR_ESC,SYM_I,   EDT_BSPC,             NUM_ENT, SYM_SPC, RCTR_TAB,KC_RALT, KC_RSFT \
),

/* EDIT
 * ,-----------------------------------------------.                          ,-----------------------------------------------.
 * | POWER |   1  !|   2  @|   3  #|   4  $|   5  %|                          |   6  ^|   7  &|   8  *|   9  (|   0  )|   =  +|
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |   (   |  Ins  |  Pscr |  Menu | Alt+F4| CA_Del|                          |  PgUp |  PWrd |   Up  |  NWrd |  DLine|   )   |
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |{  [   |  LGUI |  LAlt |  LCtl | LShift|  Find |--------.        ,--------| PgDown|  Left |  Down |  Right|  Del  |   ]  }|
 * |-------+-------+-------+-------+-------+-------|  MUTE  |        | QWERTY |-------+-------+-------+-------+-------+-------|
 * |   \   |  Undo |  Cut  |  Copy | Paste |  Bspc |--------|        |--------|       | LStart|       | LEnd  | Bspc  |   /  ?|
 * `-----------------------------------------------/       /          \       \-----------------------------------------------'
 *             |  LGUI |  LAlt |  ESC  |    I  |  / EDIT  /            \ Enter \  | Space |  Tab  |  RAlt | RShift|
 *             |       |       | LCtrl | SYMBOL| /       /              \  NUM  \ | SYMBOL| RCtrl |       |       |
 *             `-------------------------------''-------'                '------''--------------------------------'
 */  

[_EDIT] = LAYOUT( \
  KC_POWER,_______, _______, _______, _______, _______,                       _______,  _______, _______, _______, _______, _______, \
  _______, KC_INS,  KC_PSCR, KC_APP,  LALT_F4, CTAL_DEL,                      KC_PGUP,  KC_PRVWD,KC_UP,   KC_NXTWD,KC_DLINE,_______, \
  _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_FIND,                       KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  _______, \
  _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PASTE,KC_BSPC, _______,     _______, XXXXXXX,  KC_LSTRT,XXXXXXX, KC_LEND, KC_BSPC, _______, \
               _______, _______, _______, _______, _______,              _______, _______, _______, _______, _______ \
),
    
/* NUM
 * ,-----------------------------------------------.                          ,-----------------------------------------------.
 * |  F12  |   F1  |   F2  |   F3  |   F4  |   F5  |                          |   F6  |   F7  |   F8  |   F9  |  F10  |  F11  |
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |   (   | DLine |  PWrd |   Up  |  Nwrd |  PgUp |                          |   ;   |   7   |   8   |   9   |   *   |   )   |
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |   [   |  Del  |  Left |  Down | Right | PgDown|--------.         ,-------|   ,   |   4   |   5   |   6   |   -   |   ]   |
 * |-------+-------+-------+-------+-------+-------|  MUTE  |        | QWERTY |-------+-------+-------+-------+-------+-------|
 * |   \   |       | LStr  |       | LEnd  |   .   |--------|        |--------|   .   |   1   |   2   |   3   |   +   |   /   |
 * `-----------------------------------------------/       /          \       \-----------------------------------------------'
 *             |  LGUI |  LAlt |  ESC  |    I  |  / Bspc  /            \  NUM  \  | Space |  Tab  |   0   | Enter |
 *             |       |       | LCtrl | SYMBOL| /  EDIT /              \       \ | SYMBOL| RCtrl |       |       |
 *             `-------------------------------''-------'                '------''--------------------------------'
 */  

[_NUM] = LAYOUT( \
  KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  \
  _______, KC_DLINE,KC_PRVWD,KC_UP,   KC_NXTWD,KC_PGUP,                       KC_SCLN, KC_7,    KC_8,    KC_9,    KC_PAST, _______, \
  _______, KC_DEL,  KC_AT,   KC_HASH, KC_DLR,  KC_PGDN,                       KC_COMM, KC_4,    KC_5,    KC_6,    KC_PMNS, _______, \
  _______, XXXXXXX, KC_LSTRT,XXXXXXX, KC_LEND, KC_DOT,  _______,     _______, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_PPLS, _______, \
               _______, _______, _______, _______, _______,              _______, _______, _______, KC_0,   KC_PENT \
),

/* SYMBOL
 * ,-----------------------------------------------.                          ,-----------------------------------------------.
 * |~  `   |   1   |   2   |   3   |   4   |   5   |                          |   6   |   7   |   8   |   9   |   0   |   =   |
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |   (   |   ¥   |   #   |   '   |   @   |   ^   |                          |   ~   |   %   |   "   |   !   |   *   |   )   |
 * |-------+-------+-------+-------+-------+-------|                          |-------+-------+-------+-------+-------+-------|
 * |   [   |   $   |   <   |   _   |   >   |   ,   |--------.         ,-------|   &   |   {   |   =   |   }   |   -   |   ]   |
 * |-------+-------+-------+-------+-------+-------|  MUTE  |        | QWERTY |-------+-------+-------+-------+-------+-------|
 * |   \   |   €   |       |   -   |   *   |   .   |--------|        |--------|   |   |   :   |   +   |   ?   |   +   |   /   |
 * `-----------------------------------------------/       /          \       \-----------------------------------------------'
 *             |  LGUI |  LAlt |  ESC  | SYMBOL|  / Bspc  /            \ Enter \  | SYMBOL|  Tab  |  RAlt | RShift|
 *             |       |       | LCtrl |       | /  EDIT /              \  NUM  \ |       | RCtrl |       |       |
 *             `-------------------------------''-------'                '------''--------------------------------'
 */
    
  [_SYMBOL] = LAYOUT( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQUAL,\
  _______, XXXXXXX, KC_HASH, KC_HASH, KC_AT,   KC_CIRC,                       KC_TILD, KC_PERC, KC_DQUO, KC_EXLM, _______, _______, \
  _______, KC_DLR,  KC_LT,   KC_UNDS, KC_GT,   KC_COMM,                       KC_AMPR, KC_LCBR, KC_EQUAL,KC_RCBR, _______, _______, \
  _______, XXXXXXX, XXXXXXX, KC_MINS, KC_ASTR, KC_DOT,  _______,     _______, KC_PIPE, KC_COLN, KC_PLUS, KC_QUES, _______, _______, \
               _______, _______, _______, _______, _______,              _______, _______, _______, _______, _______ \
  )
};

#ifdef OLED_DRIVER_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }

    switch (get_highest_layer(default_layer_state)) {
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _BEAKLC:
            oled_write_ln_P(PSTR("Beakl"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _BEAKLC:
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _EDIT:
            oled_write_P(PSTR("Edit"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("Num"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Symbol"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERT:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_BEAKL:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_BEAKLC);
            }
            return false;
        case KC_LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJUST:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDOWN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif
