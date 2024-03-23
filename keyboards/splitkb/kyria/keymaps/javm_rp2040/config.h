#pragma once
//#define MASTER_RIGHT


#define USE_SERIAL
//#define USE_SERIAL_PD2
//  #define USE_I2C
// #define USE_SERIAL_PD2
#define SELECT_SOFT_SERIAL_SPEED 1
#define FORCED_SYNC_THROTTLE_MS 100
#define SPLIT_MAX_CONNECTION_ERRORS 10
#define SPLIT_CONNECTION_CHECK_TIMEOUT 500
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_ACTIVITY_ENABLE
#define SPLIT_OLED_ENABLE
#define SPLIT_USB_DETECT
#define SPLIT_ACTIVITY_ENABLE
// #define SPLIT_USB_TIMEOUT 2000
// #define SPLIT_ST7565_ENABLE
#define RGBLIGHT_SPLIT

//#define EE_HANDS
//#define STRICT_LAYER_RELEASE
#define ENABLE_COMPILE_KEYCODE

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_COMBINED
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// #define POINTING_DEVICE_INVERT_X_RIGHT
// #define POINTING_DEVICE_INVERT_Y_RIGHT
#define POINTING_DEVICE_GESTURES_CURSOR_GLIDE_ENABLE
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE

#define SPLIT_ACTIVITY_ENABLE
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

#define ONESHOT_TAP_TOGGLE 5 /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000 /* Time (in ms) before the one shot key is released */

#define VENDOR_ID 0x8D1D
// #define PRODUCT_ID 0xCF44:

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#ifndef NO_DEBUG
#    define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif // !NO_PRINT

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET             // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500 // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED D5      // Specify an optional status LED by GPIO number which blinks when entering the bootloader

#define LED_CAPS_LOCK_PIN 24
#define LED_PIN_ON_STATE 0
#define CAPS_WORD_IDLE_TIMEOUT 5000

#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6
#define BACKLIGHT_LEVELS 3
#define LOCKING_RESYNC_ENABLE
#define F_SCL 100000L
// #define NO_DEBUG
// #define NO_PRINT
// #define STRICT_LAYER_RELEASE

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
// #define OLED_TIMEOUT	6000
// #define OLED_FADE_OUT
// #define OLED_FADE_OUT_INTERVAL 4
// #define OLED_SCROLL
// #define OLED_SCROLL_TIMEOUT 5000
// #define OLED_SCROLL_TIMEOUT_RIGHT
// #define OLED_UPDATE_INTERVAL 500
#    define SPLIT_OLED_ENABLE
#    define OLED_FONT_H "keyboards/crkbd/keymaps/javm/glcdfont.c"
#endif

// The number of LEDs connected
// #define DRIVER_LED_TOTAL 50

#define ENCODER_RESOLUTION 1
// #define LOCKING_SUPPORT_ENABLE
// #define LOCKING_RESYNC_ENABLE

// #define AUTO_SHIFT_TIMEOUT 230

// #define MOUSEKEY_DELAY 100
// #define MOUSEKEY_INTERVAL 16
// #define MOUSEKEY_MAX_SPEED 2
// #define MOUSEKEY_WHEEL_MAX_SPEED 42
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 15
//
#define GRAVE_ESC_CTRL_OVERRIDE

#define LEADER_TIMEOUT 200
#define LEADER_PER_KEY_TIMING

#define FORCE_NKRO

// Lets you roll mod-tap keys
// #define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
#define TAPPING_TERM_PER_KEY
// #define TAPPING_FORCE_HOLD_PER_KEY
#define QUICK_TAP_TERM 100
#define TAPPING_TERM 200
#define TAP_CODE_DELAY 15
#define TAPPING_TERM_PER_KEY
// #define RETRO_TAPPING
#define CAPS_WORD_IDLE_TIMEOUT 5000

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// #define WS2812_SPI_USE_CIRCULAR_BUFFER
// #define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral

// #define MATRIX_INDICATORS
#define USB_POLLING_INTERVAL_MS 1
#undef QMK_KEYS_PER_SCAN
#define QMK_KEYS_PER_SCAN 12

#undef DEBOUNCE
//#define DEBOUNCING_DELAY 8
#define DEBOUNCE 10
#define FORCE_NKRO

#define LAYER_STATE_8BIT
// #define LAYER_STATE_16BIT
// #define LAYER_STATE_8BIT

#ifdef RGB_MATRIX_ENABLE
//#    define DRIVER_LED_TOTAL 50
#    define RGB_MATRIX_KEYPRESSES  // reacts to keypresses
#    define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
#define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#    define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#    define RGB_MATRIX_LED_FLUSH_LIMIT 16                           // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT     // Sets the default mode, if none has been set
#    define RGB_DISABLE_AFTER_TIMEOUT 30                            // number of ticks to wait until disabling effects
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#    define RGB_MATRIX_HUE_STEP 2
#    define RGB_MATRIX_SAT_STEP 2
#    define RGB_MATRIX_VAL_STEP 2
#    define RGB_MATRIX_SPD_STEP 2
#define RGB_TRIGGER_ON_KEYDOWN

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    define ENABLE_RGB_MATRIX_BREATHING
#    define ENABLE_RGB_MATRIX_BAND_SAT
#    define ENABLE_RGB_MATRIX_BAND_VAL
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_DUAL_BEACON
#    undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    define ENABLE_RGB_MATRIX_RAINDROPS
#    undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
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
#    define ENABLE_RGB_MATRIX_BREATHING
#endif

#define FALSE 0
#define TRUE !FALSE

/**
 *
 * TRACKPAD STUFF
 *
 */
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 6
#define MOUSEKEY_WHEEL_DELAY 400
#define MOUSEWHEEL_SENSITIVITY 1
#define TRACKPAD_RATE 10
// enable / disable gestures
#define ZOOM_ENABLED FALSE
#define SCROLL_ENABLED TRUE

#define IQS5xx_ADDR 0x74
#define RDY_PIN D2
#define END_WINDOW (uint16_t)0xEEEE

#define LCPO_KEYS KC_LCTL, KC_LSFT, KC_9
#define RCPC_KEYS KC_RCTL, KC_RSFT, KC_0
