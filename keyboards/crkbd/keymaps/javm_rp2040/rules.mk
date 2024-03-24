BOARD = GENERIC_RP_RP2040
VIA_ENABLE        = yes
NKRO_ENABLE        = yes
OLED_ENABLE        = yes
OLED_DRIVER        = ssd1306
LTO_ENABLE         = yes
VIA_ENABLE         = yes
MOUSEKEY_ENABLE = yes       # Mouse keys

COMMAND_ENABLE = no

WPM_ENABLE = no
#DEBOUNCE_TYPE =  asym_eager_defer_pk
DEBOUNCE_TYPE =  sym_defer_pr
CAPS_WORD_ENABLE = yes
OLED_TIMEOUT=50000
UNICODE_ENABLE = yes
MIDI_ENABLE = no
AUTO_SHIFT_ENABLE = no

#POINTING_DEVICE_ENABLE = yes
#POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
RGB_MATRIX_SUPPORTED = yes
RGB_MATRIX_ENABLE = yes
GB_MATRIX_DRIVER = ws2812
#WS2812_DRIVER = vendor

NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE= no       # Enable keyboard backlight functionality

RGBLIGHT_SUPPORTED = no
RGBLIGHT_ENABLE = no         # Enable keyboard RGB underglow

POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
POINTING_DEVICE_ENABLE = yes
#PIMORONI_TRACKBALL_ENABLE = yes

