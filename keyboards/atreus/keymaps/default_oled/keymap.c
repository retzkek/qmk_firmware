// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "charcode.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _RS 1
#define _LW 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT( /* Qwerty */
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P    ,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN ,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH ,
    KC_ESC, KC_TAB, KC_LGUI,  KC_LSFT, KC_BSPC,  KC_LCTL, KC_LALT, KC_SPC,  MO(_RS), KC_MINS, KC_QUOT, KC_ENT
  ),

  /*
   *  !       @     up     {    }        ||     pgup    7     8     9    *
   *  #     left   down  right  $        ||     pgdn    4     5     6    +
   *  [       ]      (     )    &        ||       `     1     2     3    \
   * lower  insert super shift bksp ctrl || alt space   fn    .     0    =
   */
  [_RS] = LAYOUT( /* [> RAISE <] */
    KC_EXLM, KC_AT,   KC_UP,   KC_LCBR, KC_RCBR,                   KC_PGUP, KC_7,    KC_8,   KC_9, KC_ASTR ,
    KC_HASH, KC_LEFT, KC_DOWN, KC_RGHT, KC_DLR,                    KC_PGDN, KC_4,    KC_5,   KC_6, KC_PLUS ,
    KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_AMPR,                   KC_GRV,  KC_1,    KC_2,   KC_3, KC_BSLS ,
    TG(_LW), KC_INS,  KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  KC_TRNS, KC_DOT, KC_0, KC_EQL  ),
  /*
   * insert home   up  end   pgup       ||      up     F7    F8    F9   F10
   *  del   left  down right pgdn       ||     down    F4    F5    F6   F11
   *       volup             reset      ||             F1    F2    F3   F12
   *       voldn  super shift bksp ctrl || alt space   L0  prtsc scroll pause
   */
  [_LW] = LAYOUT( /* [> LOWER <] */
    KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,                   KC_UP,   KC_F7,   KC_F8,   KC_F9,   KC_F10  ,
    KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                   KC_DOWN, KC_F4,   KC_F5,   KC_F6,   KC_F11  ,
    KC_NO,   KC_VOLU, KC_NO,   KC_NO,   RESET,                     KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12  ,
    KC_NO,   KC_VOLD, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  TO(_QW), KC_PSCR, KC_SLCK, KC_PAUS )
};

const char PROGMEM charmaps[][LAYOUT_COLS] = {
  [_QW] = LAYOUT_CH(
    CH_Q_CAP, CH_W_CAP, CH_E_CAP, CH_R_CAP, CH_T_CAP,    CH_Y_CAP, CH_U_CAP, CH_I_CAP, CH_O_CAP, CH_P_CAP,
    CH_A_CAP, CH_S_CAP, CH_D_CAP, CH_F_CAP, CH_G_CAP,    CH_H_CAP, CH_J_CAP, CH_K_CAP, CH_L_CAP, CH_SCLN ,
    CH_Z_CAP, CH_X_CAP, CH_C_CAP, CH_V_CAP, CH_B_CAP,    CH_N_CAP, CH_M_CAP, CH_COMM,  CH_DOT,   CH_SLSH ,
    CH_ESC,   CH_TAB,   CH_LGUI,  CH_LSFT,  CH_BSPC,     CH_SPC,   CH_RAISE, CH_MINS,  CH_QUOT,  CH_ENT  ),
  [_RS] = LAYOUT_CH(
    CH_EXLM,  CH_AT,    CH_UP,    CH_LCBR,  CH_RCBR,     CH_PGUP,  CH_7,     CH_8,    CH_9,  CH_ASTR ,
    CH_HASH,  CH_LEFT,  CH_DOWN,  CH_RGHT,  CH_DLR,      CH_PGDN,  CH_4,     CH_5,    CH_6,  CH_PLUS ,
    CH_LBRC,  CH_RBRC,  CH_LPRN,  CH_RPRN,  CH_AMPR,     CH_GRV,   CH_1,     CH_2,    CH_3,  CH_BSLS ,
    CH_RAISE, CH_INS,   CH_LGUI,  CH_LSFT,  CH_BSPC,     CH_SPC,   CH_TRNS,  CH_DOT,  CH_0,  CH_EQL  ),
  [_LW] = LAYOUT_CH(
    CH_INS,   CH_HOME,  CH_UP,    CH_END,   CH_PGUP,     CH_UP,    CH_F7,    CH_F8,    CH_F9,    CH_F10  ,
    CH_DEL,   CH_LEFT,  CH_DOWN,  CH_RGHT,  CH_PGDN,     CH_DOWN,  CH_F4,    CH_F5,    CH_F6,    CH_F11  ,
    CH_NO,    CH_VOLU,  CH_NO,    CH_NO,    CH_RESET,    CH_NO,    CH_F1,    CH_F2,    CH_F3,    CH_F12  ,
    CH_NO,    CH_VOLD,  CH_LGUI,  CH_LSFT,  CH_BSPC,     CH_SPC,   CH_LOWER, CH_PSCR,  CH_SLCK,  CH_PAUS )
};


#ifdef OLED_DRIVER_ENABLE

void oled_task_user(void) {
    // Host Keyboard Layer Status
    switch (get_highest_layer(layer_state)) {
        case _QW:
            oled_write_P(PSTR("0:     Characters    "), true);
            oled_write_P(charmaps[_QW], false);
            //oled_off();
            break;
        case _RS:
            oled_write_P(PSTR("1:      Numbers      "), true);
            oled_write_P(charmaps[_RS], false);
            break;
        case _LW:
            oled_write_P(PSTR("2:     Functions     "), true);
            oled_write_P(charmaps[_LW], false);
            break;
        default:
            oled_write_P(PSTR("Undefined"), false);
    }

    /*
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    */
}
#endif
