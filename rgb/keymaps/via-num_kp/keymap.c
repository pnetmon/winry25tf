/* Copyright 2022 Nikolay N
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum my_layers {
    layer0,
    layer1,
    layer2,
    layer3,
    layer4,
    layer5,
    layer6,
    layer7,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [layer0] = LAYOUT(
        KC_ESC,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_BSPC, KC_P7,    KC_P8,   KC_P9,   KC_PPLS,
        RGB_TOG, KC_P4,    KC_P5,   KC_P6,   KC_PPLS,
        KC_NO,   KC_P1,    KC_P2,   KC_P3,   MO(layer1),
        KC_COPY, KC_PASTE, KC_P0,   KC_PDOT, KC_PENT
    ),
    [layer1] = LAYOUT(
        RGB_TOG,    RGB_MOD,    RGB_RMOD,   RGB_M_P, RGB_HUI,
        RGB_VAI,    RGB_SAI,    RGB_HUI,    RGB_SPI, RGB_M_B,
        RGB_VAD,    RGB_SAD,    RGB_HUD,    RGB_SPD, KC_NO,
        TG(layer2), TG(layer3), TG(layer4), KC_NO,   KC_NO,
        TG(layer5), TG(layer6), TG(layer7), KC_NO,   KC_NO
    ),
    [layer2] = LAYOUT(
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_P2,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(layer0),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [layer3] = LAYOUT(
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_P3,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(layer0),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [layer4] = LAYOUT(
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_P4,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(layer0),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [layer5] = LAYOUT(
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_P5,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(layer0),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [layer6] = LAYOUT(
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_P6,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(layer0),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [layer7] = LAYOUT(
        KC_ESC,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_P7,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(layer0),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    )
};


#define RGBLIGHT_LAYERS

const rgblight_segment_t PROGMEM my_layer_num[] = RGBLIGHT_LAYER_SEGMENTS(
    {21, 1, HSV_AZURE}, // Light 1 LED, starting with LED 21 when Num Losk is active
    {12, 1, HSV_GREEN},
    {16, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {11, 1, HSV_AZURE}
);
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {17, 1, HSV_AZURE}, // Light 1 LED, starting with LED 17 when keyboard layer 2 is active
    {24, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {4, 1, HSV_AZURE},
    {9, 1, HSV_GREEN}, 
    {19, 1, HSV_GREEN} 
);
const rgblight_segment_t PROGMEM my_layer4_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {3, 1, HSV_AZURE},
    {10, 1, HSV_GREEN}, 
    {18, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_layer5_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {16, 1, HSV_AZURE}
);
const rgblight_segment_t PROGMEM my_layer6_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 1, HSV_AZURE}
);
const rgblight_segment_t PROGMEM my_layer7_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {14, 1, HSV_AZURE}
);

enum rgb_layer_index {
    L_NUMLOCK,
    L_1,
    L_2,
    L_3,
    L_4,
    L_5,
    L_6,
    L_7,
};

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    [L_NUMLOCK]=my_layer_num,
    [L_1]=my_layer1_layer,
    [L_2]=my_layer2_layer,
    [L_3]=my_layer3_layer,
    [L_4]=my_layer4_layer,
    [L_5]=my_layer5_layer,
    [L_6]=my_layer6_layer,
    [L_7]=my_layer7_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

#define NUMLOCK_ON (host_keyboard_leds() & (1<<USB_LED_NUM_LOCK))

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(L_NUMLOCK, NUMLOCK_ON);
    rgblight_set_layer_state(L_1, layer_state_cmp(state, layer1));
    rgblight_set_layer_state(L_2, layer_state_cmp(state, layer2));
    rgblight_set_layer_state(L_3, layer_state_cmp(state, layer3));
    rgblight_set_layer_state(L_4, layer_state_cmp(state, layer4));
    rgblight_set_layer_state(L_5, layer_state_cmp(state, layer5));
    rgblight_set_layer_state(L_6, layer_state_cmp(state, layer6));
    rgblight_set_layer_state(L_7, layer_state_cmp(state, layer7));
    return state;
}

// This function is called when num lock indicators (num lock led) are changed/toggled/updated
bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(L_NUMLOCK, led_state.num_lock);
    return true;
}

