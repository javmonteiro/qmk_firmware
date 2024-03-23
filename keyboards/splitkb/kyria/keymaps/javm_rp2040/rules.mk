
DEFAULT_FOLDER = splitkb/kyria/rev3
BOARD = GENERIC_RP_RP2040
LEADER_ENABLE = no        # Enable the Leader Key feature
SPLIT_KEYBOARD = yes
VIA_ENABLE = yes
SHARED_EP_ENABLE = no
KEYBOARD_SHARED_EP = no
SERIAL_DRIVER = vendor
#SERIAL_DRIVER = bitbang
WPM_ENABLE = no
BLUETOOTH = no

TAP_DANCE_ENABLE = yes

OS_DETECTION_ENABLE = yes


#F_CPU = 8000000

DEBOUNCE_TYPE =  sym_defer_pr
#DEBOUNCE_TYPE = asym_eager_defer_pk
#DEBOUNCE_TYPE = sym_defer_pk
#DEBOUNCE_TYPE =  sym_defer_g
#DEBOUNCE_TYPE =  sym_defer_pr
CAPS_WORD_ENABLE = yes
#VIRTSER_ENABLE = yes
UNICODE_ENABLE = yes
AUTO_SHIFT_ENABLE = no

SEND_STRING_ENABLE = yes

BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite

MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration

NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE= no       # Enable keyboard backlight functionality

RGBLIGHT_SUPPORTED = no
RGBLIGHT_ENABLE = no         # Enable keyboard RGB underglow

RGBLIGHT_DRIVER = ws2812

AUDIO_ENABLE = no           # Audio output
RGB_MATRIX_SUPPORTED = yes
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812
RGB_MATRIX_CUSTOM_KB = no

WS2812_DRIVER = vendor
#WS2812_DRIVER = i2c
#WS2812_DRIVER = bitbang

ENCODER_ENABLE = yes       # Enables the use of one or more encoders
ENCODER_MAP_ENABLE = yes
# if firmware size over limit, try this option
LTO_ENABLE = yes


OLED_ENABLE = yes
OLED_DRIVER = ssd1306   # Enables the use of OLED displays
OLED_TIMEOUT= 5000
MIDI_ENABLE = no
EXTRAFLAGS += -flto
#VELOCIKEY_ENABLE = yes

RAW_ENABLE = no
DYNAMIC_KEYMAP_ENABLE = no
#DYNAMIC_TAPPING_TERM_ENABLE=yes
KEY_OVERRIDE_ENABLE = yes
#LUNA_ENABLE = yes
#SRC+= luna.c


POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = custom
#POINTING_DEVICE_DRIVER = pimoroni_trackball

SRC += trackpad.c IQS5xx.c
#tap_dance.c
#outputselect.c
