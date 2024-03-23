DEFAULT_FOLDER = splitkb/kyria/rev2
LEADER_ENABLE = no        # Enable the Leader Key feature
SPLIT_KEYBOARD = yes
VIA_ENABLE = no
SHARED_EP_ENABLE = no
VIRTSER_ENABLE = no
COMBO_ENABLE = no
KEYBOARD_SHARED_EP = no

RING_BUFFERED_6KRO_REPORT_ENABLE = no
WAIT_FOR_USB = no

TAP_DANCE_ENABLE = no

#POINTING_DEVICE_DRIVER = pimoroni_trackball
#POINTING_DEVICE_DRIVER = pmw3320

DEBOUNCE_TYPE =  sym_defer_pr
#DEBOUNCE_TYPE = asym_eager_defer_pk
#DEBOUNCE_TYPE = sym_defer_pk
#DEBOUNCE_TYPE =  sym_defer_g
CAPS_WORD_ENABLE = yes
UNICODE_ENABLE = no
UNICODEMAP_ENABLE = no
AUTO_SHIFT_ENABLE = no
SEND_STRING_ENABLE = no

BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite

MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration

NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE= no       # Enable keyboard backlight functionality

RGBLIGHT_SUPPORTED = no
RGBLIGHT_ENABLE = no         # Enable keyboard RGB underglow

# RGBLIGHT_DRIVER = WS2812

AUDIO_ENABLE = no           # Audio output
RGB_MATRIX_SUPPORTED = no
RGB_MATRIX_ENABLE = no
# RGB_MATRIX_DRIVER = WS2812

# WS2812_DRIVER = vendor
# WS2812_DRIVER = i2c
# WS2812_DRIVER = bitbang

ENCODER_ENABLE = yes       # Enables the use of one or more encoders

# if firmware size over limit, try this option
LTO_ENABLE = yes
EXTRAFLAGS += -flto

OLED_TIMEOUT = 500
OLED_ENABLE = yes
OLED_DRIVER = ssd1306   # Enables the use of OLED displays
# OLED_TIMEOUT=5000
MIDI_ENABLE = no

KEY_OVERRIDE_ENABLE = no

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = custom
POINTING_DEVICE_DRIVER = pimoroni_trackball

#SRC += trackpad.c IQS5xx.c
#tap_dance.c
#outputselect.c

