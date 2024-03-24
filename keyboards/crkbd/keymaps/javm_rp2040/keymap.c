// Copyright 2022 Soundmonster (@soundmonster)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


#define COPY RCTL(KC_C) //custom keycode for C
#define PASTE RCTL(KC_V) //custom keycode for V
#define UNDO RCTL(KC_Z)
#define CUT RCTL(KC_X)
#define REDO RCTL(KC_Y)
#define SELA RCTL(KC_A)

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layers {
  _QWERTY,
  _NAVIGATE,
  _SYMBOLS,
  _CONTROL,
  _MOUSE,
  _RGBRST,
  _GAME
};

// Custom keycodes for layer keys
// Dual function escape with left command
#define KC_LGESC LGUI_T(KC_ESC)

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  NAVIGATE,
  SYMBOLS,
  CONTROL,
  MOUSE,
  RGBRST,
  GAME
};

#define HOME_A KC_A
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_G LGUI_T(KC_G)

// Right-hand home row mods
#define HOME_H RGUI_T(KC_H)
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN KC_SCLN

#define HOME_AMPR RSFT_T(KC_AMPR)
#define HOME_ASTR RCTL_T(KC_ASTR)
#define HOME_LPRN LALT_T(KC_LPRN)
#define HOME_RPRN KC_RPRN

#define HOME_EXLM LGUI_T(KC_EXLM)
#define HOME_AT LALT_T(KC_AT)
#define HOME_HASH LCTL_T(KC_HASH)
#define HOME_DLR LSFT_T(KC_DLR)

#define LSFT_ESC LSFT_T(KC_ESC)
#define LCTL_ESC LCTL_T(KC_ESC)

#if !defined(LEADER_ENABLE)
#    define QK_LEAD KC_LCTL
#endif

#define LSPO LCTL_T(KC_LBRC)
#define RSPC RCTL_T(KC_RBRC)

#define LCCO LSFT_T(KC_LCBR)
#define RCCC RSFT_T(KC_RCBR)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_split_3x6_3(
  //,---------------------------------------------------------.                 ,------------------------------------------------------------------------.
      KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,                                      KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS,
  //|--------+------------+-----------+-------------+--------|                  |--------+-----------+------------+-------------+---------------+--------|
      KC_TAB, HOME_A, HOME_S, HOME_D, HOME_F, HOME_G,                              HOME_H, HOME_J, HOME_K, HOME_L, HOME_SCLN, KC_BSPC,
  //|--------+------------+-----------+-------------+--------|                  |--------+-----------+------------+-------------+---------------+--------|
      RALT_T(KC_DQUO), KC_Z, KC_X, KC_C, KC_V, KC_B,                             KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RALT_T(KC_QUOT),
  //|--------+------------+-----------+--------i----+------+--------|  |--------+--------+-----------+------------+-------------+---------------+--------|
                             SC_LCPO,  KC_LSFT,LT(_NAVIGATE,KC_ENT),     LT(_SYMBOLS,KC_SPC),KC_LSFT, SC_RCPC
                             //`---------------------------'  `------------------------------------------'
),
  [_NAVIGATE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_DEL , UNDO, CUT , COPY, PASTE, KC_PGUP,                                KC_INS  , KC_DEL, KC_NO  , KC_NO,  KC_HOME,  KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, SELA,  KC_LALT, KC_LCTL,KC_LSFT, KC_RGUI ,                        KC_LEFT, KC_DOWN, KC_UP,KC_RIGHT, KC_END,  KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, UNDO, CUT, COPY, PASTE, REDO,                                    KC_END, KC_PGDN, KC_PGUP, KC_HOME, KC_NO, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,         MO(_CONTROL),KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

[_SYMBOLS] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_PLUS, KC_1,    KC_2,   KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_EQL, KC_EXLM, KC_AT,  KC_HASH, KC_DLR,  KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_DQUO, KC_GRV , KC_TILD,KC_QUOT, KC_LBRC, KC_LCBR,                       KC_RCBR, KC_RBRC, KC_COMM,KC_DOT, KC_SLSH, RSFT_T(KC_BSLS),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                         KC_TRNS,  KC_TRNS,MO(_CONTROL),     KC_TRNS, KC_TRNS, KC_COLON

                                      //`--------------------------'  `--------------------------'
    ),
 [_CONTROL] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                  KC_F6,KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
  //|--------+--------+-SC---- ---+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LALT, KC_F11, KC_LALT, KC_LSFT, KC_LCTL, KC_KB_MUTE,                           KC_KB_VOLUME_UP, KC_LCTL, KC_RSFT, KC_LALT, KC_F12, KC_LALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO,KC_NO, KC_NO, KC_NO,                                KC_KB_VOLUME_DOWN , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+-------+--------|
                                           TO(_RGBRST), KC_TRNS,  KC_TRNS,     KC_TRNS, KC_0 , KC_TRNS

                                      //`--------------------------'  `--------------------------'
  ),
  [_MOUSE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      TO(_GAME), KC_NO, KC_NO, KC_MS_BTN3, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_MS_UP, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_NO, KC_NO, KC_MS_BTN1, KC_NO, KC_NO,                          KC_NO, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_NO,KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO, KC_MS_BTN2, KC_NO, KC_NO,                            KC_NO, KC_NO,KC_NO , KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),
  [_RGBRST] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      TO(_GAME), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_MOD,                    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_RMOD,                    KC_NO, KC_NO,KC_NO , KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),
  [_GAME] = LAYOUT_split_3x6_3(
  //,---------------------------------------------------------------------.                    ,------------------------------------------------------------------------.
      TO(_QWERTY), KC_Q,   KC_W,        KC_E,       KC_R,   KC_T,                             KC_KB_VOLUME_UP, KC_NO, KC_UP, KC_NO, KC_NO,TO(0),
  //|--------+------------+-----------+-------------+------------+--------|                    |--------+-----------+------------+-------------+---------------+--------|
      KC_NO,       KC_A,   KC_S,        KC_D,       KC_F,   KC_G,                            KC_KB_VOLUME_DOWN, KC_LEFT, KC_DOWN,KC_RIGHT, KC_NO,KC_KB_MUTE,
  //|--------+------------+-----------+-------------+------------+--------|                    |--------+-----------+------------+-------------+---------------+--------|
      KC_NO,       KC_Z,   KC_X,       KC_C,   KC_V,   KC_B,                                 KC_NO, KC_NO,KC_NO , KC_NO, KC_NO, KC_NO,
  //|--------+------------+-----------+------------+-------------+--------+--------|  |--------+--------+-----------+------------+-------------+---------------+--------|
                                           KC_1,KC_2,KC_5,                KC_NO,   KC_NO,  KC_NO
                                      //`------------------------------------------'  `------------------------------------------'
  )
};


// Setting CONTROL layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_90;
    } else {
        return OLED_ROTATION_270;
    }
}

void render_space(void) {
    oled_write_P(PSTR("     "), false);
}

uint8_t active_layer(void) {
    if(layer_state_is(_RGBRST)) {
        return _RGBRST;
    }
    if(layer_state_is(_CONTROL)) {
            return _CONTROL;
    }
    if(layer_state_is(_MOUSE)) {
        return _MOUSE;
    }
    if(layer_state_is(_NAVIGATE)) {
        return _NAVIGATE;
    }
    if(layer_state_is(_SYMBOLS)) {
        return _SYMBOLS;
    }
    if(layer_state_is(_GAME)) {
        return _GAME;
    }
    return _QWERTY;

}


int RGB_current_mode;

#define COLOR_SYMBOLS   213, 255
#define COLOR_NAVIGATE  128, 255
#define COLOR_RGBRST    106, 255
#define COLOR_MOUSE     123,  90
#define COLOR_CONTROL   21, 255
#define COLOR_GAME      0, 255
#define COLOR_NUM       255, 64
#define COLOR_FUNCTION  255, 128

/*
bool  rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer=active_layer();
    RGB rgb = hsv_to_rgb((HSV) { 255,128,128});

    uint8_t v=rgb_matrix_get_hsv().v;
    if (layer==_GAME) {
        rgb = hsv_to_rgb((HSV) { COLOR_GAME,v});
        for (uint8_t i = led_min; i <= led_max; i++) {
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
        return false;
    }
    switch(layer) {
        case _SYMBOLS:
            rgb = hsv_to_rgb((HSV) { COLOR_SYMBOLS,v });
            break;
        case _NAVIGATE:
            rgb = hsv_to_rgb((HSV) { COLOR_NAVIGATE,v });
            break;
        case _MOUSE:
            rgb = hsv_to_rgb((HSV) {  COLOR_MOUSE,v  });
            break;
        case _RGBRST:
            return false;
        case _CONTROL:
            rgb = hsv_to_rgb((HSV) { COLOR_CONTROL,v});
            break;
        case _GAME:
            rgb = hsv_to_rgb((HSV) { COLOR_GAME,v});
            break;
        default:
             return false;
        }


    // rgb_matrix_layer_indicator(layer_state);
//     for (uint8_t i = led_min; i <= led_max; i++) {
//         if (HAS_FLAGS(g_led_config.flags[i], 0x01)) {
//             rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
//         }
//    }
//    for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
//             for (uint8_t col = 0; col < MATRIX_COLS; ++col) uint8_t index = g_led_config.matrix_co[row][col];

                // if (index >= led_min && index < led_max &&
                // keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                //     rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
                // }


        //     }
        // }
        for (uint8_t index = 1; index < 7; ++index) {
            rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);

        }
        for (uint8_t index = 28; index < 36; ++index) {
            rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);

        }
   return true;
}
*/

int caps_word=0;

void caps_word_set_user(bool active) {
    if (active) {
       caps_word=1;
    } else {
        caps_word=0;
    }
}


void render_mod_status_gui_alt(uint8_t modifiers) {
    static const char PROGMEM gui_off_1[] = {0x85, 0x86, 0};
    static const char PROGMEM gui_off_2[] = {0xa5, 0xa6, 0};
    static const char PROGMEM gui_on_1[] = {0x8d, 0x8e, 0};
    static const char PROGMEM gui_on_2[] = {0xad, 0xae, 0};

    static const char PROGMEM alt_off_1[] = {0x87, 0x88, 0};
    static const char PROGMEM alt_off_2[] = {0xa7, 0xa8, 0};
    static const char PROGMEM alt_on_1[] = {0x8f, 0x90, 0};
    static const char PROGMEM alt_on_2[] = {0xaf, 0xb0, 0};

    // fillers between the modifier icons bleed into the icon frames
    static const char PROGMEM off_off_1[] = {0xc5, 0};
    static const char PROGMEM off_off_2[] = {0xc6, 0};
    static const char PROGMEM on_off_1[] = {0xc7, 0};
    static const char PROGMEM on_off_2[] = {0xc8, 0};
    static const char PROGMEM off_on_1[] = {0xc9, 0};
    static const char PROGMEM off_on_2[] = {0xca, 0};
    static const char PROGMEM on_on_1[] = {0xcb, 0};
    static const char PROGMEM on_on_2[] = {0xcc, 0};

    if(modifiers & MOD_MASK_GUI) {
        oled_write_P(gui_on_1, false);
    } else {
        oled_write_P(gui_off_1, false);
    }

    if ((modifiers & MOD_MASK_GUI) && (modifiers & MOD_MASK_ALT)) {
        oled_write_P(on_on_1, false);
    } else if(modifiers & MOD_MASK_GUI) {
        oled_write_P(on_off_1, false);
    } else if(modifiers & MOD_MASK_ALT) {
        oled_write_P(off_on_1, false);
    } else {
        oled_write_P(off_off_1, false);
    }

    if(modifiers & MOD_MASK_ALT) {
        oled_write_P(alt_on_1, false);
    } else {
        oled_write_P(alt_off_1, false);
    }

    if(modifiers & MOD_MASK_GUI) {
        oled_write_P(gui_on_2, false);
    } else {
        oled_write_P(gui_off_2, false);
    }

    if (modifiers & MOD_MASK_GUI & MOD_MASK_ALT) {
        oled_write_P(on_on_2, false);
    } else if(modifiers & MOD_MASK_GUI) {
        oled_write_P(on_off_2, false);
    } else if(modifiers & MOD_MASK_ALT) {
        oled_write_P(off_on_2, false);
    } else {
        oled_write_P(off_off_2, false);
    }

    if(modifiers & MOD_MASK_ALT) {
        oled_write_P(alt_on_2, false);
    } else {
        oled_write_P(alt_off_2, false);
    }
}

void render_mod_status_ctrl_shift(uint8_t modifiers) {
    static const char PROGMEM ctrl_off_1[] = {0x89, 0x8a, 0};
    static const char PROGMEM ctrl_off_2[] = {0xa9, 0xaa, 0};
    static const char PROGMEM ctrl_on_1[] = {0x91, 0x92, 0};
    static const char PROGMEM ctrl_on_2[] = {0xb1, 0xb2, 0};

    static const char PROGMEM shift_off_1[] = {0x8b, 0x8c, 0};
    static const char PROGMEM shift_off_2[] = {0xab, 0xac, 0};
    static const char PROGMEM shift_on_1[] = {0xcd, 0xce, 0};
    static const char PROGMEM shift_on_2[] = {0xcf, 0xd0, 0};

    // fillers between the modifier icons bleed into the icon frames
    static const char PROGMEM off_off_1[] = {0xc5, 0};
    static const char PROGMEM off_off_2[] = {0xc6, 0};
    static const char PROGMEM on_off_1[] = {0xc7, 0};
    static const char PROGMEM on_off_2[] = {0xc8, 0};
    static const char PROGMEM off_on_1[] = {0xc9, 0};
    static const char PROGMEM off_on_2[] = {0xca, 0};
    static const char PROGMEM on_on_1[] = {0xcb, 0};
    static const char PROGMEM on_on_2[] = {0xcc, 0};

    if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(ctrl_on_1, false);
    } else {
        oled_write_P(ctrl_off_1, false);
    }

    if ((modifiers & MOD_MASK_CTRL) && (modifiers & MOD_MASK_SHIFT)) {
        oled_write_P(on_on_1, false);
    } else if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(on_off_1, false);
    } else if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(off_on_1, false);
    } else {
        oled_write_P(off_off_1, false);
    }

    if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(shift_on_1, false);
    } else {
        oled_write_P(shift_off_1, false);
    }

    if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(ctrl_on_2, false);
    } else {
        oled_write_P(ctrl_off_2, false);
    }

    if (modifiers & MOD_MASK_CTRL & MOD_MASK_SHIFT) {
        oled_write_P(on_on_2, false);
    } else if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(on_off_2, false);
    } else if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(off_on_2, false);
    } else {
        oled_write_P(off_off_2, false);
    }

    if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(shift_on_2, false);
    } else {
        oled_write_P(shift_off_2, false);
    }
}


void render_logo(void) {
    static const char PROGMEM corne_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0};
        oled_write_P(corne_logo, false);
        oled_write_P(PSTR("corne"), false);
}

void render_layer_state(void) {
    static const char PROGMEM default_layer[] = {
        0x20, 0x94, 0x95, 0x96, 0x20,
        0x20, 0xb4, 0xb5, 0xb6, 0x20,
        0x20, 0xd4, 0xd5, 0xd6, 0x20,
        0};
    static const char PROGMEM raise_layer[] = {
        0x20, 0x97, 0x98, 0x99, 0x20,
        0x20, 0xb7, 0xb8, 0xb9, 0x20,
        0x20, 0xd7, 0xd8, 0xd9, 0x20,
        0};
    static const char PROGMEM lower_layer[] = {
        0x20, 0x9a, 0x9b, 0x9c, 0x20,
        0x20, 0xba, 0xbb, 0xbc, 0x20,
        0x20, 0xda, 0xdb, 0xdc, 0x20,
        0};
    static const char PROGMEM control_layer[] = {
        0x20, 0x9d, 0x9e, 0x9f, 0x20,
        0x20, 0xbd, 0xbe, 0xbf, 0x20,
        0x20, 0xdd, 0xde, 0xdf, 0x20,
        0};
    static const char PROGMEM none_layer[] = {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0};
    switch(active_layer()) {
            case _SYMBOLS:
                oled_write_P(raise_layer, false);
                break;
            case _NAVIGATE:
                oled_write_P(lower_layer, false);
                break;
            case _RGBRST:
                oled_write_P(control_layer, false);
                break;
            case _CONTROL:
                oled_write_P(control_layer, false);
                break;
            case _GAME:
                oled_write_P(none_layer, false);
                break;
                 case _MOUSE:
                oled_write_P(none_layer, false);
                break;
            default:
                oled_write_P(default_layer, false);
                break;
        }

}

extern uint8_t is_master;
static uint16_t oled_timer = 0;

bool oled_task_user(void) {
    if (!is_keyboard_master()) {
        render_logo();
        render_layer_state();
        switch(active_layer()) {
            case _SYMBOLS:
                oled_write_ln_P(PSTR("[SYM]"), false);
                break;
            case _NAVIGATE:
                oled_write_ln_P(PSTR("[NAV]"), false);
                break;
            case _RGBRST:
                oled_write_ln_P(PSTR("[ADJ]"), false);
                break;
            case _CONTROL:
                oled_write_ln_P(PSTR("[CTL]"), false);
                break;
             case _GAME:
                oled_write_ln_P(PSTR("[GAM]"), false);
                break;
            default:
                oled_write_ln_P(PSTR("[QWE]"), false);
                break;
        }
        render_mod_status_gui_alt(get_mods()|get_oneshot_mods());
        render_mod_status_ctrl_shift(get_mods()|get_oneshot_mods());
        render_space();
        led_t led_usb_state = host_keyboard_led_state();
        if (caps_word) {
            oled_write_P(led_usb_state.caps_lock   ? PSTR("CPWRD") : PSTR("       "), false);
        } else {
            oled_write_P(led_usb_state.caps_lock   ? PSTR("CPLCK") : PSTR("       "), false);
        }
    }
        /*
    else {
         static const char PROGMEM cyber_logo[] = {
            0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0x80, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0,
0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0x60,
0x70, 0x30, 0x38, 0x18, 0x1c, 0x0c, 0x06, 0x06, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0xe0, 0xf0,
0x00, 0x80, 0xc0, 0xe0, 0xe0, 0x60, 0x20, 0xc0, 0xe0, 0xf0, 0x78, 0x7c, 0xef, 0xe7, 0xe1, 0xe0,
0xc0, 0xc0, 0xe0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0x20, 0x20, 0xa0, 0xe0, 0x70, 0x30, 0x30, 0x20,
0x20, 0xa0, 0xa0, 0xe0, 0xe0, 0xe0, 0xe0, 0x60, 0x40, 0x00, 0x00, 0x80, 0xe0, 0xe0, 0x60, 0x60,
0x60, 0x60, 0x20, 0x20, 0xa0, 0xf0, 0xf0, 0xf0, 0xf0, 0x70, 0x70, 0x00, 0x00, 0xc0, 0xe0, 0x28,
0x80, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0x20, 0x80, 0xe0, 0xf0, 0xb0, 0x80, 0xc0, 0xc0,
0x60, 0x60, 0x30, 0x30, 0x18, 0x08, 0x08, 0x04, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x04, 0x04, 0x0e, 0x0e, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f,
0x0f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x87, 0xe6, 0xf1, 0x3b,
0x1f, 0x0f, 0x27, 0x3b, 0x7c, 0x7e, 0x3f, 0x3b, 0x1d, 0x0c, 0x06, 0x07, 0x03, 0x01, 0x1d, 0x1f,
0x1f, 0x1b, 0x09, 0x09, 0x0d, 0x0d, 0x0d, 0xe1, 0xf8, 0x3e, 0x0f, 0x07, 0x07, 0x0f, 0x0f, 0x0f,
0x1f, 0x1d, 0x39, 0x39, 0x38, 0x30, 0x30, 0x98, 0xf8, 0xfc, 0x3e, 0x0f, 0x0f, 0x06, 0x06, 0x06,
0x02, 0x03, 0x03, 0x01, 0x21, 0x7d, 0x3f, 0x33, 0x18, 0x38, 0x7c, 0x3e, 0x0f, 0x33, 0x18, 0x1e,
0x07, 0x03, 0x1f, 0x3c, 0x1e, 0x0f, 0x03, 0x38, 0x3e, 0x0f, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0e,
0x1c, 0x18, 0x30, 0x60, 0x40, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x80, 0x20, 0x18, 0x0e, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x02, 0x04, 0x04, 0x08, 0x00, 0x00
        };
        // oled_set_cursor(0,0);
        oled_write_raw_P(cyber_logo, sizeof(cyber_logo));
    }
*/

    return false;
}

#endif
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  //static uint16_t my_colon_timer;
#ifdef OLED_ENABLE
 if (record->event.pressed) {
        oled_timer = timer_read();
    }
#endif
#ifdef CAPS_WORD_ENABLE
  if (!process_caps_word(keycode, record)) { return false; }
#endif
  switch (keycode) {
    case NAVIGATE:
      if (record->event.pressed) {
        layer_on(_NAVIGATE);
        update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _QWERTY);
      } else {
        layer_off(_NAVIGATE);
        update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _QWERTY);
      }
      return false;
    case SYMBOLS:
      if (record->event.pressed) {
        layer_on(_SYMBOLS);
        update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _QWERTY);
      } else {
        layer_off(_SYMBOLS);
        update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _QWERTY);
      }
      return false;
    case CONTROL:
        if (record->event.pressed) {
          layer_on(_CONTROL);
          update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _CONTROL);
        } else {
          layer_off(_CONTROL);
          update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _CONTROL);
        }
        return false;
    case QWERTY:
        if (record->event.pressed) {
          layer_on(_QWERTY);
          update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _QWERTY);
        } else {
          layer_off(_QWERTY);
          update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _QWERTY);
        }
        return false;
    case RGBRST:
        if (record->event.pressed) {
          eeconfig_update_rgb_matrix_default();
          rgb_matrix_enable();
        }
      update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _QWERTY);
      break;

      default: update_tri_layer_RGB(_NAVIGATE, _SYMBOLS, _QWERTY);
  }
  return true;
}

/*
#ifdef RGB_MATRIX_ENABLE

void suspend_power_down_keymap(void) {
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_keymap(void) {
    rgb_matrix_set_suspend_state(false);
}

#endif
*/

