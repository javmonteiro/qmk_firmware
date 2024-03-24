/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

#undef USE_MATRIX_I2C
#undef USE_SERIAL
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90

/* Select hand configuration */


// #define MASTER_RIGHT
//  #define EE_HANDS
//  #define NO_DEBUG
//  #define NO_PRINT

// #undef NO_ACTION_LAYER

//#define USE_SERIAL
#define USE_SERIAL_PD2
#define FORCE_NKRO

// #define NO_IGNORE_MOD_TAP_INTERRUPT
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 4
#define OLED_TIMEOUT 10000
#define OLED_ SCROLL 5000
#define OLED_UPDATE_INTERVAL 300
// #define TAPPING_FORCE_HOLD
// #define RETRO_TAPPING
#define RETRO_TAPPING_PER_KEY


#define TAPPING_FORCE_HOLD
#define TAP_CODE_DELAY 10
#define PERMISSIVE_HOLD
// #define TAPPING_TERM_PER_KEY
// #define TAPPING_FORCE_HOLD_PER_KEY
#define QUICK_TAP_TERM 100
#define TAPPING_TERM 200
// #define RETRO_TAPPING
#define CAPS_WORD_IDLE_TIMEOUT 5000

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#undef SPLIT_LED_STATE_ENABLE
#undef SPLIT_MODS_ENABLE

#define USB_POLLING_INTERVAL_MS 1
#undef QMK_KEYS_PER_SCAN
#define QMK_KEYS_PER_SCAN 12

#undef DEBOUNCE
#define DEBOUNCE 10
#define USB_POLLING_INTERVAL_MS 1
#define USB_SUSPEND_WAKEUP_DELAY 0
// #define LOCKING_RESYNC_ENABLE
// #define NO_DEBUG
// #define NO_PRINT

#define FORCE_NKRO
#undef QMK_KEYS_PER_SCAN
#define QMK_KEYS_PER_SCAN 12

// #define F_SCL 100000L

#define FORCE_NKRO

#define LAYER_STATE_8BIT

// #define AUTO_SHIFT_REPEAT
// #define AUTO_SHIFT_REPEAT_PER_KEY

#ifdef OLED_ENABLE
#    define SPLIT_LAYER_STATE_ENABLE
#    define SPLIT_LED_STATE_ENABLE
#    define SPLIT_MODS_ENABLE
#    define SPLIT_OLED_ENABLE
#    define OLED_FONT_H "keyboards/crkbd/keymaps/javm/glcdfont.c"
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_KEYPRESSES          // reacts to keypresses
#    undef RGB_MATRIX_KEYRELEASES          // reacts to keyreleases (instead of keypresses)
#    define RGB_DISABLE_AFTER_TIMEOUT 30   // number of ticks to wait until disabling effects
#    define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#    undef RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#    define RGB_MATRIX_HUE_STEP 4
#    define RGB_MATRIX_SAT_STEP 4
#    define RGB_MATRIX_VAL_STEP 4
#    define RGB_MATRIX_SPD_STEP 5
#    define RGB_TRIGGER_ON_KEYDOWN
#    define RGB_DISABLE_WHEN_USB_SUSPENDED

#define SPLIT_LAYER_STATE_ENABLE

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
#    undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    define ENABLE_RGB_MATRIX_BREATHING
#    undef ENABLE_RGB_MATRIX_BAND_SAT
#    undef ENABLE_RGB_MATRIX_BAND_VAL
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    undef  ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    undef ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_DUAL_BEACON
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    define ENABLE_RGB_MATRIX_RAINDROPS
#    undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    undef ENABLE_RGB_MATRIX_SPLASH
#    undef ENABLE_RGB_MATRIX_MULTISPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#    undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

#define LAYER_STATE_8BIT
// #define LAYER_STATE_16BIT

#undef DEBOUNCE
#define DEBOUNCE 10
#define USB_POLLING_INTERVAL_MS 1
#define USB_SUSPEND_WAKEUP_DELAY 0
