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

//#define USE_MATRIX_I2C
#define USE_SERIAL

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90
#define MASTER_RIGHT

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

/* Select hand configuration */


//  #define EE_HANDS
//  #define NO_DEBUG
//  #define NO_PRINT

// #undef NO_ACTION_LAYER

//#define USE_SERIAL_PD2
#define FORCE_NKRO

// #define NO_IGNORE_MOD_TAP_INTERRUPT
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 4
#define OLED_TIMEOUT 60000
#define OLED_ SCROLL 5000
#define OLED_UPDATE_INTERVAL 300
#define RETRO_TAPPING_PER_KEY

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 2000 // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED D5 // Specify an optional status LED by GPIO number which blinks when entering the bootloader

#define TAPPING_FORCE_HOLD
// #define RETRO_TAPPING
#define TAP_CODE_DELAY 10
#define PERMISSIVE_HOLD
// #define TAPPING_TERM_PER_KEY
// #define TAPPING_FORCE_HOLD_PER_KEY
#define QUICK_TAP_TERM 100
#define TAPPING_TERM 200
#define CAPS_WORD_IDLE_TIMEOUT 5000

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

//#define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE

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

// #define F_SCL 100000L

#define FORCE_NKRO


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
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
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
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    undef ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_BAND_SAT
#    define ENABLE_RGB_MATRIX_BAND_VAL
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    define  ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_DUAL_BEACON
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    define ENABLE_RGB_MATRIX_RAINDROPS
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    define ENABLE_RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_MULTISPLASH
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif

//#define LAYER_STATE_8BIT
#define LAYER_STATE_16BIT

