#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN 1
#define _AD 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base (Qwerty)
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | \    |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  | Alt  | Tab  | Ctrl | GUI  | BkSp |Space | Fn   | Alt  | GUI  | Ctrl |Enter |
 * `-----------------------------------------------------------------------------------'
 */
[_BASE] = LAYOUT( \
  KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
  KC_CTRL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT , \
  TG(_FN),  KC_LALT, KC_TAB,  KC_LCTL, KC_LGUI, KC_BSPC, KC_SPC,  MO(_FN), KC_RALT, KC_RGUI, KC_RCTL, KC_ENT \
),

/* Fn
 * ,-----------------------------------------------------------------------------------.
 * |Adjust|  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Vol+ |   `  | Home |  Up  |  End |      | PgUp |   7  |   8  |   9  |   -  |  =   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Vol- |   (  | Left | Down | Right|   )  | PgDn |   4  |   5  |   6  |   +  |  =   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Mute |   [  |   ]  |  {   |   }  |      |      |   1  |   2  |   3  |   *  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Fn   |      |      |      |      |             |      |      |   0  |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_FN] = LAYOUT( \
  KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
  KC_VOLU, KC_GRV , KC_HOME, KC_UP,   KC_END,  _______, KC_PGUP, KC_7,    KC_8,    KC_9,    KC_MINS, KC_EQUAL, \
  KC_VOLD, KC_LPRN, KC_LEFT, KC_DOWN, KC_RIGHT,KC_RPRN, KC_PGDN, KC_4,    KC_5,    KC_6,    KC_PLUS, KC_EQUAL, \
  KC_MUTE, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______, _______, KC_1,    KC_2,    KC_3,    KC_ASTR, _______, \
  TG(_AD), _______, _______, _______, _______, _______, _______, _______, KC_DOT,  KC_0,    _______, _______ \
),

/* Adjust
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset|RGB Tg|RGB Md|Hue Up|Hue Dn|Sat Up|Sat Dn|Val Up|Val Dn|      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_AD] =  LAYOUT( \
  RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, _______, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, _______, \
  _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, _______, _______, _______, _______, _______,\
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
  TO(0),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
)


};

const rgblight_segment_t PROGMEM fn_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {5, 1, HSV_BLUE}
);
const rgblight_segment_t PROGMEM ad_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {5, 1, HSV_RED}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    fn_light_layer,
    ad_light_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;
}

/*layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    return state;
}*/

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _FN));
    rgblight_set_layer_state(1, layer_state_cmp(state, _AD));
    return state;
}
