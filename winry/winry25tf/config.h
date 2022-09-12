/* Copyright 2021 Andrzej Ressel (andrzej.ressel@gmail.com)
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

#pragma once

#include "config_common.h"

#define MATRIX_ROWS 5
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { E6, F0, D6, D2, B6 }
#define MATRIX_COL_PINS { F5, C7, B7, B2, B4 }

#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN D5		             // The pin connected to the data pin of the LEDs		
#define RGBLED_NUM 40                        // number of LEDs 25 key and 15 down side   
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 150              // The maximum brightness level
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #define RGBLIGHT_EFFECT_RGB_TEST
// #define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 9               // Defining Lighting Layers - define 8
#define RGBLIGHT_LAYERS_RETAIN_VAL          // Retain brightness
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF    // Overriding RGB Lighting on/off status
#define RGBLIGHT_SLEEP                      // If defined, the RGB lighting will be switched off when the host goes to sleep




