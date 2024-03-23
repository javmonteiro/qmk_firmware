/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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

#define FALSE 0
#define TRUE !FALSE

// #define USE_SERIAL
//  #define USE_I2C
#define USE_SERIAL_PD2

#define CAPS_WORD_TOGGLE_KEY

#define SPLIT_USB_DETECT
// #define SPLIT_TRANSPORT_MIRROR
// #define SPLIT_LAYER_STATE_ENABLE
// #define SPLIT_MODS_ENABLE
//  #define SPLIT_ACTIVITY_ENABLE
#define SELECT_SOFT_SERIAL_SPEED 1
// #define SPLIT_ACTIVITY_ENABLE
//  #define SPLIT_USB_TIMEOUT 2000

// #define LED_CAPS_LOCK_PIN 24
// #define LED_PIN_ON_STATE 0

// #define RGB_DI_PIN
// #define RGB_DI_PIN 25
// #define RGBLED_NUM
// #define RGBLED_NUM 2
// #define RGBLED_SPLIT
// #define RGBLED_SPLIT {1, 1}j

// #define LEADER_TIMEOUT 200
// #define LEADER_PER_KEY_TIMING

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
// #    define OLED_TIMEOUT	60000
// #    define OLED_FADE_OUT
// #    define OLED_FADE_OUT_INTERVAL 4
// #define OLED_SCROLL
// #define OLED_SCROLL_TIMEOUT 5000
// #define OLED_SCROLL_TIMEOUT_RIGHT
#    define OLED_UPDATE_INTERVAL 200
#    define SPLIT_LAYER_STATE_ENABLE
#    undef SPLIT_LED_STATE_ENABLE
#    define SPLIT_MODS_ENABLE
// #    define SPLIT_OLED_ENABLE
#    define OLED_FONT_H "keyboards/crkbd/keymaps/javm/glcdfont.c"
#endif

// #define ENCODER_MAP_ENABLE

// The number of LEDs connected
// #define DRIVER_LED_TOTAL 50

#define ENCODER_RESOLUTION 1

// #define AUTO_SHIFT_TIMEOUT 230

// #define MK_KINETIC_SPEED
#define MOUSEKEY_DELAY 5
#define MOUSEKEY_INTERVAL 10
#define MOUSEKEY_MOVE_DELTA 16
#define MOUSEKEY_INITIAL_SPEED 100
#define MOUSEKEY_BASE_SPEED 5000
#define MOUSEKEY_DECELERATED_SPEED 400
#define MOUSEKEY_ACCELERATED_SPEED 3000
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 16
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 32
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8
#define MOUSEKEY_WHEEL_MAX_SPEED 42
#define MOUSEKEY_WHEEL_TIME_TO_MAX 15

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_COMBINED
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// #define POINTING_DEVICE_INVERT_X_RIGHT
// #define POINTING_DEVICE_INVERT_Y_RIGHT
//#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
//#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE

#define FORCE_NKRO
// Lets you roll mod-tap keys
#define TAPPING_FORCE_HOLD
#define TAP_CODE_DELAY 15
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

#ifndef NO_DEBUG
#    define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif // !NO_PRINT

// #define WS2812_SPI_USE_CIRCULAR_BUFFER
//  #define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral

#define LAYER_STATE_8BIT
// #define LAYER_STATE_16BIT

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

// #define ZOOM_ENABLED FALSE
// #define SCROLL_ENABLED TRUE

/// #define IQS5xx_ADDR 0x74
// #define RDY_PIN D2
// #define END_WINDOW (uint16_t)0xEEEE

#//define TRACKPAD_RATE 10

#define LCPO_KEYS KC_LCTL, KC_LSFT, KC_9
#define RCPC_KEYS KC_RCTL, KC_RSFT, KC_0

