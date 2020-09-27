// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H
#include "version.h"
#include "charcode.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _RS 1
#define _LW 2

enum my_keycodes {
  INFO = SAFE_RANGE
};

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
    INFO,    KC_VOLD, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC,  TO(_QW), KC_PSCR, KC_SLCK, KC_PAUS )
};

const char PROGMEM charmaps[][LAYOUT_COLS] = {
  [_QW] = LAYOUT_ACH(
    ACH_Q_CAP, ACH_W_CAP, ACH_E_CAP, ACH_R_CAP, ACH_T_CAP,    ACH_Y_CAP, ACH_U_CAP, ACH_I_CAP, ACH_O_CAP, ACH_P_CAP,
    ACH_A_CAP, ACH_S_CAP, ACH_D_CAP, ACH_F_CAP, ACH_G_CAP,    ACH_H_CAP, ACH_J_CAP, ACH_K_CAP, ACH_L_CAP, ACH_SCLN ,
    ACH_Z_CAP, ACH_X_CAP, ACH_C_CAP, ACH_V_CAP, ACH_B_CAP,    ACH_N_CAP, ACH_M_CAP, ACH_COMM,  ACH_DOT,   ACH_SLSH ,
    ACH_ESC,   ACH_TAB,   ACH_LGUI,  ACH_LSFT,  ACH_BSPC,     ACH_SPC,   ACH_RAISE, ACH_MINS,  ACH_QUOT,  ACH_ENT  ),
  [_RS] = LAYOUT_ACH(
    ACH_EXLM,  ACH_AT,    ACH_UP,    ACH_LCBR,  ACH_RCBR,     ACH_PGUP,  ACH_7,     ACH_8,    ACH_9,  ACH_ASTR ,
    ACH_HASH,  ACH_LEFT,  ACH_DOWN,  ACH_RGHT,  ACH_DLR,      ACH_PGDN,  ACH_4,     ACH_5,    ACH_6,  ACH_PLUS ,
    ACH_LBRC,  ACH_RBRC,  ACH_LPRN,  ACH_RPRN,  ACH_AMPR,     ACH_GRV,   ACH_1,     ACH_2,    ACH_3,  ACH_BSLS ,
    ACH_RAISE, ACH_INS,   ACH_LGUI,  ACH_LSFT,  ACH_BSPC,     ACH_SPC,   ACH_TRNS,  ACH_DOT,  ACH_0,  ACH_EQL  ),
  [_LW] = LAYOUT_ACH(
    ACH_INS,   ACH_HOME,  ACH_UP,    ACH_END,   ACH_PGUP,     ACH_UP,    ACH_F7,    ACH_F8,    ACH_F9,    ACH_F10  ,
    ACH_DEL,   ACH_LEFT,  ACH_DOWN,  ACH_RGHT,  ACH_PGDN,     ACH_DOWN,  ACH_F4,    ACH_F5,    ACH_F6,    ACH_F11  ,
    ACH_NO,    ACH_VOLU,  ACH_NO,    ACH_NO,    ACH_RESET,    ACH_NO,    ACH_F1,    ACH_F2,    ACH_F3,    ACH_F12  ,
    ACH_INFO,  ACH_VOLD,  ACH_LGUI,  ACH_LSFT,  ACH_BSPC,     ACH_SPC,   ACH_LOWER, ACH_PSCR,  ACH_SLCK,  ACH_PAUS )
};


#ifdef OLED_DRIVER_ENABLE

static uint16_t info_timer;
#define INFO_TIMEOUT 3000 /*  how long to display info scren in ms */


static void render_info(void) {
    static const char PROGMEM atreus_logo[] = ACH_LOGO;
    oled_write_P(atreus_logo, false);
    oled_write_P(PSTR("_____________________"), false);
    oled_write_ln_P(PSTR(QMK_VERSION), false);
    oled_write_ln_P(PSTR(QMK_BUILDDATE), false);
    oled_write_ln_P(PSTR(QMK_KEYBOARD), false);
    oled_write_ln_P(PSTR(QMK_KEYMAP), false);
}

void oled_task_user(void) {
    if (timer_elapsed(info_timer) < INFO_TIMEOUT) {
      render_info();
      return;
    }
    // keep timer_elapased() from overrunning
    info_timer = timer_read()-INFO_TIMEOUT;
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

void keyboard_post_init_user(void) {
  // display info screen on startup
  info_timer = timer_read();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case INFO:
      info_timer = timer_read();
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}

#endif
